//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
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
//	bool operator==(const Person& p)
//	{
//		if (m_Age == p.m_Age)
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
//	int m_Age;
//};
//
//
//class Mycompare1
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 4;
//	}
//};
//
//class Mycompare2
//{
//public:
//	bool operator()(Person &p)
//	{
//		return p.m_Age > 25;
//	}
//};
//
//
//
//
//
////统计内置的数据类型
//void test01()
//{
//	vector<int> V;
//	for (int i = 0; i < 10; i++)
//	{
//		V.push_back(i);
//	}
//	V.push_back(5);
//	V.push_back(5);
//	V.push_back(5);
//	int ret = count_if(V.begin(), V.end(),Mycompare1() );  
//
//	cout << "大于4的数有：" << ret << endl;
//}
//
////统计自定义的数据类型
//void test02()
//{
//	vector<Person> V;
//	Person P1("sss", 20);
//	Person P2("aaa", 26);
//	Person P3("hhh", 29);
//	Person P4("yyy", 20);
//	Person P5("yyy", 20);
//
//	V.push_back(P1);
//	V.push_back(P2);
//	V.push_back(P3);
//	V.push_back(P4);
//	V.push_back(P5);
//
//	int ret = count_if(V.begin(), V.end(),Mycompare2());
//	cout  << "年龄大于25的人数：" << ret << endl;
//
//
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}