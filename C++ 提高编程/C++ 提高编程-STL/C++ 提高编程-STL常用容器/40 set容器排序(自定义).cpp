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
	Person p1("张恩乐", 23,177);
	Person p2("王子怡", 20,168);
	Person p3("杨文龙", 21,175);
	Person p4("诸葛亮", 36,180);
	Person p5("司马懿", 36,173);
	set<Person, Mycompare> S;
	S.insert(p1);
	S.insert(p2);
	S.insert(p3);
	S.insert(p4);
	S.insert(p5);

	for (set<Person, Mycompare>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << "姓名： " << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}
}



int main()
{
	test01();

	system("pause");
	return 0;
}