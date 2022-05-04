#include <iostream>

using namespace std;

//�ж��Ƿ���ˮ�ɻ���
int Daffodil_number(int num);

//�˷�����
int power(int a, int b);

int main()
{

	int num = 100;    //��ʼ����

	cout << "3λ���е�ˮ�ɻ����У�" << endl;

	do
	{
		if (Daffodil_number(num) == 1)
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


//�ж��Ƿ���ˮ�ɻ���
int Daffodil_number(int num)
{
	int num_1 = 0;  //��λ
	int num_2 = 0;  //ʮλ
	int num_3 = 0;  //��λ
	//����������λ��ʮλ����λ
	num_3 = num / 100;
	num_2 = (num % 100) / 10;
	num_1 = (num % 100) % 10;

	if ((power(num_3,3) + power(num_2,3) + power(num_1,3)) == num)
		return 1;
	else
		return 0;
}

//�˷�����
int power(int a, int b)
{
	int result = 1;
	for (int i = 0; i < b; i++)
	{
		result = result * a;
	}
	return result;
}

