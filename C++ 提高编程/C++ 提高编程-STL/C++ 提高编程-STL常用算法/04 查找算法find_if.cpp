//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
////find_if(iterator beg, iterator end, _Pred);
//////按值查找元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
//////beg开始迭代器
//////end结束迭代器
//////_Pred 函数或者谓词 (返回值bool类型的仿函数)
//
//class Mycompare1
//{
//public:
//	bool operator()(int val)
//	{
//		if (val > 5)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//
//class Person
//{
//public:
//	Person(string Name, int Age)
//	{
//		m_Name = Name;
//		m_Age = Age;
//	}
//
//	//重载 ==
//	bool operator==(const Person &p)
//	{
//		if (m_Age == p.m_Age && m_Name == p.m_Name)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//
//	string m_Name;
//	int    m_Age;
//};
//
//
//class Mycompare2
//{
//public:
//	bool operator()(Person& p)
//	{
//		return p.m_Age > 5;
//	}
//};
//
//
//
//
//
////内置数据类型
//void test01()
//{
//	vector<int> V;
//	for (int i = 0; i < 10; i++)
//	{
//		V.push_back(i);
//	}
//
//	vector<int>::iterator it = find_if(V.begin(), V.end(), Mycompare1());
//	if (it != V.end())
//	{
//		cout << " 找到了！" << *it << endl;
//	}
//
//}
//
//
////自定义数据类型
//void test02()
//{
//	vector<Person> V;
//	Person p1("aaa", 1);
//	Person p2("bbb", 3);
//	Person p3("sss", 5);
//	Person p4("fff", 7);
//	Person p5("hhh", 6);
//
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//
//	vector<Person>::iterator it = find_if(V.begin(), V.end(), Mycompare2());
//	if (it != V.end())
//	{
//		cout << " 找到了！" << it->m_Name << endl;
//	}
//
//
//
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//
//	system("pause");
//	return 0;
//}