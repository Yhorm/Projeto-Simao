//
// Created by Felipe on 05/11/2023.
//

#pragma once
#include "Jogador.h"
#include "Constants.h"

namespace Entidades
{
    namespace Obstaculos
    {
        class Obstaculo : public Entidades::Entidade
        {
        protected:
            sf::Vector2f size;
            sf::Vector2f position;
        public:
            Obstaculo(sf::Vector2f position,
                      sf::Vector2f tam = sf::Vector2f(Constants::SIZE_PLTFORM_W, Constants::SIZE_PLTFORM_H),
                      const Identifier::ID i = Identifier::ID::platform);
            ~Obstaculo();

            virtual void colision(Entidades::Entidade* entity,
                                  sf::Vector2f distance) = 0;
            virtual void refresh() = 0;

            virtual void colisionObstaclePlayer(sf::Vector2f distance,
                                                Entidades::Personagens::Jogador* pPlyr) = 0;
        };
    }
}

using namespace Obstaculos;

