#include "main.h"

void game::OneUp()
{
	y -= 1; //changes the object's y position to one block up
	Map[y][x] = body; //changes the air block of the now changed object's y position to the object character
	Map[y + 1][x] = '-'; //changes the previous object's y position block to air
}

void game::OneDown()
{
	y += 1; //changes the object's y position to one block down
	Map[y][x] = body; //changes the air block of the now changed object's y position to the object character
	Map[y - 1][x] = '-'; //changes the previous object's y position block to air
}

void game::OneRight()
{
	x += 1; //changes the object's x position to one block to the right
	Map[y][x] = body; //changes the air block of the now changed object's x position to the object character
	Map[y][x - 1] = '-'; //changes the previous object's x position block to air
}
void game::OneLeft()
{
	x -= 1; //changes the object's x position to one block to the left
	Map[y][x] = body; //changes the air block of the now changed object's x position to the object character
	Map[y][x + 1] = '-'; //changes the previous object's x position block to air
}