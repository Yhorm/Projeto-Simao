#include "Personagem.h"

Entidades::Personagens::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f size, const float vMax, const int hp) :
	Entidade(pos, size),
	velMax(vMax),
	hitboxSize(size),
	hitpoints(hp),
	alive(true)
{
}

Entidades::Personagens::Personagem::~Personagem()
{
}


