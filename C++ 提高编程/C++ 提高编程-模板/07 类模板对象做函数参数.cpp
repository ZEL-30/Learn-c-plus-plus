#include <iostream>
using namespace std;


//��ģ���������������

template<class T1,class T2>
class Person
{
public:

	Person(T1 Name,T2 Age)
	{
		m_Age = Age;
		m_Name = Name;
	}

	void showPerson()
	{
		cout << "������" << m_Name << " ���䣺" << m_Age << endl;
	}




	T1 m_Name;
	T2 m_Age;
};
//1��ָ����������
void printPerson1(Person<string, int> &p1)
{
	p1.showPerson();
}



void test01()
{
	Person<string, int>p1("�����", 100);
	printPerson1(p1);
}

//2������ģ�廯
template <class T1,class T2>
void prntPerson2(Person<T1,T2> &p)
{
	p.showPerson();
	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
}


void test02()
{
	Person<string, int>p2("���˽�", 90);
	prntPerson2(p2);
}

//3������ģ�廯
template <class T>
void printPerson3(T& p)
{
	p.showPerson();
	cout << "T ������Ϊ��" << typeid(T).name() << endl;
}

void test03()
{
	Person<string, int>p3("��ɮ", 30);
	printPerson3(p3);
}




int main()
{
	//test01();

	test02();

	test03();

	system("pause");
	system("cls");
	return 0;
}