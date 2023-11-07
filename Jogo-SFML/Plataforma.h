//
// Created by Felipe on 07/11/2023.
//

#pragma once
#include "Obstaculo.h"
#include "Jogador.h"


namespace Entidades
{
    namespace Obstaculos
    {
        class Plataforma : public Obstaculo
        {
        private:
            sf::Vector2f position;
            sf::Vector2f size;
        };
    }


} // Entidades
