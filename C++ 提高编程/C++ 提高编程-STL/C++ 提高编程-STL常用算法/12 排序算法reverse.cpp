#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
////beg1 容器1起始迭代器
////end1 容器1结束迭代器
////beg2 容器2起始迭代器
////end2 容器2结束迭代器
////dest 目标容器起始迭代器


void print(int val)
{
	cout << val << " ";
}








void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+1);
	}

	vector<int> vtarget;
	vtarget.resize(v1.size()+v2.size());
	cout << "反转前：" << endl;
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), vtarget.end(), print);
	cout << endl;
	cout << "反转后：" << endl;
	reverse(vtarget.begin(), vtarget.end());
	for_each(vtarget.begin(), vtarget.end(), print);
	cout << endl;

}








int main()
{
	test01();
	system("pause");
	return 0;
}