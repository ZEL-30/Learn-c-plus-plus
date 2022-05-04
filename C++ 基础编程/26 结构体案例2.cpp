#include <iostream>
#include <string>
using namespace std;


struct Hero
{
	string name;
	int    age;
	string sex;
};


void Swap(Hero* h1, Hero* h2)
{
	Hero temp;
	//��������
	temp.name = h1->name;
	h1->name = h2->name;
	h2->name = temp.name;
	//��������
	temp.age = h1->age;
	h1->age = h2->age;
	h2->age = temp.age;
	//�����Ա�
	temp.sex = h1->sex;
	h1->sex = h2->sex;
	h2->sex = temp.sex;


}




void Bubble(Hero h[],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (h[j].age > h[j + 1].age)
			{
				Swap(&(h[j]), &(h[j + 1]));
			}

		}
	}

}


void PrintStruct(Hero h[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << h[i].name << "  " << h[i].age << "  " << h[i].sex << endl;
	}
}









int main()
{
	Hero h[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};

	int len = sizeof(h) / sizeof(h[0]);

	Bubble(h,len);

	PrintStruct(h,len);


	system("pause");

	return 0;
} 
