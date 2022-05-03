//#include <iostream>
//#include <vector>
//#include <map>
//#include <ctime>
//using namespace std;
//
//
//class Employee
//{
//public:
//
//	Employee(string Name, int Salary)
//	{
//		m_Name = Name;
//		m_Salary = Salary;
//	}
//
//
//	string m_Name;      //员工姓名
//	int    m_Salary;    //员工薪资
//};
//
//
//void CreateEmployee(vector<Employee>& V)
//{
//	string NameSeed = "ABCDEFGHIJ";
//	for (int i = 0; i < 10; i++)
//	{
//		string Name = "员工";
//		Name += NameSeed[i];
//
//		int Salary = 0;
//
//		Employee E(Name, Salary);
//		V.push_back(E);
//	}
//}
//
////随机分组
//void Group(vector<Employee>& V, multimap<int, Employee>& M)
//{
//	for (vector<Employee>::iterator it = V.begin(); it != V.end(); it++)
//	{
//		int random = rand() % 3 + 1;   //1~3
//		switch (random)
//		{
//		case 1:  //策划  薪资 15000
//			it->m_Salary = 15000;
//			M.insert(make_pair(1, (*it)));
//			break;
//		case 2:  //美术  薪资 12000
//			it->m_Salary = 12000;
//			M.insert(make_pair(2, (*it)));
//			break;
//		case 3:  //研发  薪资 20000
//			it->m_Salary = 20000;
//			M.insert(make_pair(3, (*it)));
//			break;
//		default:
//			break;
//
//		}
//
//	}
//}
////cout << "部门：策划 姓名：" << it->second.m_Name << " 薪资：" << it->second.m_Salary << endl;
//
////打印员工信息
//void PrintEmployee(multimap<int,Employee> &M)
//{
//	//打印策划
//	cout << "策划部门：" << endl;
//	for (multimap<int, Employee>::iterator it = M.begin(); it != M.find(2); it++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 薪资：" << it->second.m_Salary << endl;
//	}
//
//	//打印美术
//	cout << "----------------------------------" << endl;
//	cout << "美术部门：" << endl;
//	for (multimap<int, Employee>::iterator it = M.find(2); it != M.find(3); it++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 薪资：" << it->second.m_Salary << endl;
//	}
//
//	//打印研发
//	cout << "----------------------------------" << endl;
//	cout << "研发部门：" << endl;
//	for (multimap<int, Employee>::iterator it = M.find(3); it != M.end(); it++)
//	{
//		cout << "姓名：" << it->second.m_Name << " 薪资：" << it->second.m_Salary << endl;
//	}
//}
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));   //随机播种
//	//1、创建10名员工
//	vector<Employee> V;
//	CreateEmployee(V);
//
//	//2、随机分组
//	multimap<int, Employee> M;
//	Group(V, M);
//
//	//3、分部门显示员工信息
//	PrintEmployee(M);
//
//	system("pause");
//	return 0;
//}