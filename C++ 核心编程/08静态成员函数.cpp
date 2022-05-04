#include <iostream>
using namespace std;

//��̬��Ա����
class Person
{
public:
	static void func()
	{
		a = 100;

		cout << "static void func����" << endl;
	}

	static int a;
	int b;
};

int Person::a = 10;


void test01()
{
	//1.ͨ���������
	Person p;
	p.func();

	//2.ͨ����������
	Person::func();
}

void test02()
{
	
}



int main()
{
	test01();
	test02();

	system("pause");
	return 0;
}