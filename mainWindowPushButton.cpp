#include "mainWindowPushButton.h"
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QDebug>

mainWindowPushButton::mainWindowPushButton(QWidget* parent)
{
	
}

mainWindowPushButton::mainWindowPushButton(QString normal, QString press)
{
	normalImgPath = normal;
	pressImgPath = press;

	QPixmap pixmap;
	bool ret = pixmap.load(normalImgPath);
	if (!ret)
	{
		qDebug() << "ͼƬ????ʧ??";
		return;
	}

	this->setFixedSize(pixmap.width(), pixmap.height());
	this->setStyleSheet("QPushButton{border:0px;}");
	this->setIcon(pixmap);
	this->setIconSize(QSize(pixmap.width(), pixmap.height()));
}

void mainWindowPushButton::move1(int val)
{
	QPoint w = this->pos();
	w.setX(w.x() + val);
	this->move(w);

}