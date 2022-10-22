#include "tetrisblock.h"

void tetrisblock::draw(QPainter& painter)
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
	this->x = x;
	this->y = y;
}

void tetrisblock::movedown()
{
	y++;
}

void tetrisblock::moveleft()
{
	x--;
}

void tetrisblock::moveright()
{
	x++;
}

void tetrisblock::rotate()
{
	//旋转方块
	
}


