#include "Person.h"

template <class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
	m_age = age;
	m_name = name;
}

template <class T1, class T2>
void Person<T1, T2>::showPerson()
{
	cout << "ÐÕÃû£º" << m_name << "ÄêÁä£º" << m_age << endl;
}

