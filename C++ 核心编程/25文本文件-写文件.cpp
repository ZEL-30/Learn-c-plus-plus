#include <iostream>

//1. ����ͷ�ļ�
#include <fstream>
using namespace std;



int main()
{
	//2. ����������
	ofstream ofs;

	//3. ���ļ�
	ofs.open("д�ļ�.txt", ios::out);

	//4. д����
	ofs << "�Ŷ������������" << endl;

	//5. �ر��ļ�
	ofs.close();

	system("pause");
	return 0;
}