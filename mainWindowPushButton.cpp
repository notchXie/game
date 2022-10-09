#include "mainWindowPushButton.h"
#include <QPropertyAnimation>
#include <QMouseEvent>
#include <QDebug>

mainWindowPushButton::mainWindowPushButton(QString normal, QString press)
{
	normalImgPath = normal;
	pressImgPath = press;

	QPixmap pixmap;
	bool ret = pixmap.load(normalImgPath);
	if (!ret)
	{
		qDebug() << "Í¼Æ¬¼ÓÔØÊ§°Ü";
		return;
	}

	this->setFixedSize(pixmap.width(), pixmap.height());
	this->setStyleSheet("QPushButton{border:0px;}");
	this->setIcon(pixmap);
	this->setIconSize(QSize(pixmap.width(), pixmap.height()));
}
