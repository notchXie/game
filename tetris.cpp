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
    
    int w = tetris::getWidth();
	int h = tetris::getHeight();
	//setFixedSize(w, h);
	
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
	painter.drawRect(0, 0, getWidth(), getHeight());
	
	tetrisblock block;
	
	//随机数确定初始位置
	int x = qrand() % (xMAX - COUNT);
	int y = 0;
	//1秒后方块下落
	block.draw(painter, x, y);
	block.move(x, 0);
	
}


void tetris::timerEvent(QTimerEvent* event,int y)
{
	
	if (event->timerId() == timerId)
	{
		y++;
		update();
	}
}

