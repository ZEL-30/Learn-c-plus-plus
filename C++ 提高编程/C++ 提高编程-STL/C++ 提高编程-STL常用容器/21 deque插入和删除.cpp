//#include <iostream>
//#include <deque>
//using namespace std;
//
//
////push_back(ele);                          //在容器尾部插入元素ele
////push_front(ele);                         //在容器头部插入元素ele
////pop_back();                              //删除容器最后一个元素
////pop_front();                             //删除容器第一个一个元素
////insert(pos, elem);                       //在pos位置插入一个elem元素的拷贝，返回新数据的位置
////insert(pos, n, elem);                    //在pos位置插入n个elem数据，无返回值
////insert(pos, beg, end);                   //在pos位置插入[beg，end)区间的数据，无返回值
////erase(pos);                              //删除pos位置的数据，返回下一个数据的位置
////erase(beg, end);                         //删除[beg，end)区间的数据，返回下一个数据的位置
////clear();                                 //删除容器中所有元素
//
// 
//void printDeque(deque<int> d)
//{  
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
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
//	deque<int> d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//遍历
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//
//
//}
//
//void test02()
//{
//	deque<int> d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//遍历
//	printDeque(d1);
//
//	//插入   第一个参数是迭代器
//	d1.insert(d1.begin(), 100);
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	printDeque(d1);
//
//	//按照区间进行插入
//	deque<int> d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//
//	//删除
//	d1.erase(d1.begin());
//	printDeque(d1);
//
//	//清空
//	d1.erase(d1.begin(), d1.end());
//	d1.clear();
//	printDeque(d1);
//}
//
//
//
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}