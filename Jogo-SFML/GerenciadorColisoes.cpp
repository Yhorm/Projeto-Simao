//
// Created by Felipe on 04/11/2023.
//

#include "GerenciadorColisoes.h"

GerenciadorColisoes::GerenciadorColisoes(Listas::listEntidade *listaPersonagens, Listas::listEntidade *listaObstac) :
    listPers(listaPersonagens),
    listObstaculo(listaObstac)
{
}

GerenciadorColisoes::~GerenciadorColisoes()
{
    if(listObstaculo)
        delete listObstaculo;
    if (listPers)
        delete listPers;
}

const sf::Vector2f GerenciadorColisoes::calcColission(Entidades::Entidade *char1, Entidades::Entidade *char2)
{
   sf::Vector2f position1 = char1->getPosition();
   sf::Vector2f position2 = char2->getPosition();

   sf::Vector2f size1 = char1->getEntSize();
   sf::Vector2f size2 = char2->getEntSize();

   sf::Vector2f distanceCenter(
           fabs(((position1.x + size1.x/2.0f) - (position2.x + size2.x/2.0f))),
           fabs(((position1.y + size1.y/2.0f) - (position2.y + size2.y/2.0f)))
           );
    sf::Vector2f somaDasMetades((size1.x/2.0f) + (size2.x/2.0f), (size1.y/2.0f) + (size2.y/2.0f));
    return sf::Vector2f((distanceCenter.x - somaDasMetades.x), (distanceCenter.y - somaDasMetades.y));
}

void GerenciadorColisoes::execute()
{
    Listas::List<Entidades::Entidade>::Iterator<Entidades::Entidade> auxPers = listPers->getPrim();
    Listas::List<Entidades::Entidade>::Iterator<Entidades::Entidade> auxObjs = listObstaculo->getPrim();

    Entidades::Entidade* pers1 = (*auxPers);
    auxPers++;
    Entidades::Entidade* pers2 = (*auxPers);

    Entidades::Entidade* obstac1 = (*auxObjs);

    while(pers1 != nullptr)
    {
        while(pers2 != NULL)
        {
            sf::Vector2f distance = calcColission(pers1, pers2);
            if(distance.x < 0.0f && distance.y < 0.0f)
                pers1->colision(pers2);
            auxPers++;
            pers2 = (*auxPers);
        }
        auxPers = listPers->getPrim();
        auxPers++;
    }


    while(obstac1 != NULL)
    {
        sf::Vector2f distance = calcColission(pers1, obstac1);
        if(distance.x < 0.0f && distance.y < 0.0f)
            obstac1->colision(pers1);
        obstac1 = (*auxPers);
    }


}
