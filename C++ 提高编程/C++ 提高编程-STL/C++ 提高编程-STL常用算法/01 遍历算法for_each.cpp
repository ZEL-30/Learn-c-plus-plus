#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//1、普通函数
void print(int val)
{
	cout << val << " ";
}


//2、仿函数
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

	//遍历容器
	//方法一、普通函数
	//for_each(V.begin(),V.end(),print);
	//cout << endl;

	//方法二、函数对象-仿函数
	Myprint p;
	for_each(V.begin(), V.end(), p);
	cout << endl;

}





int main()
{
	test01();

	system("pause");
	return 0;
}