#include "Cola.h"

Cola::Cola(): _primer(nullptr), _ultimo(nullptr)
{

}

void Cola::Agregar(Elemento* elemento)
{
    if(_primer == nullptr) //La lista esta vacía
    {
        _primer = elemento;
        _ultimo = elemento;
    }
    else //la lista NO está vacía
    {
        _ultimo->SetSiguiente(elemento);
        _ultimo = elemento;
    }
}

Elemento* Cola::Extraer()
{
    if(_primer == nullptr) //la lista está vacía
    {
        return nullptr;
    }
    Elemento* primer = _primer;
    _primer = _primer->GetSiguiente();
    return primer;
}
