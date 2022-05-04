#include <iostream>
using namespace std;

//ѧ���ṹ��
struct student 
{
	string name;
	int    age;
	int    scores;
};

// ������ʦ�Ľṹ��
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;   //��ʦ�Ľṹ��Ƕ��ѧ���ṹ��
};



int main()
{
	teacher t;
	t.age = 62;
	t.name = "����";
	t.id = 01;
	t.stu.age = 22;
	t.stu.name= "С��";
	t.stu.scores = 650;

	cout << t.stu.scores << endl;

	system("pause");

	return 0;
} 
