#include <iostream>
using namespace std;

//函数模板
template<typename T> //声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用的数据类型
void Swap(T &a,T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	double c = 1.1;
	double d = 2.2;

	//两种方式使用函数模板
	//1、自动类型推导
	Swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2、显示指定类型
	Swap<double>(c, d);
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;

	system("pause");
	system("cls");
	return 0;
}