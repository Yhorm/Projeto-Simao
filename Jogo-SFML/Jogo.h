#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Jogador.h"

using namespace std;
using namespace sf;
using namespace Entidades;

class Jogo
{
private:
	RenderWindow window;
	Jogador player1;

public:
	Jogo();

	~Jogo()
	{
	}

	void executar();

};

