#pragma once

#include <iostream>

#include "NodoCteInfo.h"
#include "NodoProducto.h"

using namespace std;

class NodoCliente
{
public:
    NodoCteInfo info;
    NodoCliente* siguiente;

    NodoCliente();

    NodoCliente* insertarOrdenado(NodoCliente*& lista, string cedula);
    NodoCliente* buscar(NodoCliente* lista, string cedula);
    NodoCliente* insertarOrdenadoSinRepetir(NodoCliente*& listaClientes, string cedula, string marca, string cantidad);
    wstring mostrarListaDeClientes(NodoCliente* lista);
    void borrarProducto(NodoCliente* listaClientes, string cedula, string marca);
    bool buscarMarca(NodoCliente* listaClientes, string cedula, string marca);
    string retornarCantidadDeProducto(NodoCliente* listaClientes, string cedula, string marca);
};
