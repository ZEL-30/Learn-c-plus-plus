#include <iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	cout << "请输入三只小猪A、B、C的体重：" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << "小猪A的体重为：" << a << endl;
	cout << "小猪B的体重为：" << b << endl;
	cout << "小猪C的体重为：" << c << endl;
	if (a > b )
	{
		if (a > c)
			cout << "小猪A最重！" << endl;
		else
			cout << "小猪C最重！" << endl;

	}
	else if ( b < c)
		cout << "小猪C最重！" << endl;
	else
		cout << "小猪B最重！" << endl;

	if (a > b && a > c)
		cout << "小猪A最重！" << endl;
	else if (b > a && b > c)
		cout << "小猪B最重！" << endl;
	else if (c > a && c > b)
		cout << "小猪C最重！" << endl;


	system("pause");

	return 0;
}
