#include <iostream>
using namespace std;


//�������� - �º���

class MyAdd
{
public:
	int operator()(int v1,int v2)
	{
		return v1 + v2;
	}
};




void test01()
{
	MyAdd myadd;
	cout << myadd(12, 13) << endl;
}


int main()
{
	test01();
	system("pause");
	return 0;
}