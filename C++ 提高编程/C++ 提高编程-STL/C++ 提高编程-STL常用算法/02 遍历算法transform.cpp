#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//transform(iterator beg1, iterator beg1, iterator beg2, _func);
////beg1 原容器起始迭代器
////end1 原容器结束迭代器
////beg3 目标容器起始迭代器
////_func 函数或者函数对象

class Transform
{
public:
	int operator()(int val)
	{
		return val+1000;
	}
};


class Myprint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};






void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	vector<int> Vtarget;
	Vtarget.resize(10);    //目标容器提前开辟空间
	transform(V.begin(), V.end(), Vtarget.begin(), Transform());
	for_each(Vtarget.begin(), Vtarget.end(), Myprint());
	cout << endl;



}



int main()
{
	test01();
	system("pause");
	return 0;
}