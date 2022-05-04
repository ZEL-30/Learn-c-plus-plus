#include <iostream>
using namespace std;

class Person
{
public:

	//构造函数
	Person()         //无参构造 —— 默认构造
	{
		cout << "这是构造函数的调用" << endl;
	}

	Person(int a)    //有参构造
	{
		age = a;
		cout << "这是有参构造函数的调用" << endl;
	}

	Person(const Person &p)        //拷贝构造函数 
	{
		age = p.age;   //将传入的人身上的所有属性，拷贝到我的身上
		cout << "这是拷贝构造函数的调用" << endl;
	}


	//析构函数
	~Person()
	{
		cout << "这是析构函数的调用" << endl;
	}


	int age;

};

//调用
void test()
{
	//1.括号法 
	//Person p1;       //普通构造函数   调用默认构造函数时候，不要加（）
	//Person p2(10);   //有参构造函数
	//Person p3(p2);   //拷贝构造函数

	//注意事项
	// 调用默认构造函数时候，不要加（）
	//cout << "p2的年龄:" << p2.age << endl;
	//cout << "p3的年龄:" << p3.age << endl;


	//2.显示法 
	Person p1;                 //普通构造函数   调用默认构造函数时候，不要加（）
	Person p2 = Person(10);    // 有参构造函数
	Person p3 = Person(p2);    //拷贝构造函数

	//Person(10); //匿名对象  特点：当前执行行结束后，系统会立即回收匿名对象

	//3.隐式转换法
	Person p4 = 10;   //相当于 写了 Person p4 = Person(10)；

}



int main()
{
	test();

	system("pause");
	return 0;
}