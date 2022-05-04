#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//һԪν��

class Mycompare
{
public:
	bool operator()(int num)
	{
		if (num > 5)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};




void test01()
{
	vector<int> V;
	for (int i = 0; i < 10; i++)
	{
		V.push_back(i);
	}

	//������������û�д���5������
	vector<int>::iterator it = find_if(V.begin(), V.end(), Mycompare());   //Mycompare()������������
	if (it != V.end())
	{
		cout << "�ҵ���" << endl;
	}
}


int main()
{
	test01();
	system("pause");
	return 0;
}