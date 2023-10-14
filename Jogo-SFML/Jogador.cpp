#include "Jogador.h"

Entidades::Jogador::Jogador() :
    Personagem(),
    inJump(false),
    inAir(false)
{
}

Entidades::Jogador::~Jogador()
{
}

void Entidades::Jogador::executar()
{
}

void Entidades::Jogador::movimentar()
{ 
    //Função de mover simples.
    if (Keyboard::isKeyPressed(Keyboard::A))
    {
        entity.move(Vector2f(-0.05f, 0.f));
    }   
    
    if (Keyboard::isKeyPressed(Keyboard::D))
    {
        entity.move(Vector2f(0.05f, 0.f));
    }
}

void Entidades::Jogador::pular()
{
    //Função de teste, sera refinada mais a frente caso tenhamos tempo
    if (Keyboard::isKeyPressed(Keyboard::Space))
    {
        entity.move(Vector2f(0, 0.1f));
    }
}

//OVERLOADS DE OPERADORES:
/*
    ++: AUMENTA VIDAS.
        (LIMITE DE 5)
    
    --: DECREMENTA VIDAS.
        (NÃO PODENDO IR ABAIXO DE 0)
    
    +=: ADICIONA NO SCORE.
        (NÃO PODENDO PASSAR DE 999999(NUMERO SIMBOLICO.))
*/

Jogador& Entidades::Jogador::operator++()
{
    num_vidas++;
    if (num_vidas > 5)
    {
        num_vidas = 5;
        pontuacao += 500;
    }
    return *this;
}

Jogador& Entidades::Jogador::operator--()
{
    num_vidas--;
    if (num_vidas < 0)
        num_vidas = 0;

    return *this;
}


Jogador& Entidades::Jogador::operator+=(const int pts)
{
    pontuacao += pts;
    if (999999 < pontuacao)
        pontuacao = 999999;
    return *this;
}

int Jogador::pontuacao(0);
