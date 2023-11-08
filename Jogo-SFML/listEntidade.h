//
// Created by Felipe on 04/11/2023.
//

#pragma once
#include "list.h"
#include "Entidade.h"

namespace Listas
{
    class listEntidade
    {
    private:
        List<Entidades::Entidade> EntityObjList;
    public:
        listEntidade();
        ~listEntidade();

        //Adicionar na lista:
        void addEntity(Entidades::Entidade* pEntity) {EntityObjList.push(pEntity);}

        //retorna seu tamanho
        const int getSize() const {return EntityObjList.getTamanho();};

        //num de entidades mortas
        const unsigned int getNumKilled();

        //executar chama o draw de cada entidade, o que faz com que todos se movam e se desenhem.

        void execute();
        Listas::List<Entidades::Entidade>::Iterator <Entidades::Entidade> getPrim() { return EntityObjList.getPrim(); }
    };
}

using namespace Listas;

