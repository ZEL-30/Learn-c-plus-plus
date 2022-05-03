#pragma once
#include <iostream>
#include <string>
using namespace std;

//�ҵ�����ģ����
template <class T>
class Array
{
	friend ostream& operator<<(ostream& cout, Array& arr);

public:

	Array(int Capacity)                       //�вι��캯��
	{
		//cout << "�вι��캯��" << endl;
		m_Capacity = Capacity;
		m_Size = 0;
		ArrayPtr = new T[Capacity];
	}

	Array(const Array& arr)                   //�������캯��
	{
		//cout << "���칹�캯��" << endl;
		m_Capacity = arr.m_Capacity;
		m_Size = arr.m_Size;

		//���
		ArrayPtr = new T[arr.m_Capacity];
		for (int i = 0; i < m_Size; i++)
		{
			ArrayPtr[i] = arr.ArrayPtr[i];
		}
	}

	T& operator[](int Index)                 //�����±귽ʽ��������Ԫ��
	{
		return ArrayPtr[Index];
	}

	Array& operator=(const Array &arr)       //���ظ�ֵ�����
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
	 
	void push_back(int a)                     //β�巨
	{
		if (m_Size == m_Capacity)
		{
			cout << "����ʧ�ܣ��������㣡" << endl;
			return;
		}
		ArrayPtr[m_Size] = a;
		m_Size++;
	}

	void pop_back()                          //βɾ��
	{
		if (m_Size == 0)
		{
			cout << "ɾ��ʧ�ܣ������ݣ�";
			return;
		}

		m_Size--;
	}

	


	~Array()
	{
		//cout << "��������" << endl;
		delete[] ArrayPtr;
		ArrayPtr = NULL;
		m_Capacity = 0;
		m_Size = 0;
	}



private:
	int m_Capacity;                //����
	int m_Size;                    //��С
	T* ArrayPtr;                   //����
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