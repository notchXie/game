#include "tictactoe.h"
#include "ui_tictactoe.h"

int gridCircle[3][3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int gridCross[3][3] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int grid[3][3] = { 0,0,0 ,0,0,0 ,0,0,0 };
int actionFlag = 0;

TicTacToe::TicTacToe(QWidget* parent) :
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

void TicTacToe::mousePressEvent(QMouseEvent* event)
{
	//判断为⚪
	if (actionFlag)
	{
		if (event->x() < 330 && event->y() < 330 && grid[0][0]==0)
		{
			gridCircle[0][0] = 1;
			grid[0][0] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() < 330 && grid[0][1]==0)
		{
			gridCircle[0][1] = 1;
			grid[0][1] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 660 && event->y() < 330 && grid[0][2] == 0)
		{
			gridCircle[0][2] = 1;
			grid[0][2] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() < 330 && event->y() > 330 && event->y() < 660 && grid[1][0] == 0)
		{
			gridCircle[1][0] = 1;
			grid[1][0] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() > 330 && event->y() < 660 && grid[1][1] == 0)
		{
			gridCircle[1][1] = 1;
			grid[1][1] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 660 && event->y() > 330 && event->y() < 660 && grid[1][2] == 0)
		{
			gridCircle[1][2] = 1;
			grid[1][2] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() < 330 && event->y() > 660 && grid[2][0] == 0)
		{
			gridCircle[2][0] = 1;
			grid[2][0] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() > 660 && grid[2][1] == 0)
		{
			gridCircle[2][1] = 1;
			grid[2][1] = 1;
			actionFlag = 0;
			update();
		}
		else if (event->x() > 660 && event->y() > 660 && grid[2][2] == 0)
		{
			gridCircle[2][2] = 1;
			grid[2][2] = 1;
			actionFlag = 0;
			update();
		}
			
		TicTacToe::checkWin();
	}
	//判断为×
	else
	{
		if (event->x() < 330 && event->y() < 330 && grid[0][0] == 0)
		{
			gridCross[0][0] = 1;
			grid[0][0] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() < 330 && grid[0][1] == 0)
		{
			gridCross[0][1] = 1;
			grid[0][1] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 660 && event->y() < 330 && grid[0][2] == 0)
		{
			gridCross[0][2] = 1;
			grid[0][2] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() < 330 && event->y() > 330 && event->y() < 660 && grid[1][0] == 0)
		{
			gridCross[1][0] = 1;
			grid[1][0] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() > 330 && event->y() < 660 && grid[1][1] == 0)
		{
			gridCross[1][1] = 1;
			grid[1][1] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 660 && event->y() > 330 && event->y() < 660 && grid[1][2] == 0)
		{
			gridCross[1][2] = 1;
			grid[1][2] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() < 330 && event->y() > 660 && grid[2][0] == 0)
		{
			gridCross[2][0] = 1;
			grid[2][0] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 330 && event->x() < 660 && event->y() > 660 && grid[2][1] == 0)
		{
			gridCross[2][1] = 1;
			grid[2][1] = 2;
			actionFlag = 1;
			update();
		}
		else if (event->x() > 660 && event->y() > 660 && grid[2][2] == 0)
		{
			gridCross[2][2] = 1;
			grid[2][2] = 2;
			actionFlag = 1;
			update();
		}
		
		TicTacToe::checkWin();
	}
}

void TicTacToe::paintEvent(QPaintEvent* event)
{
	TicTacToe::drawCircle();
	TicTacToe::drawCross();
}

void TicTacToe::drawCircle()
{
	QPainter painter;
	painter.begin(this);
	painter.setPen(QPen(Qt::red, 10));

	if (gridCircle[0][0])
	{
		painter.drawEllipse(20, 20, 285, 285);
	}
	if (gridCircle[0][1])
	{
		painter.drawEllipse(350, 20, 285, 285);
	}
	if (gridCircle[0][2])
	{
		painter.drawEllipse(680, 20, 285, 285);
	}
	if (gridCircle[1][0])
	{
		painter.drawEllipse(20, 350, 285, 285);
	}
	if (gridCircle[1][1])
	{
		painter.drawEllipse(350, 350, 285, 285);
	}
	if (gridCircle[1][2])
	{
		painter.drawEllipse(680, 350, 285, 285);
	}
	if (gridCircle[2][0])
	{
		painter.drawEllipse(20, 680, 285, 285);
	}
	if (gridCircle[2][1])
	{
		painter.drawEllipse(350, 680, 285, 285);
	}
	if (gridCircle[2][2])
	{
		painter.drawEllipse(680, 680, 285, 285);
	}

	painter.end();
}

void TicTacToe::drawCross()
{
	QPainter painter;
	painter.begin(this);
	painter.setPen(QPen(Qt::blue, 10));

	if (gridCross[0][0])
	{
		painter.drawLine(20, 20, 305, 305);
		painter.drawLine(20, 305, 305, 20);
	}
	if (gridCross[0][1])
	{
		painter.drawLine(355, 20, 640, 305);
		painter.drawLine(355, 305, 640, 20);
	}
	if (gridCross[0][2])
	{
		painter.drawLine(695, 20, 980, 305);
		painter.drawLine(695, 305, 980, 20);
	}
	if (gridCross[1][0])
	{
		painter.drawLine(20, 355, 305, 640);
		painter.drawLine(20, 640, 305, 355);
	}
	if (gridCross[1][1])
	{
		painter.drawLine(355, 355, 640, 640);
		painter.drawLine(355, 640, 640, 355);
	}
	if (gridCross[1][2])
	{
		painter.drawLine(695, 355, 980, 640);
		painter.drawLine(695, 640, 980, 355);
	}
	if (gridCross[2][0])
	{
		painter.drawLine(20, 695, 305, 980);
		painter.drawLine(20, 980, 305, 695);
	}
	if (gridCross[2][1])
	{
		painter.drawLine(355, 695, 640, 980);
		painter.drawLine(355, 980, 640, 695);
	}
	if (gridCross[2][2])
	{
		painter.drawLine(695, 695, 980, 980);
		painter.drawLine(695, 980, 980, 695);
	}

	painter.end();
}

//void TicTacToe::drawGrid()
//{
//	QPainter painter;
//	painter.begin(this);
//	painter.setPen(QPen(Qt::green, 10));
//
//	painter.drawLine(330, 0, 330, 990);
//	painter.drawLine(660, 0, 660, 990);
//	painter.drawLine(0, 330, 990, 330);
//	painter.drawLine(0, 660, 990, 660);
//
//	painter.end();
//}

void TicTacToe::checkWin()
{
	QMessageBox msgBox;
	if (grid[0][0] == 1 && grid[0][1] == 1 && grid[0][2] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[1][0] == 1 && grid[1][1] == 1 && grid[1][2] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[2][0] == 1 && grid[2][1] == 1 && grid[2][2] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] == 1 && grid[1][0] == 1 && grid[2][0] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][1] == 1 && grid[1][1] == 1 && grid[2][1] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][2] == 1 && grid[1][2] == 1 && grid[2][2] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] == 1 && grid[1][1] == 1 && grid[2][2] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][2] == 1 && grid[1][1] == 1 && grid[2][0] == 1)
	{
		msgBox.setText("O wins! Well done! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] == 2 && grid[0][1] == 2 && grid[0][2] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[1][0] == 2 && grid[1][1] == 2 && grid[1][2] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[2][0] == 2 && grid[2][1] == 2 && grid[2][2] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] == 2 && grid[1][0] == 2 && grid[2][0] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][1] == 2 && grid[1][1] == 2 && grid[2][1] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][2] == 2 && grid[1][2] == 2 && grid[2][2] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] == 2 && grid[1][1] == 2 && grid[2][2] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][2] == 2 && grid[1][1] == 2 && grid[2][0] == 2)
	{
		msgBox.setText("X wins! Do a good job! ");
		msgBox.exec();
		TicTacToe::reset();
	}
	else if (grid[0][0] != 0 && grid[0][1] != 0 && grid[0][2] != 0 && grid[1][0] != 0 && grid[1][1] != 0 && grid[1][2] != 0 && grid[2][0] != 0 && grid[2][1] != 0 && grid[2][2] != 0)
	{
		msgBox.setText("Draw! Both are very clever! ");
		msgBox.exec();
		TicTacToe::reset();
	}
}

void TicTacToe::reset()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			grid[i][j] = 0;
			gridCircle[i][j] = 0;
			gridCross[i][j] = 0;
		}
	}
	update();
}