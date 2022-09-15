#ifndef TETRIS_H
#define TETRIS_H

#include <QWidget>

#define xMAX 18     //显示窗口的横向格数
#define yMAX 30     //显示窗口的竖向格数
#define WIDTH 30    //单格的宽度
#define HEIGHT 30   //单格的高度
#define INTERVAL 4  //单格之间的间隔
#define COUNT 4     //每个方块的格数

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
	
    //获取游戏区长宽
    int getWidth()
    {
        return xMAX * WIDTH + (xMAX - 1) * INTERVAL;
    }

    int getHeight()
    {
        return yMAX * HEIGHT + (yMAX - 1) * INTERVAL;
    }

    //随机数确定初始位置
    int x = qrand() % (xMAX - COUNT);
    int y = 0;
	

protected:
    void paintEvent(QPaintEvent* event);
//    void keyPressEvent(QKeyEvent* event);
    int timerId = startTimer(500);

private slots:
    void timerEvent(QTimerEvent* event);
};


#endif // TETRIS_H
