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
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
	}
}

//sort 回调函数 指定排序规则
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
	Person p1("张恩乐", 23, 177);
	Person p2("王子怡", 20, 168);
	Person p3("杨文龙", 21, 173);
	Person p4("诸葛亮", 21, 175);
	Person p5("司马懿", 21, 180);

	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);

	PrintPerson(L);
	
	//排序
	cout << "排序后：" << endl;
	L.sort(mycompare);
	PrintPerson(L);
}




int main()
{
	test01();

	system("pause");
	return 0;
}