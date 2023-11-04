#include "Personagem.h"

Entidades::Personagens::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f size, const sf::Vector2f vel, const int hp) :
	Entidade(pos, size),
	velocity(vel),
	hitpoints(hp),
	alive(true),
	inMovement(false),
	inAir(false)
{
}

Entidades::Personagens::Personagem::~Personagem()
{
}


