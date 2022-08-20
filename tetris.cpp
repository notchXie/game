#include "tetris.h"
#include "ui_tetris.h"

tetris::tetris(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tetris)
{
    ui->setupUi(this);
    
    int w = tetris::getWidth();
	int h = tetris::getHeight();
    setFixedSize(w, h);
    setPalette(QPalette(Qt::black));
    setAutoFillBackground(true);
}

tetris::~tetris()
{
    delete ui;
}
