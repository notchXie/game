#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter)
{
	
}

void tetrisblock::move(int x, int y)
{
	if (/*按下d键*/ 1)
	{
		x++;
	}
	if (/*按下a键*/ 1)
	{
		x--;
	}
	if (/*按下s键*/ 1)
	{
		y--;
	}
	if (/*按下w键*/ 1)
	{
		tetrisblock::rotate();
	}
}

void tetrisblock::rotate()
{
	//循环变形
}

