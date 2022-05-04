#include "swap.h"

//交换两个数字
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
