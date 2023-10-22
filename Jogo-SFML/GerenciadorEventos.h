#pragma once
#include <iostream>
#include "GerenciadorGrafico.h"
#include "Jogador.h"


using namespace std;

namespace Gerenciadores
{
	class GerenciadorEventos
	{
	private:
		//Ponteiros para os jogadores:
		Entidades::Personagens::Jogador* pPlayer1;
		Entidades::Personagens::Jogador* pPlayer2;

		//Gerenciador gr�fico:
		GerenciadorGrafico* pGerGraf;

		//Window:
		RenderWindow* pWindow;


		//singleton
		static GerenciadorEventos* pGerEvent;
		GerenciadorEventos();
	public:
		static GerenciadorEventos* getGerEvent();
		~GerenciadorEventos();

		void setPlayer1(Entidades::Personagens::Jogador* pP) { pPlayer1 = pP; }
		void setPlayer2(Entidades::Personagens::Jogador* pP) { pPlayer2 = pP; }

		//Checa evento e age de acordo:
		// Se � uma tecla de movimento: chama a fun��o movimentar do jogador;
		//Esc -> fecha a janela obs: depois mudar p/ op��o de um menu.

		void checaTeclaApertada(sf::Keyboard::Key key);
		void checaTeclaSolta(sf::Keyboard::Key key);

		void close() { pGerGraf->close(); }
		void executar();

	};
}
using namespace Gerenciadores;

