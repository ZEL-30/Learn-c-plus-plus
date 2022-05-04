#include <iostream>
using namespace std;

class person
{
public:

	void sksd()
	{
		cout << "this is a apple" << endl;
	}



	void showage()
	{
		if (this == null)
		{
			return;
		}
		cout << "ÄêÁäÎª£º" << m_age << endl;
	}

	int m_age;
};



void test01()
{
	person* p = null;
	//p->sksd();
	p->showage();

}





int main()
{
	test01();

	system("pause");
	return 0;
}