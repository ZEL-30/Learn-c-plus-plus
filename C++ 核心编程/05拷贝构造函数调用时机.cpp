#include <iostream>
using namespace std;


class Person
{
public:
	Person()    //���캯��
	{
		cout << "����Ĭ�Ϲ��캯���ĵ���" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "�����вι��캯���ĵ���" << endl;
	}

	Person(const Person& p)
	{
		age = p.age;
		cout << "���ǿ������캯���ĵ���" << endl;
	}

	~Person()   //��������
	{
		cout << "�������������ĵ���" << endl;
	}


	int age;
};




void test01()
{
	Person p1(10);
	cout << "p1��ageΪ��" << p1.age << endl;
	Person p2(p1);
	cout << "p2��ageΪ��" << p2.age << endl;
}

//ֵ���ݵķ�ʽ������������ֵ


int main()
{
	test01();

	system("pause");
	return 0;
}