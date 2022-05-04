#include <iostream>
using namespace std;

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}



int main()
{
	int a = 100;
	int b = 200;
	swap(a, b);


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");

	return 0;
} 
