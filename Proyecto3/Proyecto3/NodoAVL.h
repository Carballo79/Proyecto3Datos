
#include <iostream>

class NodoAVL
{
public:
    NodoAVL(std::string _dato);

    std::string dato;
    int altura;
    NodoAVL* Hizq, * Hder;

    friend class ArbolAVL;
};
