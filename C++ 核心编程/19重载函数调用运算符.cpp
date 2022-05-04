#include <iostream>
using namespace std;

//打印输出类
class Print
{
public:
	
	//重载函数调用运算符
	void operator()(int test)
	{
		cout << test << endl;
	}
};



//加法类
class MyAdd
{
public:

	//重载函数调用运算符
	int operator()(int a,int b)
	{
		return a + b;
	}
};

void test01()
{
	Print myprint;
	MyAdd myadd;
	myprint(myadd(10, 20));  //由于使用起来非常类似与函数调用，称为仿函数
}



int main()
{
	test01();

	system("pause");
	return 0;
}