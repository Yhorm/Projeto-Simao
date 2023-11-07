#include "Entidade.h"

Entidades::Entidade::Entidade(Vector2f pos, Vector2f size, const Identifier::ID i) :
	entity(RectangleShape(size)),
    alive(true),
    ID(i)
{
	entity.setPosition(pos);
    entity.setSize(size);
}

Entidades::Entidade::~Entidade()
{
}
