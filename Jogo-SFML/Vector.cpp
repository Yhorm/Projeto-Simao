#include "Vector.h"

Vector::Vector::Vector(const float Xx, const float Yy) :
	x(Xx),
	y(Yy)
{
}

Vector::Vector::~Vector()
{
	x = 0;
	y = 0;
}

Vector Vector::operator+(const Vector a2)
{
	return Vector(x + a2.x, y + a2.y);
}

Vector Vector::operator-(const Vector a2)
{
	return Vector(x - a2.x, y - a2.y);
}

const float Vector::operator*(const Vector a2)
{
	float result = 0;
	result = (a2.x * x) + (a2.y * y);

	return result;
}

Vector Vector::Normalize(Vector v)
{
	Vector result(v.x/v.getSize(), v.y/v.getSize());

	return 0.0f;
}
