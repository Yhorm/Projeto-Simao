#include "Entidade.h"

Entidades::Entidade::Entidade() :
	entity(Vector2f(10.f, 10.f)),
	x(),
	y()
{
	window = NULL;
}

Entidades::Entidade::~Entidade()
{
}
