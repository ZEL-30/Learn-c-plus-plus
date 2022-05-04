#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//find                    //查找元素
//find_if                 //按条件查找元素
//adjacant_find           //查找相邻重复元素
//binary_seach            //二分查找法
//count                   //统计元素个数
//count_if                //按条件统计元素个数
//
//find (iterator beg, iterator end, value);
////按值查找元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
////beg开始迭代器
////end结束迭代器
////value 查找的元素


class Person
{
public:
	Person(string Name,int Age)
	{
		m_Name = Name;
		m_Age = Age;
	}

	//重载 == 让底层find知道如何对比Person数据类型
	bool operator==(const Person &p)
	{
		if (m_Age == p.m_Age && m_Name == p.m_Name)
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




//内置数据类型
void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	vector<int>::iterator it = find(V.begin(), V.end(), 5);
	if ( it != V.end())
	{
		cout << "找到了数据：" << *it <<  endl;
	}
	else
	{
		cout << "没有找到" << endl;
	}
}


//自定义数据类型
void test02()
{
	vector<Person> V;
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10 ; i++)
	{
		string Name = "选手";
		Name += NameSeed[i];
		int Age = i;
		Person p(Name, Age);
		V.push_back(p);
	}
	Person p1("选手A", 2);
	vector<Person>::iterator it = find(V.begin(), V.end(),p1);

	if (it != V.end())
	{
		cout << "找到了! 姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
	else
	{
		cout << "没有找到!" << endl;
	}

}


int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}