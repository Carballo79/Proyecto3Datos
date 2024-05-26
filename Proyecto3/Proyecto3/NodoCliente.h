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
    wstring mostrarClientePorCedula(NodoCliente* lista, string& cedulaBuscada);
    void borrarProducto(NodoCliente* listaClientes, string cedula, string producto);
    bool buscarProducto(NodoCliente* listaClientes, string cedula, string produco);
    string retornarCantidadDeProducto(NodoCliente* listaClientes, string cedula, string marca);

 
    void mostrarClientePorcedulaFacturar(NodoCliente* lista, string cedulaBuscada, System::Windows::Forms::CheckedListBox^ checkListBox);

    NodoCliente* eliminarPrimero(NodoCliente*& lista);
};
