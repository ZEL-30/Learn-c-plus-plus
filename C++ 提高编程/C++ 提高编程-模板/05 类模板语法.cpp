#include <iostream>
using namespace std;

//类模板
template <class NameType,class AgeType = int>  //class AgeType = int 默认类型
class Person
{
public:

	Person(NameType Name,AgeType Age)
	{
		m_Age = Age;
		m_Name = Name;
	}

	void showInfo()
	{
		cout << m_Age << m_Name << endl;
	}

	AgeType m_Age;
	NameType m_Name;
};


void test01()
{
	Person<string,int>p1("张恩乐", 23);
	p1.showInfo();


}





int main()
{
	test01();

	system("pause");
	system("cls");
	return 0;
}