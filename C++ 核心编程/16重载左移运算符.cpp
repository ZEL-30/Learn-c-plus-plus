#include <iostream>
#include <string>
using namespace std;

//左移运算符的重载

class Student
{
	friend ostream& operator<< (ostream& cout, Student& s);
public:
	Student
private:
	//利用成员函数重载 左移运算符
	//无法利用成员函数重载



	string m_name;
	int    m_age;
	string m_id;
};

Student::Student():m_name("张恩乐"),m_id("201802464052"),m_age(23)
{

}


ostream& operator<< (ostream &cout ,Student &s)  //本质 operator<<(cout,p) 简化 cout << p
{
	cout << "姓名为：" << s.m_name << endl << "年龄为：" << s.m_age << endl << "学号为：" << s.m_id << endl;
	return cout;
}





void test01()
{
	Student s1;

	//operator<<(cout,s1);   // 重载左移运算符的本质
	cout << s1 << endl;    //简化
}



int main()
{
	test01();

	system("pause");
	return 0;
}