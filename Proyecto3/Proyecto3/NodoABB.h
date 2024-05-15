
#include <iostream>

class NodoABB
{
public:
    NodoABB(std::string _dato);

    std::string dato;
    NodoABB* Hizq, * Hder, * siguiente, * anterior;

    friend class ArbolBB;
    friend class PilaABB;
};
