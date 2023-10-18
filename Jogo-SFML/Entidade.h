#pragma once
#include <iostream>
#include "Ente.h"

using namespace std;

namespace Entidades
{
	class Entidade : public Ente
	{
	protected:
		RectangleShape entity;
		Vector2f position;
		Vector2f entSize;

	public:
		Entidade(Vector2f pos, Vector2f size);
		~Entidade();

		void setPosition(Vector2f pos) { position = pos; }
		void setSize(Vector2f size) { entSize = size; }

		const Vector2f getPosition() const { return position; }
		const Vector2f getEntSize() const { return entSize; }

		void draw() { pGerGraf->draw(entity); }
		virtual void refresh() = 0;
	};
}
using namespace Entidades;