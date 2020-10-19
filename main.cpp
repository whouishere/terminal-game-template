#include "main.h"

char key; //variable to store the key that is being pressed

game player;

int main()
{

	player.x = 1;
	player.y = 1;
	

    //***************************************
    //
    //             game renderer
    //
    //***************************************

    //the player's position on the map is = to the player character
	Map[player.y][player.x] = player.body;
	
    //******************************************************
    //                  main renderer loop
    //******************************************************
	while (true){ //while the game is running
	
        //for loop that renders the game itself
		for (int i = 0; i <= 22; i++){  //it makes a for loop that takes the y axis ends when it reaches the map size
			for (int j = 0; j <= 22; j++) //and another for loop that takes the x axis and ends when it reaches the map size too
				cout << Map[i][j];  //then it prints all the map characters, since both loops are going through every map character
        
			cout << endl;
		}
		
		key = getch(); //getch() function to detect a key without the need to show it on screen or press enter

		if (key == 'w' && Map[player.y - 1][player.x] == '-'){ //if that verifies if the w key has been pressed and if the direction the player is going is a air block
			player.OneUp();
		}
			
		if (key == 's' && Map[player.y + 1][player.x] == '-'){ //if that verifies if the s key has been pressed and if the direction the player is going is a air block
			player.OneDown();
		}
			
		if (key == 'a' && Map[player.y][player.x - 1] == '-'){ //if that verifies if the a key has been pressed and if the direction the player is going is a air block
			player.OneLeft();
		}
				
		if (key == 'd' && Map[player.y][player.x + 1] == '-'){ //if that verifies if the d key has been pressed and if the direction the player is going is a air block
			player.OneRight();
		}
		system ("cls"); //clears the terminal screen to update the game each frame
	}
}

/*
TO DO:

Make a bullet system which each bullet is a object that has its own X and Y position, and when it hits something it disappears or kills it.

*/
