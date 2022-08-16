#include "tetris.h"
#include "ui_tetris.h"

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
