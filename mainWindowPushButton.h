#pragma once

#include<QPushButton>

class mainWindowPushButton : public QPushButton
{
	Q_OBJECT
public:
	explicit mainWindowPushButton(QWidget* parent = 0);
	
	mainWindowPushButton(QString normal, QString press = "");
	
	QString normalImgPath;
	QString pressImgPath;
	void move1(int val);
};
