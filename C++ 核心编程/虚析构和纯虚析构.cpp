//#include <iostream>
//#include <string>
//using namespace std;
//
////虚析构和纯虚析构
//
////动物类
//class Animal
//{
//public:
//	Animal()
//	{
//		cout << "Animal的构造函数调用" << endl;
//	}
//	virtual void speak() = 0;
//
//	////虚析构
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal的析构函数调用" << endl;
//	//}
//
//	virtual ~Animal() = 0;   //纯虚析构
//
//};
//
//Animal::~Animal()
//{
//	cout << "Animal的纯析构函数调用" << endl;
//}
//
////猫类
//class Cat : public Animal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat的构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	void speak()
//	{
//		cout << *m_name << "小猫在说话！" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "Cat的析构函数调用" << endl;
//			delete m_name;
//			m_name = NULL;
//		}
//	}
//	string* m_name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类的指针在析构时候，不会调用子类析构函数，导致子类如果有堆区属性，出现内存泄露
//	delete animal;
//	animal = NULL;
//}
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