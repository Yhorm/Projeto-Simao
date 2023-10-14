#pragma once
#include "Entidade.h"

namespace Entidades
{
	class Personagem :
		public Entidade
	{
	protected:
		int num_vidas;
	public:
		Personagem(const int nV = 5);
		~Personagem();

		virtual void executar() = 0;
		virtual void movimentar() = 0;

	};
}

