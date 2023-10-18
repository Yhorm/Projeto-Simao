#pragma once
#include "Personagem.h"
using namespace std;

namespace Entidades
{
	namespace Personagens
	{
		class Jogador : public Personagem
		{
		private:
			bool inAir;
			bool inMovement;
			
			sf::Vector2f curVel;

			static unsigned int score;

		public:
			Jogador(const sf::Vector2f pos, const sf::Vector2f size, const int hp = 3);
			~Jogador();

			void setCurVel(const sf::Vector2f v) { curVel = v; }


			Jogador& operator++() { score += 500; return *this; }
			Jogador& operator--() { setHP(getHP()-1); return *this; }
			void operator+=(const int hp);

			const unsigned int getScore() const { return score; }
			const sf::Vector2f getCurVel() const { return curVel; }


			void move();
			void refresh();
		};

	}
}
