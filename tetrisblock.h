#pragma once
#include<qpainter.h>

class tetrisblock
{

	public:
		tetrisblock();
		~tetrisblock();

		void draw(QPainter& painter);
		void move(int x, int y);
		void rotate();	
		void set_color(QColor color);
		void set_position(int x, int y);
		void set_type(int type);
		void set_rotation(int rotation);


};

