
#include "Maze.h"


//int main(void)
int main(int argc, char **argv)
{
	srand(time(NULL));

	cout<<argc<<"\n";
	if(argc > 1)
	{
		ifstream input;
		input.open(argv[1]);

		if(input.is_open())
		{
			int x = 0;
			input>>x;
			Maze fileMaze(x*x);
			fileMaze.fromFile(input);
			fileMaze.BFS();	

			fileMaze.reset();

			fileMaze.DFS();
			system("Pause");
			system("cls");
		}

	}

	else
	{
		int size = 0;
		cout<<"Enter Size: ";
		cin>>size;
		Maze ranMaze(size*size);

		ranMaze.randomMaze();
		ranMaze.BFS();

		ranMaze.reset();

		ranMaze.DFS();
		system("Pause");
		system("cls");



	}
	system("Pause");
	system("cls");


	return 0;
}