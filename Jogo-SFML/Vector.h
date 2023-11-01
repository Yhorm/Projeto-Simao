#pragma once

#include "math.h"

class Vector
{
public:
	float x;
	float y;


	Vector(const float Xx = 0, const float Yy = 0);
	~Vector();

	//Operator overload do -, +, * para operações com vetor;

	 Vector operator+(const Vector a2);

	 Vector operator-(const Vector a2);

	 const float operator*(const Vector a2);
	 //get do tamanho:
	 const float getSize() const { return sqrt((x * x) + (y * y)); }


	 //Normaliza o vetor	e retorna seu tamanho:
	 //Normalize retorna o vetor normalizado:
	 Vector Normalize(Vector v);
		



};

