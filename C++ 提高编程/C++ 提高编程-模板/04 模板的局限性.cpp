#include <iostream>
using namespace std;


class Person
{

public:
	Person(string Name, int age)
	{

		m_Name = Name;
		m_age = age;
	}

	bool operator==(Person &p)      //���������
	{
		if (m_age == p.m_age && m_Name == p.m_Name)
		{
			return true;
		}
		return false;

	}
	string m_Name;
	int m_age;
};





//�Ա����������Ƿ���Ⱥ���
template <class T>
bool myCompare(T& a, T& b)
{
	if (a == b)
	{
		return true;
	}
	else
	{
		return false;
	}
}


//���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
template <> bool myCompare(Person& p1, Person& p2)
{
	if (p1.m_age == p2.m_age && p2.m_Name == p2.m_Name)
	{
		return true;
	}
	return false;
}

void test01()
{
	int a = 10;
	int b = 20;
	bool ret = myCompare(a, b);
	if (ret)
	{
		cout << "a��b���" << endl;
	}
	else
	{
		cout << "a��b�����" << endl;
	}

}


void test02()
{
	Person p1("�Ŷ���", 23);
	Person p2("�Ŷ���", 23);

	bool ret = myCompare(p1, p2);
	if (ret)
	{
		cout << "p1��p2���" << endl;
	}
	else
	{
		cout << "p1��p2�����" << endl;
	}
}


int main()
{
	//test01();

	test02();

	system("pause");
	system("cls");
	return 0;
}