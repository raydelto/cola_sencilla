#pragma once
#include <string>

class Elemento
{
    public:
        Elemento(std::string nombre);
        Elemento* GetSiguiente() { return _siguiente; }
        void SetSiguiente(Elemento* siguiente) { _siguiente = siguiente; }
        std::string GetNombre() { return _nombre; }
        void SetNombre(std::string nombre) { _nombre = nombre; }

    private:
        std::string _nombre;
        Elemento* _siguiente;
};
