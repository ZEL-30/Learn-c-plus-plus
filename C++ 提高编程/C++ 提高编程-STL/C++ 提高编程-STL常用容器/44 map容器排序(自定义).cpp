#include <iostream>
#include <map>
using namespace std;


class Person
{
public:
	Person(string Name,int Age)
	{
		m_Name = Name;
		m_Age = Age;
	}


	string m_Name;
	int    m_Age;
};


class Mycompare
{
public:
	bool operator()(const Person p1,const Person p2) const
	{
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	map<Person, int,Mycompare> M;
	Person p1("�Ŷ���", 23);
	Person p2("������", 20);
	Person p3("������", 21);

	M.insert(make_pair(p1,1));
	M.insert(make_pair(p2,2));
	M.insert(make_pair(p3,3));


	for (map<Person, int, Mycompare>::iterator it = M.begin(); it != M.end(); it++)
	{
		cout << "��ţ�" << it->second << " ������" << it->first.m_Name << " ���䣺" << it->first.m_Age << endl;
	}


}




int main()
{
	test01();

	system("pause");
	return 0;
}