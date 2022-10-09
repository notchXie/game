#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPixmap backgroud = QPixmap(":/background/headBackground1");
	QPalette palette;
	palette.setBrush(QPalette::Background, backgroud);
	this->setPalette(palette);
	
	setAutoFillBackground(1);
	setWindowOpacity(0.81234567);

    ui->setupUi(this);
    
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Tetris_clicked()
{
	tetris* t = new tetris;
	t->show();
}

