#include "tetris.h"
#include "ui_tetris.h"
#include <QPainter>
#include "tetrisblock.h"
#include <qtimer.h>
#include <QDebug>

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

	block.move(x, y);
	block.draw(painter);
	
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

void tetris::keyPressEvent(QKeyEvent* event)
{
	if (event->key() == Qt::Key_Left)
	{
		x--;
	}
	else if (event->key() == Qt::Key_Right)
	{
		x++;
	}
	else if (event->key() == Qt::Key_Down)
	{
		y++;
	}
	else if (event->key() == Qt::Key_Up)
	{
		//Ðý×ª·½¿é
	}
}
