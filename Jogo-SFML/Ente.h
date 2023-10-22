#pragma once

#include <SFML/graphics.hpp>
#include <iostream>
#include "GerenciadorGrafico.h"
#include "GerenciadorEventos.h"

using namespace std;
using namespace sf;



class Ente
{
protected:
	Gerenciadores::GerenciadorGrafico* pGerGraf;
	int id;
	static int cur_id;

public:
	Ente();
	~Ente();

	virtual void draw() = 0;
	virtual void refresh() = 0;
};

