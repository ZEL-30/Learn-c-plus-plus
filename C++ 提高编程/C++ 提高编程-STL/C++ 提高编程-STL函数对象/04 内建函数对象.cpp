#include <iostream>
#include <functional>
using namespace std;


//template<class T> T plus<T>             //�ӷ��º���
//template<class T> T minus<T>            //�����º���
//template<class T> T multiplies<T>       //�˷��º���
//template<class T> T divides<T>          //�����º���
//template<class T> T modulues<T>         //ȡģ�º���
//template<class T> T negate<T>           //ȡ���º���


//negate һԪ�º���   ȡ��
void test01()
{
	negate<int> N;
	cout <<N(50) << endl;
}



//plus ��Ԫ�º���   �ӷ�

void test02()
{
	plus<int> P;
	cout << P(25, 19) << endl;
}


int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}





