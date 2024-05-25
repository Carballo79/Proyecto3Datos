#pragma once

#include "NodoProducto.h"

class NodoCteInfo
{
public:
    std::string cedula;
    NodoProducto* listaProductos;

    NodoCteInfo();
};
