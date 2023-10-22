#pragma once
#include "Personagem.h"
#include "GerenciadorEventos.h"


using namespace std;

#define VMAX 10.0F
#define GRAVITY 0.98F

namespace Entidades
{
	namespace Personagens
	{
		class Jogador : public Personagem
		{
		private:
			Gerenciadores::GerenciadorEventos* pGerEvent;
			static unsigned int score;

			sf::Clock timer;
			float varTempo;

			bool jumped; 
			//DOUBLE JUMP P/ DEPOIS.
			bool doubleJumped;

		public:
			Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp = 3);
			~Jogador();

			Jogador& operator++() { score += 500; return *this; }
			Jogador& operator--() { setHP(getHP()-1); return *this; }
			void operator+=(const int hp);

			const unsigned int getScore() const { return score; }

			void move(sf::Keyboard::Key key);
			void jump();
			void stopMoving() { this->inMovement = false; }
			void stopJumping() { this->inAir = false; }
			void refresh();
		};

	}
}
