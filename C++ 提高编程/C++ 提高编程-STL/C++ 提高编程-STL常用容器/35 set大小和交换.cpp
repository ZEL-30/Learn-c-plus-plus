#include <iostream>
#include <set>
using namespace std;



//empty();                  //判断容器是否为空  返回bool型
//size();                   //返回容器中元素的个数
//swap(st);                 //交换两个集合容器


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

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);
	s2.insert(500);

	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);

	cout << "交换后：" << endl;
	s1.swap(s2);
	printSet(s1);
	printSet(s2);
}



int main()
{
	test01();

	system("pause");
	return 0;
}

