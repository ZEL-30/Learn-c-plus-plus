//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//
//	Person();
//
//	// 重载 关系运算符 ==
//	bool operator==(Person& p);
//	// 重载 关系运算符 <
//	bool operator<(Person& p);
//	// 重载 关系运算符 >
//	bool operator>(Person& p);
//
//
//	int m_age;
//
//};
//
//
//Person::Person() :m_age(10)
//{
//
//}
//
//bool Person::operator==(Person& p)
//{
//	if (m_age == p.m_age)      return true;
//	else                      return false;
//}
//
//
//
//bool Person::operator<(Person& p)
//{
//	if (m_age < p.m_age)      return true;
//	else                      return false;
//}
//
//
//bool Person::operator>(Person& p)
//{
//	if (m_age > p.m_age)      return true;
//	else                      return false;
//}
//
//
//
//
//
//
//
//
//void test01()
//{
//	Person p1;
//	Person p2;
//	//p1.m_age = 100;
//	if (p1 > p2)
//	{
//		cout << "p1 > p2" << endl;
//	}
//	else if (p1 == p2)
//	{
//		cout << "p1 = p2" << endl;
//	}
//	else if (p1 < p2)
//	{
//		cout << "p1 < p2" << endl;
//	}
//}
//
//
//
//int main()
//{
//	test01();
//
//	//int a = 10;
//	//int b = 10;
//	//int c = 10;
//
//	//if (a == b == c)
//	//{
//	//	cout << "abc相等" << endl;
//	//}
//	//else 
//	//{
//	//	cout << "abc不相等" << endl;
//	//}
//
//	system("pause");
//	return 0;
//}