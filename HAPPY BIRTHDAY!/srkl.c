#include <windows.h>
#include "acllib.h"
#include <stdio.h>
#include<math.h>
int Setup()
{
	https:
	initWindow("生日快乐！——————————周文昊 (！* ！*)☆", 200, 100, 500, 550);
	beginPaint();
	setPenWidth(2);
	setPenColor(RGB(255,0,0));
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	int a = 100;
	double x = -2;
	for (; x <= 2; x = x + 0.01)
	{
		double y = sqrt(2 * sqrt(x*x) - x * x);
		double z = asin((fabs(x) - 1)) - 3.141592 / 2;
		int real_x = (int)(x * a + 250);
		int real_y = (int)(y * a*(-1) + 150);
		int real_z = (int)(z * a * (-1) + 150);
		putPixel(real_x, real_y, RGB(255, 0, 0));
		putPixel(real_x, real_z, RGB(0, 0, 255));
	}
	setTextColor(RED);
	setTextSize(50);
	paintText(100,150,"HAPPY");
	endPaint();
	
	beginPaint();
	setPenWidth(2);
	setPenColor(RGB(255,0,0));
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	setTextColor(GREEN);
	setTextSize(49);
	paintText(150,230,"BIRTHDAY");
	endPaint();
	
	beginPaint();
	setPenWidth(2);
	setPenColor(RGB(255,0,0));
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	setTextColor(BLUE);
	setTextSize(40);
	paintText(295,150,"万事可期"); 
	endPaint();
	beginPaint();
	setPenWidth(2);
	setPenColor(RGB(255,0,0));
	setPenStyle(PEN_STYLE_DASHDOTDOT);
	setTextColor(RED);
	setTextSize(70);
	paintText(240,280,"!"); 
	endPaint();
	return 0;
}
