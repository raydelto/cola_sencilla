#pragma once
#include "Elemento.h"
class Cola
{
    public:
        Cola();
        void SetPrimer(Elemento* primer) { _primer = primer; }
        Elemento* GetPrimer() { return _primer; }
        void SetUltimo(Elemento* ultimo) { _ultimo = ultimo; }
        Elemento* GetUltimo() { return _ultimo; }
        void Agregar(Elemento* elemento);
        Elemento* Extraer();

    private:
        Elemento* _primer;
        Elemento* _ultimo;

};
