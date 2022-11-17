#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPaintevent>
#include <QMessageBox>

namespace Ui {
class TicTacToe;
}

class TicTacToe : public QWidget
{
    Q_OBJECT

public:
    explicit TicTacToe(QWidget *parent = nullptr);
    ~TicTacToe();
protected:
    void mousePressEvent(QMouseEvent* event);
	void paintEvent(QPaintEvent* event);

private:
    Ui::TicTacToe *ui;

private slots:
	void drawCircle();
	void drawCross();
	//void drawGrid();
    void checkWin();
	void reset();

};

#endif // TICTACTOE_H
