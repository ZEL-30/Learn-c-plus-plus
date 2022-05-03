//#include <set>
//#include <iostream>
//using namespace std;
//
//
////set<T> st;                                       //默认构造函数
////set(const set& st);                              //拷贝构造函数
////
////set& operator=(const set& st);                   //重载等号操作符
//
//
//
//void printSet(set<int> S)
//{
//	for (set<int>::iterator it = S.begin(); it != S.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//
//
//void test01()
//{
//	set<int> s1;
//
//	//插入数据，只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(20);
//
//	printSet(s1);
//
//	set<int>s2(s1);
//	printSet(s2);
//}
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