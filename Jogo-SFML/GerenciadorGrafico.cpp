#include "GerenciadorGrafico.h"

GerenciadorGrafico* Gerenciadores::GerenciadorGrafico::pGerGraf(nullptr);

Gerenciadores::GerenciadorGrafico::GerenciadorGrafico() :
    window(new RenderWindow(VideoMode(1280, 720), "Jogasso"))
{
    if (window == nullptr)
    {
        cerr << "ERRO AO INICIALIZAR A JANELA." << endl;
        exit(1);
    }
}

 Gerenciadores::GerenciadorGrafico::~GerenciadorGrafico()
 {
     if (window != nullptr)
     {
         delete(window);
         window = nullptr;
     }
 }
 GerenciadorGrafico* Gerenciadores::GerenciadorGrafico::getGerGraf()
{
     if (pGerGraf == nullptr)
         pGerGraf = new GerenciadorGrafico;
     return pGerGraf;
}



