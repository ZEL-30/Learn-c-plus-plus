#include <iostream>
#include <string>
//1. 包含头文件
#include <fstream>
using namespace std;

void test01()
{
	//2. 创建流对象
	ifstream ifs;

	//3. 打开文件
	ifs.open("写文件.txt", ios::in);

	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4. 读数据

	//第一种
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf,sizeof(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}

	//第四种 (不推荐)
	//char c;
	//while ((c = ifs.get()) != EOF) //EOF end of file
	//{
	//	cout << c;
	//}




	//5. 关闭文件
	ifs.close();
}

int main()
{  
	test01();

	system("pause");
	return 0;
}