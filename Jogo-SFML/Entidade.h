#pragma once
#include <iostream>
#include "Ente.h"

using namespace std;
using namespace sf;

namespace Entidades
{
	class Entidade : public Ente
	{
	protected:
		RectangleShape entity;
		RenderWindow *window;
		int x;
		int y;

	public:
		Entidade();
		~Entidade();

		void setWindow(RenderWindow* pWindow = NULL) { this->window = pWindow; }
		void draw() { window->draw(entity); }
	};
}
using namespace Entidades;