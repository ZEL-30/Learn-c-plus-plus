#pragma once
#include <string>
#include <iostream>
using namespace std;

//�Լ���ͨ��������

template <class T>
class MyArray
{
public:
	MyArray(int Capacity);                      //���캯��

	MyArray(const MyArray& arr);                //�������캯��

	MyArray& operator=(const MyArray& arr);     //���ظ�ֵ�����

	int GetCapacity();                          //��ȡ����

	T& operator[](int x);                       //�����±귽ʽ��������Ԫ��

	void Push_Back(const T &a);                 //β�巨
	 
	void Pop_Back();                            //βɾ��

	int GetSize();                              //��ȡ��С

	~MyArray();                                 //��������


private:
	int* pAddress;                              //����

	int m_Capacity;                             //����

	int m_Size;                                 //��С
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

	//���
	pAddress = new T[arr.m_Capacity];

	//��arr�е����ݶ���������
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

	//���
	pAddress = new T[arr.m_Capacity];

	//��arr�е����ݶ���������
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
		cout << "������������������ʧ��" << endl;
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
		cout << "��������Ϊ�㣬ɾ��ʧ��" << endl;
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