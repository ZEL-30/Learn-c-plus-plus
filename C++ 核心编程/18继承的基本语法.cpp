#include <iostream>
using namespace std;

//�̳�ʵ��ҳ��


//����ҳ��
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "�������ġ�����������վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java��Python��C++��...(���������б�)" << endl;
	}
};


//Javaҳ��
class Java : public BasePage
{
public:
	void content()
	{
		cout << "Javaѧϰ��Ƶ" << endl;
	}
};

//Pythonҳ��
class Python : public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧϰ��Ƶ" << endl;
	}
};

//C++ҳ��
class CPP : public BasePage
{
public:
	void content()
	{
		cout << "CPPѧϰ��Ƶ" << endl;
	}
};



int main()
{
	Python python;
	python.header();
	python.footer();
	python.content();
	python.left();

	system("pause");
	return 0;
}