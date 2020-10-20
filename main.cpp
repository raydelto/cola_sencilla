#include "Cola.h"
#include <iostream>

int main()
{
    Cola* cola = new Cola();
    Elemento* elemento1 = new Elemento("Uno");
    Elemento* elemento2 = new Elemento("Dos");
    Elemento* elemento3 = new Elemento("Tres");
    Elemento* elemento4 = new Elemento("Cuatro");
    cola->Agregar(elemento1);
    cola->Agregar(elemento2);
    cola->Agregar(elemento3);
    cola->Agregar(elemento4);

    Elemento* i = cola->Extraer();
    
    while(i != nullptr)
    {
        std::cout << i->GetNombre() << std::endl;
        i = cola->Extraer();
    }
    
    return 0;
}
