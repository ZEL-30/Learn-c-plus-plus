#include "circle.h"
#include "point.h"


//‘≤¿‡

void Circle::SetCenter(int x, int y)
{
	m_Center.SetX(x);
	m_Center.SetY(y);
}

int Circle::GetCenterX()
{
	return m_Center.GetX();
}

int Circle::GetCenterY()
{
	return m_Center.GetY();
}
void Circle::SetR(int R)
{
	m_R = R;
}
int Circle::GetR()
{
	return m_R;
}

