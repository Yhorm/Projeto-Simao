#include "Personagem.h"

Entidades::Personagens::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f size, const float vMax, const int hp) :
	Entidade(pos, size),
	velocity(sf::Vector2f(vMax, 0.0f)),
	velMax(vMax),
	hitboxSize(size),
	hitpoints(hp),
	alive(true),
	inMovement(false),
	inAir(false)
{
}

Entidades::Personagens::Personagem::~Personagem()
{
}


