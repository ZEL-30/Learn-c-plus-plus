#include <iostream>
#include <functional>
using namespace std;


//template<class T> T plus<T>             //加法仿函数
//template<class T> T minus<T>            //减法仿函数
//template<class T> T multiplies<T>       //乘法仿函数
//template<class T> T divides<T>          //除法仿函数
//template<class T> T modulues<T>         //取模仿函数
//template<class T> T negate<T>           //取反仿函数


//negate 一元仿函数   取反
void test01()
{
	negate<int> N;
	cout <<N(50) << endl;
}



//plus 二元仿函数   加法

void test02()
{
	plus<int> P;
	cout << P(25, 19) << endl;
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}





