#pragma once   //��ֹͷ�ļ��ظ�����
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
	int m_X;      //���x������
	int m_Y;      //���y������
};