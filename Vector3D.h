#ifndef VECTOR3D
#define VECTOR3D

#include "Point3D.h" //чтобы объ€вить метод оттуда как дружественный

//определение класса ¬ектор без реализации
class Vector3D
{
private:
	double m_x, m_y, m_z;

public:
	// конструктор класса при создании объекта даЄт возможность задать координаты вектора
	Vector3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z) //вот собственно инициализаци€
	{} //оставл€ем реализацию конструктора здесь, так как она небольша€
	
	//объ€вл€ем функцию печати координат вектора
	void print();
	//объ€вл€ем дружественный метод из класса “очка:
	friend void Point3D::moveByVector(const Vector3D& v);
};

#endif