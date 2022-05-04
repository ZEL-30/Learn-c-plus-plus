#include <iostream>
#include <list>
#include <string>
using namespace std;

class Person
{
public:
	Person(string Name, int Age, int Height)
	{
		m_Name = Name;
		m_Age = Age;
		m_Height = Height;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};



void PrintPerson(list<Person> L)
{
	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << " ���ߣ�" << it->m_Height << endl;
	}
}

//sort �ص����� ָ���������
bool mycompare(Person& p1,Person &p2)
{
	if (p1.m_Age != p2.m_Age)
	{
		return p1.m_Age < p2.m_Age;
	}
	else
	{
		return p1.m_Height > p2.m_Height;
	}
}


void test01()
{
	list<Person> L;
	Person p1("�Ŷ���", 23, 177);
	Person p2("������", 20, 168);
	Person p3("������", 21, 173);
	Person p4("�����", 21, 175);
	Person p5("˾��ܲ", 21, 180);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	PrintPerson(L);
	
	//����
	cout << "�����" << endl;
	L.sort(mycompare);
	PrintPerson(L);
}




int main()
{
	test01();

	system("pause");
	return 0;
}