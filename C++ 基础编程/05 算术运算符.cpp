#include <iostream>
using namespace std;

int main()
{
	//ǰ�õݼ�
	int a = 10;
	int b = a-- * 60;
	cout << "a = " << a << endl;  //9
	cout << "b = " << b << endl;  //600

	//���õݼ�
	int c = 10;
	int d = --c * 60;
	cout << "c = " << c << endl;  //9
	cout << "d = " << d << endl;  //540


	system("pause");

	return 0;
}
