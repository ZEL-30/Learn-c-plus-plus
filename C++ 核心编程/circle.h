#pragma once    //��ֹͷ�ļ��ظ�����
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
	//�����п�������һ����
	Point m_Center;   //Բ�� 
	int m_R;          //�뾶
};