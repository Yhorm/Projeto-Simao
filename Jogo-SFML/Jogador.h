#pragma once


#include "Personagem.h"
//#include "Vector.h"
#include "Constants.h"


using namespace std;

namespace Gerenciadores
{
    class GerenciadorEventos;
}

namespace Entidades {
    namespace Personagens {
        class Jogador : public Personagem {
        private:
            Gerenciadores::GerenciadorEventos *EventManager;
            static unsigned int score;

            sf::Clock timer;
            float varTempo;

            bool jumped;
            bool inMovement;
            //DOUBLE JUMP P/ DEPOIS.
            bool doubleJumped;

        public:
            Jogador(sf::Vector2f pos = sf::Vector2f(0.f, 0.f), sf::Vector2f size = sf::Vector2f(0.f, 0.f),
                    const int hp = 3);

            ~Jogador();

            Jogador &operator++() {
                score += 500;
                return *this;
            }

            Jogador &operator--() {
                setHP(hitpoints - 1);
                return *this;
            }

            static const unsigned int getScore() { return score; }

            void move(const bool left);
            void stopMoving() {inMovement = false;}
            void refresh();

            void jump();

            void stopJumping() { this->jumped = false; }
            //void refresh();
        };

    }
}
