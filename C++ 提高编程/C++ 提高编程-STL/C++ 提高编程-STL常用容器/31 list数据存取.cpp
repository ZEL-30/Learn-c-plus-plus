#include <iostream>
#include <list>
using namespace std;


//front();               //返回第一个元素
//back();                //返回最后一个元素


void printList(list<int> &L)
{
	for (list<int>::iterator it = L.begin(); it != L.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}








void test01()
{
	list<int> L;
	L.push_back(10);
	L.push_back(20);
	L.push_back(30);
	L.push_front(100);
	L.push_front(200);
	L.push_front(300);

	printList(L);
	cout << L.front() << endl;
	cout << L.back() << endl;

}





int main()
{
	test01();

	system("pause");
	return 0;
}