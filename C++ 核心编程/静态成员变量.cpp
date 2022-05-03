//#include <iostream>
//using namespace std;
//
////静态成员变量
//class Person
//{
//
//	//所有对象共享同一份数据
//	//在编译阶段分配内存
//	//类内声明，类外初始化
//public:
//	static int m_A;  //类内声明
//
//	//静态成员表变量也是有访问权限的
//
//};
//
//int Person::m_A = 10;   //类外初始化
//
//
//void test01()
//{
//	Person p;
//	cout << p.m_A << endl;
//
//
//	Person p2;
//	p2.m_A = 200;
//	cout << p.m_A << endl;
//}
//
//void test02()
//{
//	//通过类名进行访问
//	cout << Person::m_A << endl;
//}
//
//
//
//int main()
//{
//	//test01();
//	test02();
//
//	system("pause");
//	return 0;
//}