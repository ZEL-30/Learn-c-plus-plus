#include <iostream>
using namespace std;


// 继承方式

//公共继承
class Base1
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;

};


class Son1 :public Base1
{
public:
	void func()
	{
		m_a = 10;  
		m_b = 20;
		m_c = 30;
	}
};


//保护继承







int main()
{


	system("pause");
	return 0;
}