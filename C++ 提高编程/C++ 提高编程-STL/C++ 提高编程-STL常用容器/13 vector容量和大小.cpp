#include <iostream>
#include <vector>
using namespace std;

//empty();                  //�ж������Ƿ�Ϊ��
//capacity();               //����������
//size();                   //����������Ԫ�صĸ���
//resize(int num);          //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num, elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

void printVector(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}


void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);
	if (v1.empty())
	{
		cout << "����Ϊ��" << endl;
	}
	else
	{
		cout << "������Ϊ��" << endl;
	}

	cout << "v1��������" << v1.capacity() << " ��СΪ��" << v1.size() << endl;

	v1.resize(15,100);
	cout << "v1��������" << v1.capacity() << " ��СΪ��" << v1.size() << endl;
	printVector(v1);
}



int main()
{
	test01();

	system("pause");
	return 0;
}