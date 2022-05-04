#include <iostream>
#include <deque>
using namespace std;

//at(int index);           //返回索引index所指的数据
//operator[];              //返回索引index所指的数据
//front();                 //返回容器中第一个数据元素
//back();                  //返回容器中最后一个数据元素





void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	//利用[]方式访问元素
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//利用at方式访问元素
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "第一个元素为：" << d1.front() << endl;
	cout << "最后一个元素为：" << d1.back() << endl;

}




int main()
{
	test01();

	system("pause");
	return 0;
}