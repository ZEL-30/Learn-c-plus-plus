#include <iostream>
#include <deque>
using namespace std;


//empty();                  //�ж������Ƿ�Ϊ��  ����bool��
//size();                   //����������Ԫ�صĸ���
//resize(int num);          //����ָ�������ĳ���Ϊnum���������䳤������Ĭ��ֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��
//resize(int num, elem);    //����ָ�������ĳ���Ϊnum���������䳤������elemֵ������λ��
//						  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��





void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}






void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_front(i);
	}
	printDeque(d1);

	cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
	d1.resize(20, 10);
	printDeque(d1);
	cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
}




int main()
{
	test01();

	system("pause");
	return 0;
}