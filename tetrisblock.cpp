#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter)
{
	//随机数
	rand();
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
	int i = 0;
	if (/*按下w键 */1)
	{
		if (/*当前变形方向为0*/i==0)
		{
			/*变形方向为1*/
			
			i = 1;
		}
		else if (/*当前变形方向为1*/i==1)
		{
			/*变形方向为2*/
			i = 2;
		}
		else if (/*当前变形方向为2*/i==2)
		{
			/*变形方向为3*/
			i = 3;
		}
		else if (/*当前变形方向为3*/i==3)
		{
			/*变形方向为0*/
			i = 0;
		}
	}
	
}


