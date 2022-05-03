//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
//struct Students
//{
//	string   name;
//	int      scroe;
//};
//
//struct Teachers
//{
//	string name;
//	Students stu[5];
//};
//
//Teachers* Add_data(Teachers* t)
//{
//	t[0].name = "魏国";
//	t[0].stu[0].name = "张恩乐";
//	t[0].stu[1].name = "杨文龙";
//	t[0].stu[2].name = "周鸿";
//	t[0].stu[3].name = "陈哲";
//	t[0].stu[4].name = "杨广";
//	t[0].stu[0].scroe = 650;
//	t[0].stu[1].scroe = 700;
//	t[0].stu[2].scroe = 540;
//	t[0].stu[3].scroe = 380;
//	t[0].stu[4].scroe = 250;
//
//	t[1].name = "蜀国";
//	t[1].stu[0].name = "赵云";
//	t[1].stu[1].name = "诸葛亮";
//	t[1].stu[2].name = "周鸿";
//	t[1].stu[3].name = "张飞";
//	t[1].stu[4].name = "关羽";
//	t[1].stu[0].scroe = 300;
//	t[1].stu[1].scroe = 540;
//	t[1].stu[2].scroe = 570;
//	t[1].stu[3].scroe = 380;
//	t[1].stu[4].scroe = 530;
//
//	t[2].name = "吴国";
//	t[2].stu[0].name = "孙权";
//	t[2].stu[1].name = "吕蒙";
//	t[2].stu[2].name = "周鸿";
//	t[2].stu[3].name = "陈哲";
//	t[2].stu[4].name = "杨广";
//	t[2].stu[0].scroe = 650;
//	t[2].stu[1].scroe = 150;
//	t[2].stu[2].scroe = 820;
//	t[2].stu[3].scroe = 590;
//	t[2].stu[4].scroe = 170;
//	return t;
//}
//
//void Print_struct(Teachers* t)
//{	
//	for (int i = 0; i < 3; i++)
//	{
//		cout << "教师" << i + 1 << ":" << endl;
//		cout << t[i].name << endl;
//		cout << "\t所带学生：" << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\t" << t[i].stu[j].name << " 成绩：" << t[i].stu[j].scroe << endl;
//		}
//
//	}
//
//	
//
//}
//
//
//
//int main()
//{	
//	srand((unsigned int)time(NULL));  //随机数种子
//	Teachers sturct_arr[3];
//
//	Add_data(sturct_arr);
//
//	Print_struct(sturct_arr);
//
//	int arr[5];
//	
//	
//
//	for (int i = 0; i < 5; i++)
//	{
//		int random = rand() % 41 + 60;  // rand()%41 —— 0 ~ 40 的取值范围
//		arr[i] = random;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] <<endl;
//	}
//
//
//	system("pause");
//
//	return 0;
//} 