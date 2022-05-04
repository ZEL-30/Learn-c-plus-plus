#include <iostream>
using namespace std;

//��ӡ�����
class Print
{
public:
	
	//���غ������������
	void operator()(int test)
	{
		cout << test << endl;
	}
};



//�ӷ���
class MyAdd
{
public:

	//���غ������������
	int operator()(int a,int b)
	{
		return a + b;
	}
};

void test01()
{
	Print myprint;
	MyAdd myadd;
	myprint(myadd(10, 20));  //����ʹ�������ǳ������뺯�����ã���Ϊ�º���
}



int main()
{
	test01();

	system("pause");
	return 0;
}