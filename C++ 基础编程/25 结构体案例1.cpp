#include <iostream>
#include <string>
#include <ctime>
using namespace std;

struct Students
{
	string   name;
	int      scroe;
};

struct Teachers
{
	string name;
	Students stu[5];
};

Teachers* Add_data(Teachers* t)
{
	t[0].name = "κ��";
	t[0].stu[0].name = "�Ŷ���";
	t[0].stu[1].name = "������";
	t[0].stu[2].name = "�ܺ�";
	t[0].stu[3].name = "����";
	t[0].stu[4].name = "���";
	t[0].stu[0].scroe = 650;
	t[0].stu[1].scroe = 700;
	t[0].stu[2].scroe = 540;
	t[0].stu[3].scroe = 380;
	t[0].stu[4].scroe = 250;

	t[1].name = "���";
	t[1].stu[0].name = "����";
	t[1].stu[1].name = "�����";
	t[1].stu[2].name = "�ܺ�";
	t[1].stu[3].name = "�ŷ�";
	t[1].stu[4].name = "����";
	t[1].stu[0].scroe = 300;
	t[1].stu[1].scroe = 540;
	t[1].stu[2].scroe = 570;
	t[1].stu[3].scroe = 380;
	t[1].stu[4].scroe = 530;

	t[2].name = "���";
	t[2].stu[0].name = "��Ȩ";
	t[2].stu[1].name = "����";
	t[2].stu[2].name = "�ܺ�";
	t[2].stu[3].name = "����";
	t[2].stu[4].name = "���";
	t[2].stu[0].scroe = 650;
	t[2].stu[1].scroe = 150;
	t[2].stu[2].scroe = 820;
	t[2].stu[3].scroe = 590;
	t[2].stu[4].scroe = 170;
	return t;
}

void Print_struct(Teachers* t)
{	
	for (int i = 0; i < 3; i++)
	{
		cout << "��ʦ" << i + 1 << ":" << endl;
		cout << t[i].name << endl;
		cout << "\t����ѧ����" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t" << t[i].stu[j].name << " �ɼ���" << t[i].stu[j].scroe << endl;
		}

	}

	

}



int main()
{	
	srand((unsigned int)time(NULL));  //���������
	Teachers sturct_arr[3];

	Add_data(sturct_arr);

	Print_struct(sturct_arr);

	int arr[5];
	
	

	for (int i = 0; i < 5; i++)
	{
		int random = rand() % 41 + 60;  // rand()%41 ���� 0 ~ 40 ��ȡֵ��Χ
		arr[i] = random;
	}

	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] <<endl;
	}


	system("pause");

	return 0;
} 