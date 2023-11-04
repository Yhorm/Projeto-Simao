#pragma once
#include <iostream>
#include "Ente.h"

using namespace std;

namespace Entidades
{
	class Entidade : public Ente
	{
	protected:
		sf::RectangleShape entity;

	public:
		Entidade(Vector2f pos, Vector2f size);
		~Entidade();

		void setPosition(Vector2f pos) { entity.setPosition(pos); }
		void setSize(Vector2f size) { entity.setSize(size); }

		const Vector2f getPosition() const { return entity.getPosition(); }
		const Vector2f getEntSize() const { return entity.getSize(); }

		void draw() { pGerGraf->draw(entity); }
		virtual void refresh() = 0;
	};
}
using namespace Entidades;