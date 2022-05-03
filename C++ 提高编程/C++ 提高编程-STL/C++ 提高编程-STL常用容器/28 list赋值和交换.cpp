//#include <iostream>
//#include <list>
//using namespace std;
//
////list& operator=(const list& lst);               //重载等号运算符
////assign(beg, end);                               //将[beg,end)区间中的数据拷贝赋值给本身
////assign(n,elem);                                 //将n个elem拷贝赋值给本身
////swap(lst);                                      //将lst与本身的元素互换
//
//
//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//void test01()
//{
//	list<int> L1;
//	
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//	printList(L1);
//
//	list<int> L2 = L1;
//	printList(L2);
//
//	list<int> L3;
//	L3.assign(L1.begin(), L1.end());
//	printList(L3);
//
//	list<int> L4;
//	L4.assign(10, 520);
//	printList(L4);
//
//	L1.swap(L4);
//	printList(L4);
//	printList(L1);
//
//
//
//}
//
//
//
//
//
//
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}