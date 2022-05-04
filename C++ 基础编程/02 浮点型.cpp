#include <iostream>
using namespace std;


int main()
{
	float f1 = 3.14f;

	cout << "�������ǣ�" << f1 << endl;

	double d1 = 3.1415926;

	cout << "�������ǣ�" << d1<< endl;
	
	//ͳ���ڴ�ռ�
	cout << "float���ڴ�ռ䣺" << sizeof(f1) << endl;

	cout << "double���ڴ�ռ䣺" << sizeof(d1) << endl;



	//��ѧ������
	float f2 = 9e3;  //9*10^3
	cout << "f2�ǣ�" << f2 << endl;

	float f3 = 3e-3; //3*0.1^3
	cout << "f3�ǣ�" << f3 << endl;





	system("pause");

	return 0;
}

