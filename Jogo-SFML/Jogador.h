#pragma once
#include "Personagem.h"

namespace Entidades
{
	class Jogador : public Personagem
	{
	protected:
		/*
			inJump e inAir s�o vari�veis para checar se o jogador est� no ar 
			ou pulando, ser�o usadas em outro momento ou deletadas se necess�rio.
		*/
		bool inJump;
		bool inAir;
		static int pontuacao;

	public:
		Jogador();
		~Jogador();
		void executar();

		//fun��es de movimento.
		void movimentar();
		void pular();


		//overload de operators para  diminuir e aumentar as vidas.
		Jogador& operator++(); 
		Jogador& operator--();

		//Operator += utilizado para adicionar a pontua��o.
		Jogador& operator+=(const int pts);

	};
}

