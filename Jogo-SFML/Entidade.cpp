#include "Entidade.h"

Entidades::Entidade::Entidade(Vector2f pos, Vector2f size) :
	entity(RectangleShape(size)), position(pos), entSize(size)
{
	entity.setPosition(pos);
}

Entidades::Entidade::~Entidade()
{
}
