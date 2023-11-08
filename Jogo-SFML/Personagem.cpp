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
     * calcula a velocidade final e já seta a posição.
     * */

    float deltaTime = timer.getElapsedTime().asSeconds();

    float deltaSpeed = Constants::STRT_VEL_PLYR_X * deltaTime;
    if(deltaSpeed > Constants::VEL_PLAYER_X)
        deltaSpeed = Constants::VEL_PLAYER_X;

    switch(direction)
    {
        case(left) :
            deltaSpeed*=-1;
            entity.move(sf::Vector2f(deltaSpeed ,0.0f));
            setVelFinal(sf::Vector2f(deltaSpeed + getPosition().x, getPosition().y));
            break;
        case(right) :
            entity.move(sf::Vector2f(deltaSpeed ,0.0f));
            setVelFinal(sf::Vector2f(deltaSpeed + getPosition().x,  getPosition().y));
            break;
    }
}

void Personagens::Personagem::refresh()
{

    if(inMovement)
    {
        calculateVelocity(direction);
    }

    float deltaTime = timer.getElapsedTime().asSeconds();
    //float deltaTime = 1.0f;
    float deltaSpeedY = velFinal.y + (Constants::GRAVITY*deltaTime);
    if(deltaSpeedY > Constants::VEL_PLAYER_Y)
        deltaSpeedY = Constants::VEL_PLAYER_Y;

    setVelFinal(sf::Vector2f (getPosition().x, deltaSpeedY + getPosition().y));
    setPosition(velFinal);
    entity.setPosition(getPosition());

    draw();
}

