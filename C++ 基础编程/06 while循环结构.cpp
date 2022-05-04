#include <iostream>
#include <ctime>  //timeϵͳʱ��ͷ�ļ�����
using namespace std;


int main()
{
	//�������������
	srand((unsigned int)time(NULL));
	// rand()%100 ��0-99֮��������
	int random_number = rand() % 100 + 1;
	int guess_number = 0;
	int time = 0;
	while (guess_number != random_number)
	{
		if (time <= 2)
		{
			cout << "������1-100֮������֣�" << endl;
			cin >> guess_number;
			time++;
			if (guess_number > random_number)
				cout << "��Ǹ��´���,�㻹��" << 3-time <<"�λ���"<< endl;
			else if (guess_number < random_number)
				cout << "��Ǹ���С��,�㻹��" << 3-time << "�λ���" << endl;
			else
				break;
		}
		else
			break;
		
	}
	if (time <= 2)
		cout << "��ϲ��Ŷ��ˣ����ǣ�" << random_number << endl;
	else
		cout << "���ź���ֻ�����λ��ᣬ�´μ��Ͱɣ�\n ���ǣ�" << random_number<< endl;



	system("pause");

	return 0;
}
