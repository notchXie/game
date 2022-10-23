#pragma once
#include<qpainter.h>
#include "tetris.h"

#define xMAX 18     //显示窗口的横向格数
#define yMAX 30     //显示窗口的竖向格数
#define WIDTH 30    //单格的宽度
#define HEIGHT 30   //单格的高度
#define INTERVAL 3  //单格之间的间隔
#define COUNT 4     //每个方块的格数

class tetrisblock
{

	public:
		//tetrisblock();
		//~tetrisblock();
		int x=0;
		int y=0;

		void draw(QPainter& painter);
		void move(int x, int y);
		void set_color(QColor color);
		void set_position(int x, int y);
		void set_type(int type);
		void set_rotation(int rotation);
		
protected:


};

