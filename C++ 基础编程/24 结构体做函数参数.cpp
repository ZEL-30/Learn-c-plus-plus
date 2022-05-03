//#include <iostream>
//#include <string>
//using namespace std;
//
//struct Student
//{
//	string       name;
//	int          age;
//	string       sex;
//	long long    s_id;
//	string       courses;
//	int          scores;
//};
//
//void PrintSturct(struct Student std)
//{
//	cout << "学生的姓名：" << std.name << endl;
//	cout << "学生的年龄：" << std.age << endl;
//	cout << "学生的性别：" << std.sex << endl;
//	cout << "学生的学号：" << std.s_id << endl;
//	cout << "学生的学科：" << std.courses << endl;
//	cout << "学生的成绩：" << std.scores << endl;
//}
//
////初始化
//Student* Init(Student* std)
//{
//	std->name = " ";
//	std->age = 0;
//	std->sex =" ";
//	std->s_id = 0;
//	std->courses = " ";
//	std->scores = 0;
//	return std;
//}
//
//int main()
//{
//	// 结构体赋值方法1
//	Student std1;
//	std1.name = "张恩乐";
//	std1.age = 23;
//	std1.sex = "男";
//	std1.s_id = 201802464052;
//	std1.courses  = "CET-6";
//	std1.scores = 452;
//
//	// 结构体赋值方法2
//	Student std2 = { "杨文龙",22,"男",201802464060,"CET-6",0 };
//
//	PrintSturct(std1);
//	PrintSturct(std2);
//
//	Init(&std2);   //初始化数据
//	PrintSturct(std1);
//	PrintSturct(std2);
//
//	system("pause");
//
//
//	return 0;
//} 