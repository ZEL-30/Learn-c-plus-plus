//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//void myprint(int val)
//{
//	cout << val << " ";
//}
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
//		V.push_back(i * 10);
//	}
//
//
//	vector<int> VTarget;
//	VTarget.resize(V.size());
//	copy(V.begin(), V.end(), VTarget.begin());
//	for_each(VTarget.begin(), VTarget.end(), myprint);
//	cout << endl;
//
//}
//
//class Person
//{
//public:
//	Person()
//	{
//
//	}
//	Person(string Name,int Age)
//	{
//		m_Age = Age;
//		m_Name = Name;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//
//void print2(const Person& p)
//{
//	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
////自定义数据类型
//void test02()
//{
//	vector<Person> V;
//	Person p1("aaa", 25);
//	Person p2("ggg", 61);
//	Person p3("sss", 86);
//	Person p4("lll", 111);
//	Person p5("uuu", 27);
//	
//	V.push_back(p1);
//	V.push_back(p2);
//	V.push_back(p3);
//	V.push_back(p4);
//	V.push_back(p5);
//
//	vector<Person> VTarget;
//	VTarget.resize(V.size());
//	copy(V.begin(), V.end(), VTarget.begin());
//	for_each(VTarget.begin(), VTarget.end(), print2);
//	for_each(V.begin(), V.end(), print2);
//	cout << endl;
//}
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}