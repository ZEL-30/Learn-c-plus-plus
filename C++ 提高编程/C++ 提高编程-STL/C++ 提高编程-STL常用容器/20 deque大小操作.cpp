#include <iostream>
#include <deque>
using namespace std;


//empty();                  //判断容器是否为空  返回bool型
//size();                   //返回容器中元素的个数
//resize(int num);          //重新指定容器的长度为num，若容器变长，则以默认值充填新位置
//						  //如果容器变短，则末尾超出容器长度的元素被删除
//resize(int num, elem);    //重新指定容器的长度为num，若容器变长，则以elem值充填新位置
//						  //如果容器变短，则末尾超出容器长度的元素被删除





void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}






void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_front(i);
	}
	printDeque(d1);

	cout << "d1的大小为：" << d1.size() << endl;
	d1.resize(20, 10);
	printDeque(d1);
	cout << "d1的大小为：" << d1.size() << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}