#include "Jogo.h"

Jogo::Jogo() :
        player1(sf::Vector2f(125.0f, 125.0f), Vector2f(5.f, 5.f)),
        pGerGraf(pGerGraf->getGerGraf()),
        EventManager(EventManager->getGerEvent()){
    executar();
}

Jogo::~Jogo() {
}

void Jogo::executar() {
    while (pGerGraf->getOpen()) {

        EventManager->executar();
        pGerGraf->clean();

        player1.draw();

        pGerGraf->display();
    }
}