#include <iostream>

//1. 包含头文件
#include <fstream>
using namespace std;



int main()
{
	//2. 创建流对象
	ofstream ofs;

	//3. 打开文件
	ofs.open("写文件.txt", ios::out);

	//4. 写数据
	ofs << "张恩乐真棒！！！" << endl;

	//5. 关闭文件
	ofs.close();

	system("pause");
	return 0;
}