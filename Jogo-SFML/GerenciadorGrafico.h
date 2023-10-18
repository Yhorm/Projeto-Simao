#pragma once
#include <SFML/graphics.hpp>
#include <iostream>

//Feito utilizando singleton:

using namespace std;
using namespace sf;

namespace Gerenciadores
{
	class GerenciadorGrafico
	{
	private:
		RenderWindow* window;
		static GerenciadorGrafico* pGerGraf;
		GerenciadorGrafico();
	public:
		GerenciadorGrafico* getGerGraf();
		~GerenciadorGrafico();
		RenderWindow* getWindow() { return window; }
		
		void close() { window->close(); }
		void draw(RectangleShape entity) { window->draw(entity); };
		void display() { window->display(); };
		void clean() { window->clear(); }

	};


}
using namespace Gerenciadores;
