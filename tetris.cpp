#include "tetris.h"
#include "ui_tetris.h"
#include <QPainter>
#include "tetrisblock.h"
#include <qtimer.h>

tetris::tetris(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tetris)
{
    ui->setupUi(this);
	
}

tetris::~tetris()
{
    delete ui;
}

void tetris::paintEvent(QPaintEvent* event)
{
	QPainter painter(this);
	painter.setPen(Qt::black);
	painter.setBrush(Qt::black);
	painter.drawRect(0, 0, getWidth()+18, getHeight()+8);
	
	tetrisblock block;
	tetrisblock* pblock = &block;

	block.draw(painter, x, y);
	block.move(x, 0);
	
}


void tetris::timerEvent(QTimerEvent* event)
{
	
	if (event->timerId() == timerId)
	{
		y++;
		if (y < 30)
		{
			update();
		}
		else
		{
			killTimer(timerId);
		}
	}
}

