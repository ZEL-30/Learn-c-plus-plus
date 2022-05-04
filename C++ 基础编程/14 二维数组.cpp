#include <iostream>
using namespace std;
#define ROW 3
#define COL 3

int main()
{
	int arr[ROW][COL] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int f_score[3];
	string name[] = {"����","����","����"};
	for (int i = 0; i < ROW; i++)
	{
		f_score[i] = 0;
		for (int j = 0; j < COL; j++)
		{
			f_score[i] = f_score[i] + arr[i][j];
		}
		cout << name[i] << "���ܳɼ�Ϊ��" << f_score[i] << endl;
	}


	system("pause");

	return 0;
} 