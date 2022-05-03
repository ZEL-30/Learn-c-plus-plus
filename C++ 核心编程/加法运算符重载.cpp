//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person();
//	//Person operator+(Person &p);   //成员函数实现加法运算符重载
//	 
//	int m_a;
//	int m_b;
//
//};
//
//Person::Person()
//{
//	m_a = 10;
//	m_b = 10;
//}
//
////Person Person::operator+(Person &p)    //成员函数实现加法运算符重载
////{
////	Person temp;
////	temp.m_a = this->m_a + p.m_a;
////	temp.m_b = this->m_b + p.m_b;
////	return temp;
////}
//
//Person operator+(Person& p1, Person& p2)  //全局函数实现加法运算符重载
//{
//	Person temp;
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
//
//
//void test01()
//{
//	Person p1;
//	Person p2;
//	//Person p3 = p1.operator+(p2);  //成员函数调用的本质
//	Person p3 = p1 + p2;
//	Person p4 = p3 + p2;
//
//	cout << "p3.m_a: = " << p3.m_a << endl;
//	cout << "p3.m_b: = " << p3.m_b << endl;
//	cout << "p4.m_a: = " << p4.m_a << endl;
//	cout << "p4.m_b: = " << p4.m_b << endl;
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}