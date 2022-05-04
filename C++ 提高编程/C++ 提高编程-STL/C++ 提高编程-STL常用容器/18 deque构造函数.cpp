#include <iostream>
#include <deque>
using namespace std;



//deque<T> depT;                         //采用模板实现类实现，默认构造函数
//deque(v.begin(), v.end());             //将v[begin(),end()]区间中的元素拷贝给本身     前闭后开的区间
//deque(n, elem);                        //构造函数将n个elem拷贝给本身
//deque(const deque& deq);               //拷贝构造函数

void printDeque(const deque<int> &d)
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

	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	deque<int> d3(10, 5);
	printDeque(d3);

	deque<int> d4(d3);
	printDeque(d4);


}




int main()
{
	test01();

	system("pause");
	return 0;
}