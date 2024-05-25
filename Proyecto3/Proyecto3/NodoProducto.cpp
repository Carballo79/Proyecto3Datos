
#include "NodoProducto.h"

NodoProducto::NodoProducto() : siguiente(NULL) {}

NodoProducto* NodoProducto::insertar(NodoProducto*& lista, std::string marca, std::string cantidad)
{
    NodoProducto* nuevo = new NodoProducto();
    nuevo->info.marca = marca;
    nuevo->info.cantidad = cantidad;
    nuevo->siguiente = lista;
    lista = nuevo;
    return nuevo;
}
