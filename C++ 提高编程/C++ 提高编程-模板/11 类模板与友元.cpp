//#include <iostream>
//using namespace std;
//template <class T1, class T2>
//class Person;
//
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p);
//
//template <class T1,class T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson1(Person<T1,T2> &p)
//	{
//		cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
//	}
//	//全局函数 类内实现
//	//加入模板参数列表
//	//如果全局函数 是类外实现，需要让编译器提前知道这个函数存在
//	friend void printPerson2<>(Person<T1, T2>& p);
//
//
//public:
//	Person(T1 name, T2 age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//private:
//
//	T1 m_name;
//	T2 m_age;
//};
//
////类外实现
//template <class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
//}
//
//
//
//void test01()
//{
//	Person<string, int>p1("张恩乐", 23);
//	//printPerson1(p1);
//	printPerson2(p1);
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	system("cls");
//	return 0;
//}