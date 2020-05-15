#include <iostream>

//реализация методов класса Вектор
#include "Vector3D.h"

//функция печати координат вектора
void Vector3D::print()
{
	std::cout << "Vector(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}