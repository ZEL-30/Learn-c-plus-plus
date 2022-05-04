#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;




//��ӡ
void print1(int val)
{
	cout << val << " ";
}


class Mycompare1
{
public:
	int operator()(int v1,int v2)
	{
		return v1 > v2;
	}
};




//������������
void test01()
{
	vector<int> V;
	V.push_back(90);
	V.push_back(60);
	V.push_back(70);
	V.push_back(30);
	V.push_back(10);
	V.push_back(60);

	cout << "ԭ������" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	sort(V.begin(), V.end()); //Ĭ��������
	cout << "-------------------------------------------" << endl;
	cout << "������" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	//sort(V.begin(), V.end(), Mycompare1());
	sort(V.begin(), V.end(), greater<int>());
	cout << "-------------------------------------------" << endl;
	cout << "������" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

}


class Person
{
public:
	Person(string Name,int Age)
	{
		m_Age = Age;
		m_Name = Name;
	}

	string m_Name;
	int m_Age;
};


void print2(const Person& p)
{
	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
}




class Mycompare2
{
public:
	int operator()(Person &p1,Person &p2)
	{
		return p1.m_Age < p2.m_Age;
	}
};


class Mycompare3
{
public:
	int operator()(Person& p1, Person& p2)
	{
		return p1.m_Age > p2.m_Age;
	}
};

//�Զ�����������
void test02()
{
	vector<Person> V;
	Person p1("aaa", 25);
	Person p2("ggg", 61);
	Person p3("sss", 86);
	Person p4("lll", 111);
	Person p5("uuu", 27);

	V.push_back(p1);
	V.push_back(p2);
	V.push_back(p3);
	V.push_back(p4);
	V.push_back(p5);

	cout << "ԭ������" << endl;
	for_each(V.begin(), V.end(), print2);

	sort(V.begin(), V.end(),Mycompare2()); //Ĭ��������
	cout << "-------------------------------------------" << endl;
	cout << "������" << endl;
	for_each(V.begin(), V.end(), print2);

	sort(V.begin(), V.end(), Mycompare3()); //Ĭ��������
	cout << "-------------------------------------------" << endl;
	cout << "������" << endl;
	for_each(V.begin(), V.end(), print2);

}


int main()
{
	test01();
	//test02();

	system("pause");
	return 0;
}