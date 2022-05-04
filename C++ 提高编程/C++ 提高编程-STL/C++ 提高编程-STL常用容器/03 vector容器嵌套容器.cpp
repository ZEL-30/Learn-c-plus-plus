#include <iostream>
#include <vector>
using namespace std;

//����Ƕ������
void test01()
{
	//����������
	vector<vector<int>> V;

	//����С����
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//��С��������������
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	//��С�������뵽��������
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);

	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		//(*it) ���� ���� vector<int>
		for (vector<int>::iterator jt = (*it).begin(); jt != (*it).end(); jt++)
		{
			cout << (*jt) << " " ;
		}
		cout << endl;
	}

}




int main()
{
	test01();

	system("pause");
	return 0;
}