#include "Personagem.h"

Entidades::Personagens::Personagem::Personagem(const sf::Vector2f pos, const sf::Vector2f size, const sf::Vector2f vel, const int hp, const Identifier::ID i) :
	Entidade(pos, size, i),
	velFinal(vel),
	hitpoints(hp),
	inMovement(false),
	inAir(false),
    timer(),
    direction(-1)
{
}

Entidades::Personagens::Personagem::~Personagem()
{
}


void Personagens::Personagem::calculateVelocity(const short direction)
{
    /*
     * calcula a velocidade final, aplica a gravidade e já seta a posição.
     * */
    float deltaTime = timer.getElapsedTime().asSeconds();
    float distance = Constants::STRT_VEL_PLYR_X * deltaTime;
    if(distance > Constants::VEL_PLAYER_X)
        distance = Constants::VEL_PLAYER_X;

    float distanceY = velFinal.y + (Constants::GRAVITY*deltaTime);
    if(distanceY > Constants::VEL_PLAYER_Y)
        distanceY = Constants::VEL_PLAYER_Y;

    switch(direction)
    {
        case(left) :
            distance*=-1;
            setVelFinal(sf::Vector2f(distance + getPosition().x, distanceY + getPosition().y));
            break;
        case(right) :
            setVelFinal(sf::Vector2f(distance + getPosition().x, distanceY + getPosition().y));
            break;
    }
}

void Personagens::Personagem::refresh()
{
    if(inMovement)
    {
        calculateVelocity(direction);
        setPosition(velFinal);
    }

    Entidade::draw();
}

