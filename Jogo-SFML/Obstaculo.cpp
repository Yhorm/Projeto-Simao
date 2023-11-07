//
// Created by Felipe on 05/11/2023.
//

#include "Obstaculo.h"


Obstaculo::Obstaculo(sf::Vector2f position, sf::Vector2f tam, const Identifier::ID i) :
    Entidade(position,tam, i),
    size(tam)
{
    setSize(size);
}

Obstaculo::~Obstaculo()
{
}

