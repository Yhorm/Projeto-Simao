#include "Jogador.h"
#include "GerenciadorEventos.h"

Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp) :
        EventManager(EventManager->getGerEvent()),
        Personagem(pos, size, sf::Vector2f(Constants::VEL_PLAYER_X, Constants::VEL_PLAYER_Y), hp),
        jumped(false),
        doubleJumped(false),
        inMovement(false),
        direction(-1),
        timer()
        {
               setHP(hp);
               EventManager->setPlayer1(this);
               entity.setFillColor(sf::Color(255, 255, 255));
        }

Entidades::Personagens::Jogador::~Jogador()
{
}


void Entidades::Personagens::Jogador::move() {
    this->inMovement = true;
    float spd = 0.0f;
    switch(direction)
    {
        case(left) :
            spd = calculateVelocity(left);
            entity.move(spd, 0.0f);
            break;
        case(right) :
            spd = calculateVelocity(right);
            entity.move(spd, 0.0f);
            break;
    }
}

void Entidades::Personagens::Jogador::refresh()
{
    draw();
}

void Entidades::Personagens::Jogador::jump() {
    entity.move(Vector2f(0,-Constants::VEL_PLAYER_Y));
}

const float Personagens::Jogador::calculateVelocity(const short direction)
{
    float deltaTime = timer.getElapsedTime().asSeconds();
    float distance = Constants::STRT_VEL_PLYR_X * deltaTime;
    if(distance > Constants::VEL_PLAYER_X)
        distance = Constants::VEL_PLAYER_X;

    switch(direction)
    {
        case(left) :
            distance*=-1;
            return distance;
            break;
        case(right) :
            return distance;
            break;
    }
}

unsigned int Entidades::Personagens::Jogador::score(0);
unsigned int Entidades::Personagens::Jogador::death_C(0);

