#include "tictactoe.h"
#include "ui_tictactoe.h"

TicTacToe::TicTacToe(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TicTacToe)
{
    QPixmap backgroud = QPixmap(":/background/tictactoe");
	QPalette palette;
	palette.setBrush(QPalette::Background, backgroud);
	this->setPalette(palette);
    setAutoFillBackground(1);

    ui->setupUi(this);
}

TicTacToe::~TicTacToe()
{
    delete ui;
}
