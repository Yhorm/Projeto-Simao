#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Jogador.h"
#include "GerenciadorGrafico.h"


using namespace std;
using namespace sf;

class Jogo
{
private:
	Entidades::Personagens::Jogador player1;
	Gerenciadores::GerenciadorGrafico* pGerGraf;

public:
	Jogo();

	~Jogo()
	{
	}

	void executar();

};

