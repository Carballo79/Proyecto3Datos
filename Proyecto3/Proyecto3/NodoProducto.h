#pragma once

#include "NodoProInfo.h"

class NodoProducto
{
public:
    NodoProInfo info;
    NodoProducto* siguiente;

    NodoProducto();

    static NodoProducto* insertar(NodoProducto*& lista, std::string producto, std::string cantidad);
};
