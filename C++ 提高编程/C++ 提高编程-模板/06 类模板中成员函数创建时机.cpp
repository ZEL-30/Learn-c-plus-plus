#include <iostream>
using namespace std;

class Person1
{
public:
	void showPerson1()
	{
		cout << "Person1的调用" << endl;
	}

};


class Person2
{
public:
	void showPerson2()
	{
		cout << "Person2的调用" << endl;
	}

};

template<class T>
class Myclass
{
public:
	
	void func1()
	{
		obj.showPerson1();
	}
	void func2()
	{
		obj.showPerson2();
	}

	T obj;
};

void test01()
{
	Myclass<Person2> m1;
	m1.func2();

}


int main()
{
	test01();



	system("pause");
	system("cls");
	return 0;
}