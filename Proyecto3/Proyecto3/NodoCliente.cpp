
#include "NodoCliente.h"
#include "Utilidades.h"

NodoCliente::NodoCliente() : siguiente(NULL) {}

NodoCliente* NodoCliente::insertarOrdenado(NodoCliente*& lista, string cedula)
{
    NodoCliente* nuevo = new NodoCliente();
    nuevo->info.cedula = cedula;
    nuevo->siguiente = lista;
    lista = nuevo;
    return nuevo;
}

NodoCliente* NodoCliente::buscar(NodoCliente* lista, string cedula)
{
    NodoCliente* aux = lista;

    while (aux != NULL)
    {
        if (aux->info.cedula == cedula)
            return aux;

        aux = aux->siguiente;
    }

    return NULL;
}

NodoCliente* NodoCliente::insertarOrdenadoSinRepetir(NodoCliente*& listaClientes, string cedula, string marca, string cantidad)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        cliente = insertarOrdenado(listaClientes, cedula);

    NodoProducto::insertar(cliente->info.listaProductos, marca, cantidad);

    return cliente;
}

wstring NodoCliente::mostrarListaDeClientes(NodoCliente* lista)
{
    wstring salida;

    while (lista != NULL)
    {
        salida += L"Cliente Cedula: " + strAWstr(lista->info.cedula) + L"\n";
        NodoProducto* listaProductos = lista->info.listaProductos;

        while (listaProductos != NULL)
        {
            salida += L"Marca: " + strAWstr(listaProductos->info.marca) + L" /// Cantidad: " + strAWstr(listaProductos->info.cantidad) + L"\n";
            listaProductos = listaProductos->siguiente;
        }

        lista = lista->siguiente;
    }

    return salida;
}

void NodoCliente::borrarProducto(NodoCliente* listaClientes, string cedula, string marca)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
    {
        cout << "Cliente no encontrado." << endl;
        return;
    }

    NodoProducto* anterior = NULL;
    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.marca == marca)
        {
            if (anterior == NULL)
                cliente->info.listaProductos = actual->siguiente; // Si es el primer nodo de la lista de productos
            else
                anterior->siguiente = actual->siguiente; // Si no es el primer nodo

            delete actual;
            cout << "Producto '" << marca << "' eliminado del cliente con cedula " << cedula << endl;
            return;
        }

        anterior = actual;
        actual = actual->siguiente;
    }
    cout << "Producto '" << marca << "' no encontrado en la lista de productos del cliente con cedula " << cedula << endl;
}

bool NodoCliente::buscarMarca(NodoCliente* listaClientes, string cedula, string marca)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return false;

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.marca == marca)
            return true;

        actual = actual->siguiente;
    }

    return false;
}

string NodoCliente::retornarCantidadDeProducto(NodoCliente* listaClientes, string cedula, string marca)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return "";

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.marca == marca)
            return actual->info.cantidad;

        actual = actual->siguiente;
    }

    return "";
}
