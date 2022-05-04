#include "func.h"
#include "circle.h"
#include "point.h"

//a的b次方
int Power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result = result * a;

	}
	return result;
}

// 0 —— 在圆内
// 1 —— 在圆上
// 2 —— 在圆外
int CalculateLocation(Circle c, Point p)
{
	int relative_location = 0;
	relative_location = Power(p.GetX() - c.GetCenterX(), 2) + Power(p.GetY() - c.GetCenterY(), 2);
	if (relative_location == Power(c.GetR(), 2))
	{
		return 1;
	}
	else if (relative_location > Power(c.GetR(), 2))
	{
		return 2;
	}
	else
	{
		return 0;
	}
}


