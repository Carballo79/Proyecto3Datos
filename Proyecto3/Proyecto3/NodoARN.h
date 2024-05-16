#pragma once

#include <iostream>

class NodoARN
{
public:
    NodoARN(std::string _dato, NodoARN* _padre);

    std::string dato;
    NodoARN* padre, * Hizq, * Hder;
    int color;

    friend class ArbolRN;
};
