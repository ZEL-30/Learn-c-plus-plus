//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
////一元谓词
//
//class Mycompare
//{
//public:
//	bool operator()(int num)
//	{
//		if (num > 5)
//		{
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//};
//
//
//
//
//void test01()
//{
//	vector<int> V;
//	for (int i = 0; i < 10; i++)
//	{
//		V.push_back(i);
//	}
//
//	//查找容器中有没有大于5的数字
//	vector<int>::iterator it = find_if(V.begin(), V.end(), Mycompare());   //Mycompare()匿名函数对象
//	if (it != V.end())
//	{
//		cout << "找到了" << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}