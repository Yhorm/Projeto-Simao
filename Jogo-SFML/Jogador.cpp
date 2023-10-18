#include "Jogador.h"



Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp) :
	Personagem(pos, size),
	inAir(false),
	inMovement(false),
	curVel(0, 0)
{
	setHP(hp);
}

Entidades::Personagens::Jogador::~Jogador()
{
}



void Entidades::Personagens::Jogador::operator+=(const int hp)
{
	setHP(hp);
}

void Entidades::Personagens::Jogador::move()
{
	
}

void Entidades::Personagens::Jogador::refresh()
{
}

unsigned int Entidades::Personagens::Jogador::score(0);