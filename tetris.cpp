#include "tetris.h"
#include "ui_tetris.h"
#include <QPainter>
#include "tetrisblock.h"

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
	//1秒后方块下落
	block.draw(painter, x, 0);
	block.move(x, 0);
	
	
}

//定时器每秒下落一格
void tetris::timerEvent(QTimerEvent* event)
{

}

