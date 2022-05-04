#include <iostream>
#include <deque>
using namespace std;


//push_back(ele);                          //������β������Ԫ��ele
//push_front(ele);                         //������ͷ������Ԫ��ele
//pop_back();                              //ɾ���������һ��Ԫ��
//pop_front();                             //ɾ��������һ��һ��Ԫ��
//insert(pos, elem);                       //��posλ�ò���һ��elemԪ�صĿ��������������ݵ�λ��
//insert(pos, n, elem);                    //��posλ�ò���n��elem���ݣ��޷���ֵ
//insert(pos, beg, end);                   //��posλ�ò���[beg��end)��������ݣ��޷���ֵ
//erase(pos);                              //ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
//erase(beg, end);                         //ɾ��[beg��end)��������ݣ�������һ�����ݵ�λ��
//clear();                                 //ɾ������������Ԫ��


void printDeque(deque<int> d)
{  
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}



void test01()
{
	deque<int> d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);
	
	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//����
	printDeque(d1);

	//βɾ
	d1.pop_back();
	printDeque(d1);

	//ͷɾ
	d1.pop_front();
	printDeque(d1);


}

void test02()
{
	deque<int> d1;
	//β��
	d1.push_back(10);
	d1.push_back(20);

	//ͷ��
	d1.push_front(100);
	d1.push_front(200);

	//����
	printDeque(d1);

	//����   ��һ�������ǵ�����
	d1.insert(d1.begin(), 100);
	printDeque(d1);

	d1.insert(d1.begin(), 2, 10000);
	printDeque(d1);

	//����������в���
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	printDeque(d1);

	//ɾ��
	d1.erase(d1.begin());
	printDeque(d1);

	//���
	d1.erase(d1.begin(), d1.end());
	d1.clear();
	printDeque(d1);
}




int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}