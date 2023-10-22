#include "Jogo.h"

Jogo::Jogo() :
    player1(sf::Vector2f(0.0f, 0.0f), Vector2f(5.f, 5.f)),
    pGerGraf(pGerGraf->getGerGraf())
{
    executar();
}



void Jogo::executar()
{
    while (pGerGraf->getClosed())
    {

        sf::Event event;

        while (pGerGraf->getWindow()->pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                pGerGraf->close();

        }

        pGerGraf->clean();

        player1.draw();
        
        pGerGraf->display();

    }
}