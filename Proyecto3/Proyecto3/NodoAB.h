
#include <iostream>

const int MAX_LLAVES = 4;

class NodoAB
{
public:
    NodoAB(bool _esHoja);

    std::string llaves[MAX_LLAVES];
    NodoAB* hijos[MAX_LLAVES + 1];
    bool esHoja;
    int cuenta;

    friend class ArbolB;
    friend class ListaCarrito;
};
