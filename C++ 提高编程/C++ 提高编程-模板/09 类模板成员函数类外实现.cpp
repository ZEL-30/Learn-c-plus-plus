//#include <iostream>
//using namespace std;
//
////类模板成员函数类外实现
//template <class T1, class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//
//	void showPerson();
//	
//
//
//	T1 m_name;
//	T2 m_age;
//};
//
////构造函数 类外实现
//template <class T1,class T2>
//Person<T1,T2>::Person(T1 name, T2 age)
//{
//	m_age = age;
//	m_name = name;
//}
//
//
////成员函数 类外实现
//template <class T1, class T2>
//void Person<T1,T2>::showPerson()
//{
//	cout << "姓名：" << m_name << "年龄：" << m_age << endl;
//}
//
//
//
//
//void test01()
//{
//	Person<string, int>p1("张恩乐", 23);
//	p1.showPerson();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	system("cls");
//	return 0;
//}