#include <iostream>
using namespace std;

class Base
{
public:
	static void func()
	{
		cout << "Base - static void func" << endl;
	}
	static int m_a;

};

int Base::m_a = 100;

class Son : public Base
{

public:
	static void func()
	{
		cout << "Son - static void func" << endl;
	}
	static int m_a;
};

int Son::m_a = 200;

void test01()
{
	//ͨ���������
	cout << "ͨ���������" << endl;
	Son s1;
	cout << "�����е�m_aΪ��" << s1.m_a << endl;
	cout << "�����е�m_aΪ��" << s1.Base::m_a << endl;

	//ͨ����������
	cout << "ͨ����������" << endl;
	cout << "�����е�m_aΪ��" << Son::m_a << endl;

	cout << "�����е�m_aΪ��" << Son::Base::m_a << endl;

}


void test02()
{
	//ͨ������ķ�ʽ���з���
	Son s2;
	s2.func();
	s2.Base::func();
	//ͨ�������ķ�ʽ���з���
	Son::func();
	Son::Base::func();

}


int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}