#include <iostream>
using namespace std;
template <class T1, class T2>
class Person;

template <class T1, class T2>
void printPerson2(Person<T1, T2>& p);

template <class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void printPerson1(Person<T1,T2> &p)
	{
		cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
	}
	//ȫ�ֺ��� ����ʵ��
	//����ģ������б�
	//���ȫ�ֺ��� ������ʵ�֣���Ҫ�ñ�������ǰ֪�������������
	friend void printPerson2<>(Person<T1, T2>& p);


public:
	Person(T1 name, T2 age)
	{
		m_name = name;
		m_age = age;
	}

private:

	T1 m_name;
	T2 m_age;
};

//����ʵ��
template <class T1, class T2>
void printPerson2(Person<T1, T2>& p)
{
	cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;
}



void test01()
{
	Person<string, int>p1("�Ŷ���", 23);
	//printPerson1(p1);
	printPerson2(p1);
}


int main()
{
	test01();
	system("pause");
	system("cls");
	return 0;
}