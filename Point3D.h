#ifndef POINT3D
#define POINT3D

class Vector3D; //чтобы объ€вить дружественный ему метод

//определение класса “очка без реализации
class Point3D
{
private:
	double m_x, m_y, m_z;

public:
	// конструктор класса при создании объекта даЄт возможность задать координаты точки
	Point3D(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{} //оставл€ем реализацию конструктора здесь, так как она небольша€
	//объ€вление функции печати координат точки
	void print();
	//объ€вление метода переноса на вектор:
	void moveByVector(const Vector3D& v);
};

#endif