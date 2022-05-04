#include <iostream>
using namespace std;

//函数模板
template<class T> //typename 可以替换为 class  
void Swap(T& a, T& b)
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