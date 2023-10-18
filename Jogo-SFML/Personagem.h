#pragma once
#include "Entidade.h"

using namespace std;

namespace Entidades
{
	namespace Personagens
	{
		class Personagem : public Entidade
		{
		protected:
			int hitpoints;

			sf::Vector2f hitboxSize;

			sf::Vector2f velocity;
			const float velMax;

			bool alive;
		public:
			Personagem(const sf::Vector2f pos, const sf::Vector2f size, const float vMax = 4, const int hp = 1);
			~Personagem();

			void setVelocity(sf::Vector2f vel) { velocity = vel; }
			void setHP(const int hp) { hitpoints = hp; }
			void setAlive(const bool a) { alive = a; }

			const int getHP() const { return hitpoints; }
			const bool getAlive() const { return alive; }
			const sf::Vector2f getHitboxSize() const { return hitboxSize; }
			const sf::Vector2f getVelocity() const { return velocity; }
			const float getVelMax() const { return velMax; }

			virtual void move() = 0;
			virtual void refresh() = 0;

		};

	}
}


