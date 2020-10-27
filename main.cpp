#include "main.h"

void gameRenderer()
{
	system (CLEAR); //clears the terminal screen to update the game each frame
	
	//for loop that renders the game itself
	for (int i = 0; i <= mapY - 1; i++){  //it makes a for loop that takes the y axis ends when it reaches the map size
		for (int j = 0; j <= mapX - 1; j++) //and another for loop that takes the x axis and ends when it reaches the map size too
		{
			if (player.x == j && player.y == i) cout << player.body;
			
			else if (Map[i][j] == 1) cout << blockChar;
			
			else if (Map[i][j] == 0) cout << " ";
		}
		cout << endl; //when the X axis for loop renders a horizontal line, end line.
	}
}

void controlsFunc()
{
	key = getch(); //getch() function to detect a key without the need to show it on screen or press enter

	if (key == 'w' && Map[player.y - 1][player.x] == airBlock){ //if that verifies if the w key has been pressed and if the direction the player is going is a air block
		player.OneUp();
	}
		
	if (key == 's' && Map[player.y + 1][player.x] == airBlock){ //if that verifies if the s key has been pressed and if the direction the player is going is a air block
		player.OneDown();
	}
		
	if (key == 'a' && Map[player.y][player.x - 1] == airBlock){ //if that verifies if the a key has been pressed and if the direction the player is going is a air block
		player.OneLeft();
	}
			
	if (key == 'd' && Map[player.y][player.x + 1] == airBlock){ //if that verifies if the d key has been pressed and if the direction the player is going is a air block
		player.OneRight();
	}
}

int main()
{

	//initial X and Y position of the player
	player.x = 1;
	player.y = 1;
	
    /******************************************************
    *                 main renderer loop
    ******************************************************/
	while (true) //while the game is running
	{
		gameRenderer(); //where the entire game is rendered at the screen
		
		controlsFunc(); //controls are received and change something in the screen
	}
}
