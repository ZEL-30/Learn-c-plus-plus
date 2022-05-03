#pragma once    //防止头文件重复声明
#include "point.h"
#include <iostream>
using namespace std;

class Circle
{
public:

	void SetCenter(int x, int y);

	int GetCenterX();

	int GetCenterY();

	void SetR(int R);

	int GetR();


private:
	//在类中可以用另一个类
	Point m_Center;   //圆心 
	int m_R;          //半径
};