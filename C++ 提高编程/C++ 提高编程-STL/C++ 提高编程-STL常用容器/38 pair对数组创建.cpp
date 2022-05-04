#include <iostream>
using namespace std;

//pair对数组创建
void test01()
{
	//第一种方式
	pair<string, int>p{ "张恩乐",23 };
		
	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;


	//第二种方式
	pair<string, int> p2 = make_pair("王子怡",20);

	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
}






int main()
{
	test01();

	system("pause");
	return 0;
}