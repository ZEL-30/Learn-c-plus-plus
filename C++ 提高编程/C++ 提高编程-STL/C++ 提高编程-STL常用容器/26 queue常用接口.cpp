#include <iostream>
#include <queue>
using namespace std;


//queue<T> que;                             //queue采用模板类实现，queue对象的默认构造形式
//queue(const queue& que;                   //拷贝构造函数
//
//queue& operator=(const queue& que);       //重载等号操作符
//
//push(elem);                               //向队尾添加元素
//pop();                                    //从队头移除第一个元素
//back();                                   //返回最后一个元素
//front();                                    //返回第一个元素
//
//empty();                                  //判断队列是否为空
//size();                                   //返回队列大小


void test01()
{
	queue<int> q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	while (!q.empty())
	{
		cout << "队头：" << q.front() << " 队尾："<< q.back() <<endl;
		q.pop();
	}

}





int main()
{
	test01();

	system("pause");
	return 0;
}