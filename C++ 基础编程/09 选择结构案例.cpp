#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "��������ֻС��A��B��C�����أ�" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "С��A������Ϊ��" << a << endl;
	cout << "С��B������Ϊ��" << b << endl;
	cout << "С��C������Ϊ��" << c << endl;
	if (a > b )
	{
		if (a > c)
			cout << "С��A���أ�" << endl;
		else
			cout << "С��C���أ�" << endl;

	}
	else if ( b < c)
		cout << "С��C���أ�" << endl;
	else
		cout << "С��B���أ�" << endl;

	if (a > b && a > c)
		cout << "С��A���أ�" << endl;
	else if (b > a && b > c)
		cout << "С��B���أ�" << endl;
	else if (c > a && c > b)
		cout << "С��C���أ�" << endl;


	system("pause");

	return 0;
}
