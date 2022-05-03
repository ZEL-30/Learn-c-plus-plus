#pragma once
#include <string>
#include <iostream>
using namespace std;

//自己的通用数组类

template <class T>
class MyArray
{
public:
	MyArray(int Capacity);                      //构造函数

	MyArray(const MyArray& arr);                //拷贝构造函数

	MyArray& operator=(const MyArray& arr);     //重载赋值运算符

	int GetCapacity();                          //获取容量

	T& operator[](int x);                       //利用下标方式访问数组元素

	void Push_Back(const T &a);                 //尾插法
	 
	void Pop_Back();                            //尾删法

	int GetSize();                              //获取大小

	~MyArray();                                 //析构函数


private:
	int* pAddress;                              //数组

	int m_Capacity;                             //容量

	int m_Size;                                 //大小
};   


template <class T>
MyArray<T>::MyArray(int Capacity)
{
	m_Capacity = Capacity;
	m_Size = 0;
	pAddress = new T[Capacity];
}

template <class T>
MyArray<T>::MyArray(const MyArray &arr)
{
	m_Capacity = arr.m_Capacity;
	m_Size = arr.m_Size;

	//深拷贝
	pAddress = new T[arr.m_Capacity];

	//将arr中的数据都拷贝过来
	for (int i = 0; i < m_Size; i++)
	{
		pAddress[i] = arr.pAddress[i];
	}
}

template <class T>
MyArray<T>& MyArray<T>::operator=(const MyArray& arr)
{
	if (pAddress != NULL)
	{
		delete[] pAddress;
		pAddress = NULL;
		m_Size = 0;
		m_Capacity = 0;
	}

	m_Capacity = arr.m_Capacity;
	m_Size = arr.m_Size;

	//深拷贝
	pAddress = new T[arr.m_Capacity];

	//将arr中的数据都拷贝过来
	for (int i = 0; i < m_Size; i++)
	{
		pAddress[i] = arr.pAddress[i];
	}

	return *this;
}






template <class T>
int MyArray<T>::GetCapacity()
{
	return m_Capacity;
}
template <class T>
int MyArray<T>::GetSize()
{
	return m_Size;
}

template <class T>
void MyArray<T>::Push_Back(const T& a)
{
	if (m_Size == m_Capacity)
	{
		cout << "数组容量已满，插入失败" << endl;
		return;
	}
	else 
	{
		pAddress[m_Size] = a;
		m_Size++;
	}
}


template <class T>
void MyArray<T>::Pop_Back()
{
	if (m_Size == m_Capacity)
	{
		cout << "数组容量为零，删除失败" << endl;
		return;
	}
	else
	{
		m_Size--;
	}
}






template <class T>
T& MyArray<T>::operator[](int x)
{
	return pAddress[x];
}







template <class T>
MyArray<T>::~MyArray()
{
	if (pAddress != NULL)
	{
		delete[] pAddress;
		pAddress = NULL;
	}

}