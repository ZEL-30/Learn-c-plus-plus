#include <iostream>
#include <stack>
using namespace std;


//stack<T> stk;                             //stack采用模板类实现，stack对象的默认构造形式
//stack(const stack& stk);                  //拷贝构造函数
//
//stack& operator=(const stack& stk);       //重载等号操作符
//
//push(elem);                               //向栈顶添加元素
//pop();                                    //从栈顶移除第一个元素
//top();                                    //返回栈顶元素
//
//empty();                                  //判断栈顶是否为空
//size();                                   //返回栈大小




void test01()
{
	//特点：符合先进后出数据结构
	stack<int> s;

	//入栈
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}

}



int main()
{
	test01();

	system("pause");
	return 0;
}