#include <iostream>
using namespace std;

class Person
{
public:
	Person                                                                   ()
	{
		cout << "默认构造函数调用" << endl;
	}

	Person(int a, int height)
	{
		age = a;
		Height = new int(height);
		cout << "有参构造函数调用" << endl;
	}

	Person(const Person& p)
	{
		age = p.age;

		//深拷贝操作   就是使用自己创建的拷贝构造函数，在堆区创建数据
		Height = new int(*p.Height);
		cout << "拷贝构造函数调用" << endl;
	}

	~Person()
	{
		if (Height != NULL)
		{
			delete Height;
			Height = NULL;
		}
		cout << "这是析构函数调用" << endl;
	}


	int age;
	int* Height;
};


void test01()
{
	Person p1(10,177);

	Person p2(p1);
	cout << "年龄为：" << p2.age << endl;
	cout << "身高为：" << *p2.Height << endl;
}






int main()
{
	test01();

	system("pause");
	return 0;
}