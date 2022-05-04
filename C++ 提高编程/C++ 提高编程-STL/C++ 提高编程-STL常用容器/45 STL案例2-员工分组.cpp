#include <iostream>
#include <vector>
#include <map>
#include <ctime>
using namespace std;


class Employee
{
public:

	Employee(string Name, int Salary)
	{
		m_Name = Name;
		m_Salary = Salary;
	}


	string m_Name;      //Ա������
	int    m_Salary;    //Ա��н��
};


void CreateEmployee(vector<Employee>& V)
{
	string NameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		string Name = "Ա��";
		Name += NameSeed[i];

		int Salary = 0;

		Employee E(Name, Salary);
		V.push_back(E);
	}
}

//�������
void Group(vector<Employee>& V, multimap<int, Employee>& M)
{
	for (vector<Employee>::iterator it = V.begin(); it != V.end(); it++)
	{
		int random = rand() % 3 + 1;   //1~3
		switch (random)
		{
		case 1:  //�߻�  н�� 15000
			it->m_Salary = 15000;
			M.insert(make_pair(1, (*it)));
			break;
		case 2:  //����  н�� 12000
			it->m_Salary = 12000;
			M.insert(make_pair(2, (*it)));
			break;
		case 3:  //�з�  н�� 20000
			it->m_Salary = 20000;
			M.insert(make_pair(3, (*it)));
			break;
		default:
			break;

		}

	}
}
//cout << "���ţ��߻� ������" << it->second.m_Name << " н�ʣ�" << it->second.m_Salary << endl;

//��ӡԱ����Ϣ
void PrintEmployee(multimap<int,Employee> &M)
{
	//��ӡ�߻�
	cout << "�߻����ţ�" << endl;
	for (multimap<int, Employee>::iterator it = M.begin(); it != M.find(2); it++)
	{
		cout << "������" << it->second.m_Name << " н�ʣ�" << it->second.m_Salary << endl;
	}

	//��ӡ����
	cout << "----------------------------------" << endl;
	cout << "�������ţ�" << endl;
	for (multimap<int, Employee>::iterator it = M.find(2); it != M.find(3); it++)
	{
		cout << "������" << it->second.m_Name << " н�ʣ�" << it->second.m_Salary << endl;
	}

	//��ӡ�з�
	cout << "----------------------------------" << endl;
	cout << "�з����ţ�" << endl;
	for (multimap<int, Employee>::iterator it = M.find(3); it != M.end(); it++)
	{
		cout << "������" << it->second.m_Name << " н�ʣ�" << it->second.m_Salary << endl;
	}
}


int main()
{
	srand((unsigned int)time(NULL));   //�������
	//1������10��Ա��
	vector<Employee> V;
	CreateEmployee(V);

	//2���������
	multimap<int, Employee> M;
	Group(V, M);

	//3���ֲ�����ʾԱ����Ϣ
	PrintEmployee(M);

	system("pause");
	return 0;
}