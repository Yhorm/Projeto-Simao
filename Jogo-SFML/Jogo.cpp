#include "Jogo.h"

Jogo::Jogo() :
    window(VideoMode(640, 480), "jogasso")
{
    player1.setWindow(&window);
    executar();
}



void Jogo::executar()
{

    while (window.isOpen())
    {

        sf::Event event;

        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();

        }

        player1.movimentar();

        window.clear();

        player1.draw();
        
        window.display();

    }
}