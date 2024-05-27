#pragma once

#include <iostream>

#include "NodoCteInfo.h"
#include "NodoProducto.h"
#include "ArbolAA.h"
#include "ArbolB.h"
#include "ArbolRN.h"


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

    void modificarProducto(NodoCliente* listaClientes, string cedula, string producto, string cantidad);
 
    void mostrarClientePorcedulaFacturar(NodoCliente* lista, string cedulaBuscada, System::Windows::Forms::CheckedListBox^ checkListBox);

    NodoCliente* eliminarPrimero(NodoCliente*& lista);

    void ImprimirFactura(NodoCliente* ComprasClientes, ArbolB*& clientes, ArbolAA*& inventarios, ArbolRN*& marcas);

    string extraerCont();

    void archivoAumentarCompras(string cedula);
    void archivoAumentarFacturas(string cedula);

    void clienteQueMasCompro();
    bool archivoExiste(string archivoN);
};
