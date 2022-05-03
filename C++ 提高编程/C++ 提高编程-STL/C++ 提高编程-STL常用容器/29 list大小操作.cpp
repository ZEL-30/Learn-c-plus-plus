//#include <iostream>
//#include <list>
//using namespace std;
//
//
////empty();                  //判断容器是否为空  返回bool型
////size();                   //返回容器中元素的个数
////resize(int num);          //重新指定容器的长度为num，若容器变长，则以默认值充填新位置
////						  //如果容器变短，则末尾超出容器长度的元素被删除
////resize(int num, elem);    //重新指定容器的长度为num，若容器变长，则以elem值充填新位置
////						  //如果容器变短，则末尾超出容器长度的元素被删除
//
//
//
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
//
//
//
//void test01()
//{
//	list<int> L1;
//	for (int i = 0; i < 10; i++)
//	{
//		L1.push_front(i);
//	}
//	printList(L1);
//
//	cout << "L1的大小为：" << L1.size() << endl;
//	L1.resize(20, 10);
//	printList(L1);
//	cout << "L1的大小为：" << L1.size() << endl;
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