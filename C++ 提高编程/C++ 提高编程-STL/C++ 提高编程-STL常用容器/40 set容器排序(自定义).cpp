#include <iostream>
#include <set>
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
	int    m_Age;
	int    m_Height;
};


class Mycompare
{
public:
	bool operator()(Person p1, Person p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};




void test01()
{
	Person p1("�Ŷ���", 23,177);
	Person p2("������", 20,168);
	Person p3("������", 21,175);
	Person p4("�����", 36,180);
	Person p5("˾��ܲ", 36,173);
	set<Person, Mycompare> S;
	S.insert(p1);
	S.insert(p2);
	S.insert(p3);
	S.insert(p4);
	S.insert(p5);

	for (set<Person, Mycompare>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << "������ " << it->m_Name << " ���䣺" << it->m_Age << " ���ߣ�" << it->m_Height << endl;
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}