
#include "NodoProducto.h"

NodoProducto::NodoProducto() : siguiente(NULL) {}

NodoProducto* NodoProducto::insertar(NodoProducto*& lista, std::string producto, std::string cantidad)
{
    NodoProducto* nuevo = new NodoProducto();
    nuevo->info.producto = producto;
    nuevo->info.cantidad = cantidad;
    nuevo->siguiente = lista;
    lista = nuevo;
    return nuevo;
}
