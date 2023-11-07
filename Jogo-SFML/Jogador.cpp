#include "Jogador.h"
#include "GerenciadorEventos.h"

Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp) :
        EventManager(EventManager->getGerEvent()),
        Personagem(pos, size, sf::Vector2f(Constants::VEL_PLAYER_X, Constants::VEL_PLAYER_Y), hp),
        doubleJumped(false),
        direction(-1)
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
}

void Entidades::Personagens::Jogador::jump() {
    if(!inAir || (!doubleJumped && inAir))
    {
        inAir = true;
        float velMax = -sqrt(2.0f * Constants::GRAVITY * Constants::JMP_HEIGHT);
        setVelFinal(sf::Vector2f(getvelFinal().x,velMax));
    }
}



unsigned int Entidades::Personagens::Jogador::score(0);
unsigned int Entidades::Personagens::Jogador::death_C(0);

void Personagens::Jogador::colision(Entidades::Entidade *entity, sf::Vector2f distance)
{
    Identifier::ID id = entity->getId();
    switch(id)
    {
        case(Identifier::ID::enemy) :
        {
            break;
        }
        case(Identifier::ID::platform) :
        {
            break;
        }
    }
}

