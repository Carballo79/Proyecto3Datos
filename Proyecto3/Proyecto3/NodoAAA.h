
#include <iostream>

class NodoAAA
{
public:
    NodoAAA(std::string _dato);

    std::string dato;
    int nivel;
    NodoAAA* Hizq, * Hder;

    friend class ArbolAA;
};
