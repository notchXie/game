#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter)
{
	
}

void tetrisblock::move(int x, int y)
{
	if (/*����d��*/ 1)
	{
		x++;
	}
	if (/*����a��*/ 1)
	{
		x--;
	}
	if (/*����s��*/ 1)
	{
		y--;
	}
	if (/*����w��*/ 1)
	{
		tetrisblock::rotate();
	}
}

void tetrisblock::rotate()
{
	//ѭ������
}

