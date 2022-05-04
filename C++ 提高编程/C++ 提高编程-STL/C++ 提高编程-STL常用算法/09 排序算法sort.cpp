#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;




//打印
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




//内置数据类型
void test01()
{
	vector<int> V;
	V.push_back(90);
	V.push_back(60);
	V.push_back(70);
	V.push_back(30);
	V.push_back(10);
	V.push_back(60);

	cout << "原容器：" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	sort(V.begin(), V.end()); //默认正排序
	cout << "-------------------------------------------" << endl;
	cout << "正排序：" << endl;
	for_each(V.begin(), V.end(), print1);
	cout << endl;

	//sort(V.begin(), V.end(), Mycompare1());
	sort(V.begin(), V.end(), greater<int>());
	cout << "-------------------------------------------" << endl;
	cout << "反排序：" << endl;
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
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
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

//自定义数据类型
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

	cout << "原容器：" << endl;
	for_each(V.begin(), V.end(), print2);

	sort(V.begin(), V.end(),Mycompare2()); //默认正排序
	cout << "-------------------------------------------" << endl;
	cout << "正排序：" << endl;
	for_each(V.begin(), V.end(), print2);

	sort(V.begin(), V.end(), Mycompare3()); //默认正排序
	cout << "-------------------------------------------" << endl;
	cout << "反排序：" << endl;
	for_each(V.begin(), V.end(), print2);

}


int main()
{
	test01();
	//test02();

	system("pause");
	return 0;
}