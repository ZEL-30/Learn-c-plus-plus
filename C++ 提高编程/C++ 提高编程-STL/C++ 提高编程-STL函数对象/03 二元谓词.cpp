#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//¶þÔªÎ½´Ê

class Mycompare
{
public:
	bool operator()(int num1,int num2)
	{
		if (num1 > 5)
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
		V.push_back(i*10);
	}

	sort(V.begin(), V.end());

}


int main()
{
	test01();
	system("pause");
	return 0;
}