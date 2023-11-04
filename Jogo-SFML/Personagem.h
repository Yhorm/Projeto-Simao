#pragma once
#include "Entidade.h"
#include "Constants.h"

using namespace std;

namespace Entidades
{
	namespace Personagens
	{
		class Personagem : public Entidade
		{
		protected:
			int hitpoints;

			sf::Vector2f velocity;

			bool alive;
			bool inAir;
			bool inMovement;

		public:
			Personagem(const sf::Vector2f pos, const sf::Vector2f size, const sf::Vector2f vel, const int hp = 1);
			~Personagem();


			void setHP(const int hp) { hitpoints = hp; }
			const int getHP() const { return hitpoints; }

			void setAlive(const bool a) { alive = a; }
			const bool getAlive() const { return alive; }

			void setVelocity(const sf::Vector2f vel) { velocity = vel; }
			const sf::Vector2f getVelocity() const { return velocity; }
            virtual void move() = 0;
            virtual void refresh() = 0;
		};

	}
}


