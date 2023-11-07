#include "Jogo.h"

Jogo::Jogo() :
        pGerGraf(pGerGraf->getGerGraf()),
        EventManager(EventManager->getGerEvent())
        //vPers()
        {
    executar();
        }

Jogo::~Jogo() {
}

void Jogo::executar() {
    player1 = new Entidades::Personagens::Jogador(sf::Vector2f(640, 480), Vector2f(Constants::SIZE_PLYR_W, Constants::SIZE_PLYR_H));
    //player2 = new Entidades::Personagens::Jogador(sf::Vector2f(640, 480), Vector2f(Constants::SIZE_PLYR_W, Constants::SIZE_PLYR_H));
   // enemy = new Entidades::Personagens::Inimigo::Inimigo(sf::Vector2f(Constants::VEL_ENEMY_X, Constants::VEL_ENEMY_Y),
   //                                                      sf::Vector2f(Constants::SIZE_ENEMY_W, Constants::SIZE_ENEMY_W) ,player1);

    while (pGerGraf->getOpen()) {

        EventManager->executar();
        pGerGraf->clean();
        //enemy->move();
        player1->refreshPlr();
        pGerGraf->display();
    }
}