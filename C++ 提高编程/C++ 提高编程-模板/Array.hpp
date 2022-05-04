#pragma once
#include <iostream>
#include <string>
using namespace std;

//我的数组模型类
template <class T>
class Array
{
	friend ostream& operator<<(ostream& cout, Array& arr);

public:

	Array(int Capacity)                       //有参构造函数
	{
		//cout << "有参构造函数" << endl;
		m_Capacity = Capacity;
		m_Size = 0;
		ArrayPtr = new T[Capacity];
	}

	Array(const Array& arr)                   //拷贝构造函数
	{
		//cout << "构造构造函数" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;

		//深拷贝
		ArrayPtr = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			ArrayPtr[i] = arr.ArrayPtr[i];
		}
	}

	T& operator[](int Index)                 //利用下标方式访问数组元素
	{
		return ArrayPtr[Index];
	}

	Array& operator=(const Array &arr)       //重载赋值运算符
	{
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;
		ArrayPtr = new T[arr.m_Capacity];
		for (int i = 0;i<m_Size;i++)
		{
			ArrayPtr[i] = arr.ArrayPtr[i];
		}
		return *this;
	}
	 
	void push_back(int a)                     //尾插法
	{
		if (m_Size == m_Capacity)
		{
			cout << "插入失败，容量不足！" << endl;
			return;
		}
		ArrayPtr[m_Size] = a;
		m_Size++;
	}

	void pop_back()                          //尾删法
	{
		if (m_Size == 0)
		{
			cout << "删除失败，无数据！";
			return;
		}

		m_Size--;
	}

	


	~Array()
	{
		//cout << "析构函数" << endl;
		delete[] ArrayPtr;
		ArrayPtr = NULL;
		m_Capacity = 0;
		m_Size = 0;
	}



private:
	int m_Capacity;                //容量
	int m_Size;                    //大小
	T* ArrayPtr;                   //数组
};



ostream& operator<<(ostream& cout, Array<int>& arr)
{
	for (int i = 0; i < arr.m_Size; i++)
	{
		cout << arr.ArrayPtr[i] << " ";
	}
	cout << endl;

	return cout;
}