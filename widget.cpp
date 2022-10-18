#include "widget.h"
#include "ui_widget.h"
#include "mainWindowPushButton.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    QPixmap backgroud = QPixmap(":/background/headBackground1");
	QPalette palette;
	palette.setBrush(QPalette::Background, backgroud);
	this->setPalette(palette);
	
	setAutoFillBackground(1);
	setWindowOpacity(0.99);

	mainWindowPushButton* m1 = new mainWindowPushButton(":/background/mainPushButton", ":/background/mainPushButton");
	m1->setParent(this);
	m1->move(50, 50);
	
	connect(m1, &mainWindowPushButton::pressed, [=]() {m1->move1(-5); });
	connect(m1, &mainWindowPushButton::released, [=]() {m1->move1(5); });
	connect(m1, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
		
	m1->show();
		
    ui->setupUi(this);
    
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
	tetris* t = new tetris;
	t->show();
}

