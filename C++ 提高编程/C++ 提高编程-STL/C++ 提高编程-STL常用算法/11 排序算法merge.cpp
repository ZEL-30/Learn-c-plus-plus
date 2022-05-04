#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
////beg1 ����1��ʼ������
////end1 ����1����������
////beg2 ����2��ʼ������
////end2 ����2����������
////dest Ŀ��������ʼ������


void print(int val)
{
	cout << val << " ";
}








void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+1);
	}

	vector<int> vtarget;
	vtarget.resize(v1.size()+v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), vtarget.end(), print);
	cout << endl;

}








int main()
{
	test01();
	system("pause");
	return 0;
}