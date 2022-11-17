#include "widget.h"
#include "ui_widget.h"
#include "mainWindowPushButton.h"
#include "tictactoe.h"
#include <QMessageBox>

int flag = 0;

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
	connect(m1, SIGNAL(clicked()), this, SLOT(treatMessage()));
	m1->show();
		
    mainWindowPushButton* m2 = new mainWindowPushButton(":/background/mainPushButton2", ":/background/mainPushButton2");
	m2->setParent(this);
	m2->move(50, 240);
	connect(m2, &mainWindowPushButton::pressed, [=]() {m2->move1(-5); });
	connect(m2, &mainWindowPushButton::released, [=]() {m2->move1(5); });
	connect(m2, SIGNAL(clicked()), this, SLOT(on_pushButton_clicked()));
	connect(m2, SIGNAL(clicked()), this, SLOT(tictactoe()));//新游戏窗口
	m2->show();
	
    ui->setupUi(this);
    
}

Widget::~Widget()
{
    delete ui;
}

void Widget::tictactoe()
{
	TicTacToe* t = new TicTacToe;
	t->show();
}

void Widget::treatMessage()
{
	QMessageBox msgBox;
	msgBox.setWindowTitle("this is an unuseful MessageBox");
	if(flag<3)
	{
		msgBox.setText("I have said that I didn't complete this game! And don't try clicking this button again! ");
		flag++;
	}
	else if(flag>5)
	{
		msgBox.setText("OK, you win. I will complete as soon as possible. ");
	}
	else
	{
		msgBox.setText("Why you still push this button? Please stop! ");
		flag++;
	}
	msgBox.exec();
}