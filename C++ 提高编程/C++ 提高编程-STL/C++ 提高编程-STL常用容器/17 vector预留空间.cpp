#include <iostream>
#include <vector>
using namespace std;

//reseve(int len);    //����Ԥ��len��Ԫ�س��ȣ�Ԥ��λ�ò���ʼ����Ԫ�ز��ɷ���

void test01()
{
	vector<vector<int>> V;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	v1.push_back(10);
	v2.push_back(20);
	v3.push_back(30);
	v4.push_back(40);
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);

	int num = 2;
	vector<vector<int>>::iterator it = V.begin()+num;
	for (vector<int>::iterator its = it->begin(); its != it->end(); its++)
	{
		cout << *its << endl;
	}

}

int main()
{
	test01();

	system("pause");
	return 0;
}