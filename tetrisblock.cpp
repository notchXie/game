#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter,int x,int y)
{
	//���������ɫ
	QColor color = QColor(qrand() % 256, qrand() % 256, qrand() % 256);
	
	painter.setPen(Qt::black);
	painter.setBrush(color);
	painter.drawRect(x * (WIDTH + INTERVAL), y * (HEIGHT + INTERVAL), WIDTH, HEIGHT);
	painter.drawRect((x+1) * (WIDTH + INTERVAL), (y) * (HEIGHT + INTERVAL), WIDTH, HEIGHT);
	painter.drawRect((x + 2) * (WIDTH + INTERVAL), (y) * (HEIGHT + INTERVAL), WIDTH, HEIGHT);
	painter.drawRect((x + 2) * (WIDTH + INTERVAL), (y+1) * (HEIGHT + INTERVAL), WIDTH, HEIGHT);
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
	//��ת����
	
}


