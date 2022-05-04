#include <iostream>
using namespace std;

//继承中的对象模型

class Base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};

class Son : public Base
{
public:
	int m_d;
};


void test01()
{
	Son s1;
	cout << sizeof(s1) << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}