#pragma once   //防止头文件重复声明
#include <iostream>
using namespace std;
   
class Point
{
public:

	void SetX(int X);

	int GetX();

	void SetY(int Y);

	int GetY();

private:
	int m_X;      //点的x轴坐标
	int m_Y;      //点的y轴坐标
};