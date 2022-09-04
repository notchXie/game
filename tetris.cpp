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
	block.draw(painter, 1, 1);
	
}


