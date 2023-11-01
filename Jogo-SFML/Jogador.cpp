#include "Jogador.h"
#include "GerenciadorEventos.h"

Entidades::Personagens::Jogador::Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp) :
        EventManager(EventManager->getGerEvent()),
        Personagem(pos, size, Constants::VEL_MAX_P, hp),
        jumped(false),
        doubleJumped(false),
        inMovement(false)
        {
               setHP(hp);
               EventManager->setPlayer1(this);
        }

Entidades::Personagens::Jogador::~Jogador() {
}


void Entidades::Personagens::Jogador::move(const bool left) {
    this->inMovement = true;
    /*
    varTempo = timer.getElapsedTime().asSeconds();
    sf::Vector2f distance(0.0f, 0.0f);
    distance.x = velocity.x * varTempo;
    velocity.y *= Constants::GRAVITY * varTempo;
    distance.y = velocity.y * Constants::GRAVITY;
    */
    switch (left) {
        case (true):
            //distance.x *= -1;
            //setPosition(sf::Vector2f(getPosition().x - 1000.f, getPosition().y));
            entity.move(Vector2f(-5.f, 0));
            break;
        case (false):
           // setPosition(sf::Vector2f( getPosition().x + 1000.f, getPosition().y));
           entity.move(Vector2f(5.f, 0));
            break;
        default:
            break;
    }
}

void Entidades::Personagens::Jogador::refresh()
{
    this->draw();
}

void Entidades::Personagens::Jogador::jump() {
    entity.move(Vector2f(0,-1.f));
}


unsigned int Entidades::Personagens::Jogador::score(0);