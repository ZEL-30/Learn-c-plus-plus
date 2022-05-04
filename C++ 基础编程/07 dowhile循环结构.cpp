#include <iostream>

using namespace std;

//判断是否是水仙花数
int Daffodil_number(int num);

//乘方函数
int power(int a, int b);

int main()
{

	int num = 100;    //起始数字

	cout << "3位数中的水仙花数有：" << endl;

	do
	{
		if (daffodil_number(num) == 1)
		{
			cout << num << endl;
			num++;
		}

		else
			num++;		
	} while (num < 1000);

	system("pause");
	return 0;
}


//判断是否是水仙花数
int Daffodil_number(int num)
{
	int num_1 = 0;  //个位
	int num_2 = 0;  //十位
	int num_3 = 0;  //百位
	//分离整数百位、十位、个位
	num_3 = num / 100;
	num_2 = (num % 100) / 10;
	num_1 = (num % 100) % 10;

	if ((power(num_3,3) + power(num_2,3) + power(num_1,3)) == num)
		return 1;
	else
		return 0;
}

//乘方函数
int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}
	return result;
}

