#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter)
{
	//�����
	rand();
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
	int i = 0;
	if (/*����w�� */1)
	{
		if (/*��ǰ���η���Ϊ0*/i==0)
		{
			/*���η���Ϊ1*/
			
			i = 1;
		}
		else if (/*��ǰ���η���Ϊ1*/i==1)
		{
			/*���η���Ϊ2*/
			i = 2;
		}
		else if (/*��ǰ���η���Ϊ2*/i==2)
		{
			/*���η���Ϊ3*/
			i = 3;
		}
		else if (/*��ǰ���η���Ϊ3*/i==3)
		{
			/*���η���Ϊ0*/
			i = 0;
		}
	}
	
}


