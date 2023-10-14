#pragma once
#include "Personagem.h"

namespace Entidades
{
	class Jogador : public Personagem
	{
	protected:
		/*
			inJump e inAir são variáveis para checar se o jogador está no ar 
			ou pulando, serão usadas em outro momento ou deletadas se necessário.
		*/
		bool inJump;
		bool inAir;
		static int pontuacao;

	public:
		Jogador();
		~Jogador();
		void executar();

		//funções de movimento.
		void movimentar();
		void pular();


		//overload de operators para  diminuir e aumentar as vidas.
		Jogador& operator++(); 
		Jogador& operator--();

		//Operator += utilizado para adicionar a pontuação.
		Jogador& operator+=(const int pts);

	};
}

