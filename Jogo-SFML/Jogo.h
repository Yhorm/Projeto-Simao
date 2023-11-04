#pragma once

#include <iostream>
#include <SFML/graphics.hpp>

#include "GerenciadorEventos.h"
#include "GerenciadorGrafico.h"
#include "Inimigo.h"
#include <vector>


using namespace std;
using namespace sf;

class Jogo {
private:
    Entidades::Personagens::Jogador* player1;
    Entidades::Personagens::Jogador* player2;
    Entidades::Personagens::Inimigo::Inimigo* enemy;

    vector<Entidades::Personagens::Personagem*> vPers;

    Gerenciadores::GerenciadorGrafico *pGerGraf;
    Gerenciadores::GerenciadorEventos *EventManager;
public:
    Jogo();

    ~Jogo();

    void executar();

};

