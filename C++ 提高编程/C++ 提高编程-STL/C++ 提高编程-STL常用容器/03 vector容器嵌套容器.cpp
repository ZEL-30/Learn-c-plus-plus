#include <iostream>
#include <vector>
using namespace std;

//容器嵌套容器
void test01()
{
	//创建大容器
	vector<vector<int>> V;

	//创建小容器
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;

	//向小容器中添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i+1);
		v2.push_back(i+2);
		v3.push_back(i+3);
		v4.push_back(i+4);
	}

	//将小容器插入到大容器中
	V.push_back(v1);
	V.push_back(v2);
	V.push_back(v3);
	V.push_back(v4);

	for (vector<vector<int>>::iterator it = V.begin(); it != V.end(); it++)
	{
		//(*it) —— 容器 vector<int>
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