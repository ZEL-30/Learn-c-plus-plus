#include <iostream>
using namespace std;

class Student
{
	friend ostream& operator<< (ostream& cout, Student& s);
public:
	Student();
	Student operator+(Student &s)
	{
		Student temp;
		temp.m_age = this->m_age + s.m_age;

		return temp;
	}



private:
	string m_name;
	int    m_age;
	string m_id;


};

Student::Student() :m_name("�Ŷ���"), m_id("201802464052"), m_age(23)
{

}

ostream& operator<< (ostream& cout, Student& s)
{
	cout << "������" << s.m_name << " ���䣺" << s.m_age << " ѧ�ţ�" << s.m_id;

	return  cout;
}





void test01()
{
	Student s1;
	Student s2;
	Student s3 = s1 + s2;
	cout << s3 << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}