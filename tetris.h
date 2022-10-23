#ifndef TETRIS_H
#define TETRIS_H

#include <QWidget>
#include <QKeyEvent>

#define xMAX 18     //��ʾ���ڵĺ������
#define yMAX 30     //��ʾ���ڵ��������
#define WIDTH 30    //����Ŀ��
#define HEIGHT 30   //����ĸ߶�
#define INTERVAL 4  //����֮��ļ��
#define COUNT 4     //ÿ������ĸ���

namespace Ui {
class tetris;
}

class tetris : public QWidget
{
    Q_OBJECT

public:
    explicit tetris(QWidget *parent = nullptr);
    ~tetris();

private:
    Ui::tetris *ui;

	
public:
	
    //��ȡ��Ϸ������
    int getWidth()
    {
        return xMAX * WIDTH + (xMAX - 1) * INTERVAL;
    }

    int getHeight()
    {
        return yMAX * HEIGHT + (yMAX - 1) * INTERVAL;
    }
    void keyPressEvent(QKeyEvent* event);

	int x = qrand() % (xMAX - COUNT);
	int y = 0;


protected:
    void paintEvent(QPaintEvent* event);
    int timerId = startTimer(650);

private slots:
    void timerEvent(QTimerEvent* event);
};


#endif // TETRIS_H
