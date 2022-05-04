#include <iostream>
using namespace std;

//��̬��Ա����
class Person
{

	//���ж�����ͬһ������
	//�ڱ���׶η����ڴ�
	//���������������ʼ��
public:
	static int m_A;  //��������

	//��̬��Ա������Ҳ���з���Ȩ�޵�

};

int Person::m_A = 10;   //�����ʼ��


void test01()
{
	Person p;
	cout << p.m_A << endl;


	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02()
{
	//ͨ���������з���
	cout << Person::m_A << endl;
}



int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}