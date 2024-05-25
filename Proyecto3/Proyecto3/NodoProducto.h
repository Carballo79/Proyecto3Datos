#pragma once

#include "NodoProInfo.h"

class NodoProducto
{
public:
    NodoProInfo info;
    NodoProducto* siguiente;

    NodoProducto();

    static NodoProducto* insertar(NodoProducto*& lista, std::string marca, std::string cantidad);
};
