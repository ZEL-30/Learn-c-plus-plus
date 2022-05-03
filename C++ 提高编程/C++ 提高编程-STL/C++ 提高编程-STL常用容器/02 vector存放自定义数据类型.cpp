//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "姓名：" << p.m_name << " 年龄：" << p.m_age;
//	return cout;
//}
//
//
////存放自定义数据类型
//void test01()
//{
//	vector<Person> v;
//	Person p1("张恩乐",23);
//	Person p2("杨文龙",22);
//	Person p3("王子怡",20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//}
//
////存放自定义数据类型的指针
//void test02()
//{
//	vector<Person*> v;
//	Person p1("张恩乐", 23);
//	Person p2("杨文龙", 22);
//	Person p3("王子怡", 20);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)    //技巧   (*it) == <数据类型>
//	{
//		cout << (*it)->m_age << endl;
//		cout << **it << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	string m_name;
//	int m_age;
//};
//
//
//ostream& operator<<(ostream& cout, Person& p)
//{
//	cout << "姓名：" << p.m_name << " 年龄：" << p.m_age;
//	return cout;
//}
//
//
////存放自定义数据类型
//void test01()
//{
//	vector<Person> v;
//	Person p1("张恩乐",23);
//	Person p2("杨文龙",22);
//	Person p3("王子怡",20);
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//
//	//遍历容器中的数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//
//}
//
////存放自定义数据类型的指针
//void test02()
//{
//	vector<Person*> v;
//	Person p1("张恩乐", 23);
//	Person p2("杨文龙", 22);
//	Person p3("王子怡", 20);
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)    //技巧   (*it) == <数据类型>
//	{
//		cout << (*it)->m_age << endl;
//		cout << **it << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}