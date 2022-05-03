//#include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	Person()    //构造函数
//	{
//		cout << "这是默认构造函数的调用" << endl;
//	}
//
//	Person(int a)
//	{
//		age = a;
//		cout << "这是有参构造函数的调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		age = p.age;
//		cout << "这是拷贝构造函数的调用" << endl;
//	}
//
//	~Person()   //析构函数
//	{
//		cout << "这是析构函数的调用" << endl;
//	}
//
//
//	int age;
//};
//
//
//
//
//void test01()
//{
//	Person p1(10);
//	cout << "p1的age为：" << p1.age << endl;
//	Person p2(p1);
//	cout << "p2的age为：" << p2.age << endl;
//}
//
////值传递的方式给函数参数传值
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}