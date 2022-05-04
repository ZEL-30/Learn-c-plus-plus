#include <iostream>
#include <list>
using namespace std;


//list<T> lst;                         //list采用模板实现类实现，默认构造函数
//list(v.begin(), v.end());            //将v[begin(),end())区间中的元素拷贝给本身  前闭后开的区间
//list(n, elem);                       //构造函数将n个elem拷贝给本身
//list(const list& lst);               //拷贝构造函数


void printList(const list<int> &L)
{
	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}








void test01()
{
	list<int> L1;

	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	list<int> L3(10, 122);
	printList(L3);

	list<int> L4(L3);
	printList(L4);
}






int main()
{
	test01();

	system("pause");
	return 0;
}