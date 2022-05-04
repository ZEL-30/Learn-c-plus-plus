#include <iostream>
#include <string>
using namespace std;

typedef struct Student
{
	string       name;
	int          age;
	string       sex;
	long long    s_id;
	string       courses;
	int          scores;
} Student;



int main()
{
	// 结构体赋值方法1
	Student std1;
	std1.name = "张恩乐";
	std1.age = 23;
	std1.sex = "男";
	std1.s_id = 201802464052;
	std1.courses  = "CET-6";
	std1.scores = 452;

	// 结构体赋值方法2
	Student std2 = { "杨文龙",22,"男",201802464060,"CET-6",0 };




	cout << "学生的姓名：" << std1.name << endl;
	cout << "学生的年龄：" << std1.age << endl;
	cout << "学生的性别：" << std1.sex << endl;
	cout << "学生的学号：" << std1.s_id << endl;
	cout << "学生的学科：" << std1.courses << endl;
	cout << "学生的成绩：" << std1.scores << endl;

	cout << endl;
  
	cout << "学生的姓名：" << std2.name << endl;
	cout << "学生的年龄：" << std2.age << endl;
	cout << "学生的性别：" << std2.sex << endl;
	cout << "学生的学号：" << std2.s_id << endl;
	cout << "学生的学科：" << std2.courses << endl;
	cout << "学生的成绩：" << std2.scores << endl;


	system("pause");


	return 0;
} 