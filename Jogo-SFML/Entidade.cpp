#include "Entidade.h"

Entidades::Entidade::Entidade(Vector2f pos, Vector2f size, const Identifier::ID i) :
	entity(RectangleShape(size)),
    alive(true),
    ID(i),
    curPos(pos),
    sizeEntity(size)
{

}

Entidades::Entidade::~Entidade()
{
}
