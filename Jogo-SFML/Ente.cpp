#include "Ente.h"

Ente::Ente() :
	id(cur_id++),
	pGerGraf(pGerGraf->getGerGraf())
{
}

Ente::~Ente()
{
}

int Ente::cur_id(0);
