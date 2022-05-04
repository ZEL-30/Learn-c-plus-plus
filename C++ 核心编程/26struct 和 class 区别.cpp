#include <iostream>
using namespace std;


class C1

	int m_A;  //Ĭ��Ȩ�� ˽��
};

struct C2
{
	int m_A;  //Ĭ��Ȩ�� ����
};




int main()
{
	C1 c1;
	c1.m_A = 100;   //���� ��Ϊ��Ĭ��Ϊ˽��

	C2 c2;
	c2.m_A = 100;

	system("pause");
	return 0;
}