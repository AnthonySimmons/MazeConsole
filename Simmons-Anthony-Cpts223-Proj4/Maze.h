#ifndef MAZE_H
#define MAZE_H

#include "DisjSets.h"


class Maze
{
public:
	explicit Maze(int numElements);

	void findPath(map<int, int> &m1);

	int oppositeWall(int x);

	int adjacent(int direction, int roomNum);

	void BFS(void);

	void DFS(void);

	void randomMaze(void);

	void fromFile(ifstream & input);

	void print() const;

	void printPath() const;

	void printVisited() const;

	bool isSolved() const;

	void reset();
private:
	vector<bool> doors;
	vector<bool> visited;
	vector<bool> path;
	int size;
	DisjSets S;
};

#endif