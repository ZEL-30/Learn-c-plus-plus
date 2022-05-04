#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void myprint(int val)
{
	cout << val << " ";
}




//������������
void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i * 10);
	}



	replace (V.begin(), V.end(), 50,20);
	for_each(V.begin(), V.end(), myprint);
	cout << endl;

}

class Person
{
public:
	Person()
	{

	}
	Person(string Name, int Age)
	{
		m_Age = Age;
		m_Name = Name;
	}

	bool operator==(const Person &p)
	{
		if (m_Name == p.m_Name && m_Age == p.m_Age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	string m_Name;
	int m_Age;
};


void print2(const Person& p)
{
	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}

//�Զ�����������
void test02()
{
	vector<Person> V;
	Person p1("aaa", 25);
	Person p2("ggg", 61);
	Person p3("sss", 86);
	Person p4("lll", 111);
	Person p5("uuu", 27);
	Person p6("zel", 23);

	V.push_back(p1);
	V.push_back(p2);
	V.push_back(p3);
	V.push_back(p4);
	V.push_back(p5);


	replace(V.begin(), V.end(),p3,p6);
	for_each(V.begin(), V.end(), print2);
	cout << endl;
}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}