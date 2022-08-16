#ifndef TETRIS_H
#define TETRIS_H

#include <QWidget>

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
};

#endif // TETRIS_H
