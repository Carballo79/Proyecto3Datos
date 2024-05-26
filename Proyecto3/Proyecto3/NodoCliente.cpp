
#include "NodoCliente.h"
#include "Utilidades.h"
#include <msclr/marshal_cppstd.h>
#using <System.Windows.Forms.dll>

NodoCliente::NodoCliente() : siguiente(NULL) {}

NodoCliente* NodoCliente::insertarOrdenado(NodoCliente*& lista, string cedula)
{
        NodoCliente* nuevo = new NodoCliente();
        nuevo->info.cedula = cedula;
        nuevo->siguiente = NULL;

        // Si la lista está vacía, el nuevo nodo se convierte en el primer nodo
        if (lista == NULL) {
            lista = nuevo;
        }
        else {
            // Recorre la lista hasta encontrar el último nodo
            NodoCliente* actual = lista;
            while (actual->siguiente != NULL) {
                actual = actual->siguiente;
            }
            // Inserta el nuevo nodo al final de la lista
            actual->siguiente = nuevo;
        }

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

NodoCliente* NodoCliente::insertarOrdenadoSinRepetir(NodoCliente*& listaClientes, string cedula, string producto, string cantidad)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        cliente = insertarOrdenado(listaClientes, cedula);

    NodoProducto::insertar(cliente->info.listaProductos, producto, cantidad);

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
            salida += L"Producto: " + strAWstr(listaProductos->info.producto) + L" /// Cantidad: " + strAWstr(listaProductos->info.cantidad) + L"\n";
            listaProductos = listaProductos->siguiente;
        }

        lista = lista->siguiente;
    }

    return salida;
}

wstring NodoCliente::mostrarClientePorCedula(NodoCliente* lista, string& cedulaBuscada) {
    wstring salida;

    while (lista != NULL) {
        if (lista->info.cedula == cedulaBuscada) {
            salida += L"Cliente Cedula: " + strAWstr(lista->info.cedula) + L"\n";
            NodoProducto* listaProductos = lista->info.listaProductos;

            while (listaProductos != NULL) {
                salida += L"Producto: " + strAWstr(listaProductos->info.producto) + L" /// Cantidad: " + strAWstr(listaProductos->info.cantidad) + L"\n";
                listaProductos = listaProductos->siguiente;
            }
            break;  // Detener la búsqueda una vez que se encuentra el cliente
        }
        lista = lista->siguiente;
    }

    if (salida.empty()) {
        salida = L"Cliente con cédula " + strAWstr(cedulaBuscada) + L" no encontrado.\n";
    }

    return salida;
}

void NodoCliente::mostrarClientePorcedulaFacturar(NodoCliente* lista, string cedulaBuscada, System::Windows::Forms::CheckedListBox^ checkListBox) {
    checkListBox->Items->Clear();  // Limpiar el CheckListBox antes de agregar nuevos elementos

    while (lista != NULL) {
        if (lista->info.cedula == cedulaBuscada) {

            NodoProducto* listaProductos = lista->info.listaProductos;
            while (listaProductos != NULL) {
                System::String^ productoInfo = L"Producto: " + msclr::interop::marshal_as<System::String^>(listaProductos->info.producto) + L" /// Cantidad: " + msclr::interop::marshal_as<System::String^>(listaProductos->info.cantidad);
                checkListBox->Items->Add(productoInfo);
                listaProductos = listaProductos->siguiente;
            }
            break;  // Detener la búsqueda una vez que se encuentra el cliente
        }
        lista = lista->siguiente;
    }
    if (checkListBox->Items->Count == 0) {
        System::String^ mensaje = L"No hay productos por facturar. \n";
        checkListBox->Items->Add(mensaje);
    }
}


void NodoCliente::borrarProducto(NodoCliente* listaClientes, string cedula, string producto)
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
        if (actual->info.producto == producto)
        {
            if (anterior == NULL)
                cliente->info.listaProductos = actual->siguiente; // Si es el primer nodo de la lista de productos
            else
                anterior->siguiente = actual->siguiente; // Si no es el primer nodo

            delete actual;
            cout << "Producto '" << producto << "' eliminado del cliente con cedula " << cedula << endl;
            return;
        }

        anterior = actual;
        actual = actual->siguiente;
    }
    cout << "Producto '" << producto << "' no encontrado en la lista de productos del cliente con cedula " << cedula << endl;
}

bool NodoCliente::buscarProducto(NodoCliente* listaClientes, string cedula, string producto)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return false;

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.producto == producto)
            return true;

        actual = actual->siguiente;
    }

    return false;
}

NodoCliente* NodoCliente::eliminarPrimero(NodoCliente*& lista)
{
    if (lista == NULL) {
        return NULL;  // La lista ya está vacía, nada que eliminar
    }

    NodoCliente* aux = lista;  // Apuntar al primer nodo
    lista = lista->siguiente;  // Actualizar el puntero de inicio para apuntar al segundo nodo
    delete aux;  // Eliminar el primer nodo

    return lista;  // Devolver la nueva cabeza de la lista
}

string NodoCliente::retornarCantidadDeProducto(NodoCliente* listaClientes, string cedula, string producto)
{
    NodoCliente* cliente = buscar(listaClientes, cedula);

    if (cliente == NULL)
        return "";

    NodoProducto* actual = cliente->info.listaProductos;

    while (actual != NULL)
    {
        if (actual->info.producto == producto)
            return actual->info.cantidad;

        actual = actual->siguiente;
    }

    return "";
}
