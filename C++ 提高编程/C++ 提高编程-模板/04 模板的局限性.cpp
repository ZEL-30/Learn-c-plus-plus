//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//
//public:
//	Person(string Name, int age)
//	{
//
//		m_Name = Name;
//		m_age = age;
//	}
//
//	bool operator==(Person &p)      //运算符重载
//	{
//		if (m_age == p.m_age && m_Name == p.m_Name)
//		{
//			return true;
//		}
//		return false;
//
//	}
//	string m_Name;
//	int m_age;
//};
//
//
//
//
//
////对比两个数据是否相等函数
//template <class T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//
////利用具体化Person的版本实现代码，具体化优先调用
//template <> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_age == p2.m_age && p2.m_Name == p2.m_Name)
//	{
//		return true;
//	}
//	return false;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	bool ret = myCompare(a, b);
//	if (ret)
//	{
//		cout << "a和b相等" << endl;
//	}
//	else
//	{
//		cout << "a和b不相等" << endl;
//	}
//
//}
//
//
//void test02()
//{
//	Person p1("张恩乐", 23);
//	Person p2("张恩乐", 23);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1和p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1和p2不相等" << endl;
//	}
//}
//
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	system("cls");
//	return 0;
//}