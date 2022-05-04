#include <iostream>
#include <deque>
using namespace std;

//at(int index);           //��������index��ָ������
//operator[];              //��������index��ָ������
//front();                 //���������е�һ������Ԫ��
//back();                  //�������������һ������Ԫ��





void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	//����[]��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1[i] << " ";
	}
	cout << endl;

	//����at��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++)
	{
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ��" << d1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d1.back() << endl;

}




int main()
{
	test01();

	system("pause");
	return 0;
}