#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter,int x,int y)
{
	//随机方块颜色
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
	//旋转方块
	
}


