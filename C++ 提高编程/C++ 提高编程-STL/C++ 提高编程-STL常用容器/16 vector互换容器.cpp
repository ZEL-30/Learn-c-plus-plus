#include <iostream>
#include <vector>
using namespace std;


//swap(vector<T> v);      //��vec�뱾����Ԫ�ػ���

void printVector(vector<int> &v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}




//����ʹ��
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i * 10);
	}
	printVector(v1);

	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v2.push_back(i * 100);
	}
	printVector(v2);

	v1.swap(v2);
	cout << "v1 = ";
	printVector(v1);
	cout << "v2 = ";
	printVector(v2);

}


//ʵ����;
//����swap���������ڴ�ռ�
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v������Ϊ��" << v.capacity() << " ��СΪ��" << v.size() << endl;

	v.resize(3);
	cout << "v������Ϊ��" << v.capacity() << " ��СΪ��" << v.size() << endl;

	vector<int>(v).swap(v);
	cout << "v������Ϊ��" << v.capacity() << " ��СΪ��" << v.size() << endl;

}


int main()
{
	//test01();

	test02();

	system("pause");
	return 0;
}