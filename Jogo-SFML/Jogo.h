#pragma once

#include <iostream>
#include <SFML/graphics.hpp>

#include "GerenciadorEventos.h"
#include "GerenciadorGrafico.h"


using namespace std;
using namespace sf;

class Jogo {
private:
    Entidades::Personagens::Jogador player1;
    //Entidades::Personagens::Jogador player2;
    Gerenciadores::GerenciadorGrafico *pGerGraf;
    Gerenciadores::GerenciadorEventos *EventManager;
public:
    Jogo();

    ~Jogo();

    void executar();

};

