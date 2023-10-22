#include "Jogador.h"



Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp) :
	Personagem(pos, size, VMAX, hp),
	jumped(false),
	doubleJumped(false)
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

void Entidades::Personagens::Jogador::move(sf::Keyboard::Key key)
{
	this->inMovement = true;
	varTempo = timer.getElapsedTime().asSeconds();
	sf::Vector2f distance(0.0f, 0.0f);
	distance.x = velocity.x * varTempo;
	velocity.y *= GRAVITY * varTempo;
	distance.y = velocity.y * GRAVITY;
	
	switch (key)
	{
	case (sf::Keyboard::A):
		distance.x *= -1;
		setPosition(sf::Vector2f(distance.x, distance.y));
		break;
	case (sf::Keyboard::D):
		setPosition(sf::Vector2f(distance.x, distance.y));
		break;
	}
}

void Entidades::Personagens::Jogador::jump()
{
	this->inAir = true;

}


void Entidades::Personagens::Jogador::refresh()
{

}

unsigned int Entidades::Personagens::Jogador::score(0);