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
	//通过对象访问
	cout << "通过对象访问" << endl;
	Son s1;
	cout << "子类中的m_a为：" << s1.m_a << endl;
	cout << "父类中的m_a为：" << s1.Base::m_a << endl;

	//通过类名访问
	cout << "通过类名访问" << endl;
	cout << "子类中的m_a为：" << Son::m_a << endl;

	cout << "父类中的m_a为：" << Son::Base::m_a << endl;

}


void test02()
{
	//通过对象的方式进行访问
	Son s2;
	s2.func();
	s2.Base::func();
	//通过类名的方式进行访问
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