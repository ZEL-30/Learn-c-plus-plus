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
	//交换名字
	temp.name = h1->name;
	h1->name = h2->name;
	h2->name = temp.name;
	//交换年龄
	temp.age = h1->age;
	h1->age = h2->age;
	h2->age = temp.age;
	//交换性别
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
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};

	int len = sizeof(h) / sizeof(h[0]);

	Bubble(h,len);

	PrintStruct(h,len);


	system("pause");

	return 0;
} 
