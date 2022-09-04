#pragma once
#include<qpainter.h>

#define xMAX 18     //��ʾ���ڵĺ������
#define yMAX 30     //��ʾ���ڵ��������
#define WIDTH 30    //����Ŀ��
#define HEIGHT 30   //����ĸ߶�
#define INTERVAL 3  //����֮��ļ��
#define COUNT 4     //ÿ������ĸ���

class tetrisblock
{

	public:
		//tetrisblock();
		//~tetrisblock();

		void draw(QPainter& painter, int x, int y);
		void move(int x, int y);
		void rotate();	
		void set_color(QColor color);
		void set_position(int x, int y);
		void set_type(int type);
		void set_rotation(int rotation);


};

