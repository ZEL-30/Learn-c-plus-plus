#include <iostream>
using namespace std;

int main()
{
	string movie = "";
	int score = 0;
	cout << "���������ۿ��ĵ�Ӱ��" << endl;
	cin >> movie;
	cout << "���<<" << movie << ">>���:" << endl;
	cin >> score;
	switch (score)
	{
		case 0:  cout << "<<" << movie << ">>��һ�������ĵ�Ӱ!" << endl; break;
		case 1:  cout << "<<" << movie << ">>��һ�������ĵ�Ӱ!" << endl; break;
		case 2:  cout << "<<" << movie << ">>��һ�������ĵ�Ӱ!" << endl; break;
		case 3:  cout << "<<" << movie << ">>��һ�������ĵ�Ӱ!" << endl; break;
		case 4:  cout << "<<" << movie << ">>��һ�������ĵ�Ӱ!" << endl; break;
		case 5:  cout << "<<" << movie << ">>��һ��һ��ĵ�Ӱ!" << endl; break;
		case 6:  cout << "<<" << movie << ">>��һ��һ��ĵ�Ӱ!" << endl; break;
		case 7:  cout << "<<" << movie << ">>��һ���ǳ��õĵ�Ӱ!" << endl; break;
		case 8:  cout << "<<" << movie << ">>��һ���ǳ��õĵ�Ӱ!" << endl; break;
		case 9:  cout << "<<" << movie << ">>��һ������ĵ�Ӱ!" << endl; break;
		case 10: cout << "<<" << movie << ">>��һ������ĵ�Ӱ!" << endl; break;
		default: cout << "������0-10���ڵ������������֣�" << endl; break;

	}


	system("pause");

	return 0;
}


