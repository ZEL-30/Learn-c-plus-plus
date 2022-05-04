#include <iostream>
#include <string>
using namespace std;

//�������ʹ�������

//������
class Animal
{
public:
	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
	virtual void speak() = 0;

	////������
	//virtual ~Animal()
	//{
	//	cout << "Animal��������������" << endl;
	//}

	virtual ~Animal() = 0;   //��������

};

Animal::~Animal()
{
	cout << "Animal�Ĵ�������������" << endl;
}

//è��
class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat�Ĺ��캯������" << endl;
		m_name = new string(name);
	}
	void speak()
	{
		cout << *m_name << "Сè��˵����" << endl;
	}

	~Cat()
	{
		if (m_name != NULL)
		{
			cout << "Cat��������������" << endl;
			delete m_name;
			m_name = NULL;
		}
	}
	string* m_name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//�����ָ��������ʱ�򣬲��������������������������������ж������ԣ������ڴ�й¶
	delete animal;
	animal = NULL;
}



int main()
{
	test01();

	system("pause");
	return 0;
}