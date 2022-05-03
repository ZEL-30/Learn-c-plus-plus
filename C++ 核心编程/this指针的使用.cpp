//#include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		// this 指针指向   被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person & p)
//	{
//		this->age += p.age;
//
//		//this 指向p2的指针
//		return *this;
//	}
//
//	int age;
//};
//
//
//
//
////1.解决名称冲突
//void test01()
//{
//	Person p(18);
//	cout << "p1的年龄为：" << p.age << endl;
//}
//
//
////2.返回对象本身用 *this
//void test02()
//{ 
//	Person p1(10);
//	Person p2(200);
//	
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年为：" << p2.age << endl;
//}
//
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}