#include <iostream>
using namespace std;

//类模板与继承
template <class T>
class Base
{
public:
	T m;
};

class son :public Base<int>
{

};


//如果想灵活指定出父类中T的类型，子类也需变为类模板
template <class T1,class T2>
class son2 : public Base<T2>
{
public:
	T1 obj;
};

void test01()
{
	son2<string,int> s2;
}
int main()
{
	system("pause");
	system("cls");
	return 0;
}