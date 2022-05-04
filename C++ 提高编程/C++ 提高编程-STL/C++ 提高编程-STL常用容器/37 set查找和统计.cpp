#include <iostream>
#include <set>
using namespace std;

//find(key);                            //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end()
//count(key);                           //统计key的元素个数



void printSet(set<int> S)
{
	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}


void test01()
{
	set<int> s1;

	//插入数据，只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);
	
	set<int>::iterator pos = s1.find(40);
	if (pos != s1.end())
	{
		cout << "找到元素:" << *pos << endl;
	}
	else
	{
		cout << "没有找到元素" << endl;
	}
}

void test02()
{
	//统计
	multiset<int> s1;

	//插入数据，只有insert方式
	s1.insert(10);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);
	s1.insert(20);

	cout << "num = " << s1.count(30) << endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}

