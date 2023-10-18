#include "GerenciadorGrafico.h"


Gerenciadores::GerenciadorGrafico::GerenciadorGrafico() :
    window(new RenderWindow(VideoMode(1280.f, 720.f), "Jogasso"))
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



