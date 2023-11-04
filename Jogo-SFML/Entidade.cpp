#include "Entidade.h"

Entidades::Entidade::Entidade(Vector2f pos, Vector2f size) :
	entity(RectangleShape(size))
{
	entity.setPosition(pos);
    entity.setSize(size);
}

Entidades::Entidade::~Entidade()
{
}
