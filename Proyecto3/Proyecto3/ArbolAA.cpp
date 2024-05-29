
#include "ArbolAA.h"
#include "Utilidades.h"

#include <string>
#include <fstream>
#include <sstream>

ArbolAA::ArbolAA() : raiz(NULL) {}

NodoAAA* ArbolAA::insertarAuxiliar(NodoAAA* nodo, string dato)
{
    int llaveNodo = obtenerLlave(dato, 3);

    if (nodo == NULL)
        nodo = new NodoAAA(dato);
    else if (llaveNodo < obtenerLlave(nodo->dato, 3))
        nodo->Hizq = insertarAuxiliar(nodo->Hizq, dato);
    else
        nodo->Hder = insertarAuxiliar(nodo->Hder, dato);

    nodo = skew(nodo);
    nodo = split(nodo);

    return nodo;
}

void ArbolAA::insertarNodo(string dato) { raiz = insertarAuxiliar(raiz, dato); }

NodoAAA* ArbolAA::buscarNodo(NodoAAA* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    int llaveNodo = obtenerLlave(dato, 3);

    if (llaveNodo == obtenerLlave(nodo->dato, 3))
        return nodo;
    else if (llaveNodo < obtenerLlave(nodo->dato, 3))
        return buscarNodo(nodo->Hizq, dato);
    else
        return buscarNodo(nodo->Hder, dato);
}

bool ArbolAA::existeNodo(string dato) { return buscarNodo(raiz, dato) != NULL; }

string ArbolAA::buscarPorMarca(NodoAAA* nodo, string dato)
{
    if (nodo == NULL)
        return "";

    if (obtenerLlave(nodo->dato, 0) == stringAInt(dato))
        return obtenerDato(nodo->dato, 6);

    string encontrado = buscarPorMarca(nodo->Hizq, dato);

    if (!encontrado.empty())
        return encontrado;

    return buscarPorMarca(nodo->Hder, dato);
}

string ArbolAA::buscarPorMarca(string codMarca)
{
    string codCanasta = buscarPorMarca(raiz, codMarca);

    if (!codCanasta.empty())
        return codCanasta;
    else
    {
        cout << "\tMarca no encontrada en el arbol.\n" << endl;
        return "";
    }
}

NodoAAA* ArbolAA::buscarPorMarcaInventario(NodoAAA* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    if (obtenerLlave(nodo->dato, 2) == stringAInt(dato))
        return nodo;

    NodoAAA* encontrado = buscarPorMarcaInventario(nodo->Hizq, dato);

    if (encontrado != NULL)
        return encontrado;

    return buscarPorMarcaInventario(nodo->Hder, dato);
}




void ArbolAA::modificarNodo(string llaveNodo, string nuevoDato)
{
    NodoAAA* nodo = buscarNodo(raiz, llaveNodo);

    if (nodo != NULL)
    {
        nodo->dato = obtenerDato(nodo->dato, 0) + "; " + obtenerDato(nodo->dato, 1) + "; "
            + obtenerDato(nodo->dato, 2) + "; " + llaveNodo + "; " + nuevoDato;

        cout << "\n\tInventario modificado exitosamente." << endl;
        cout << "\n\tInventario modificado:\n\t" << nodo->dato << endl << endl;
    }
    else
        cout << "\n\tEl inventario no existe en el arbol.\n" << endl;
}

NodoAAA* ArbolAA::eliminarNodoRecursivo(NodoAAA* nodo, int cod) {
    if (nodo == NULL) {
        return NULL;
    }

    if (cod < obtenerLlave(nodo->dato, 3)) {
        nodo->Hizq = eliminarNodoRecursivo(nodo->Hizq, cod);
    }
    else if (cod > obtenerLlave(nodo->dato, 3)) {
        nodo->Hder = eliminarNodoRecursivo(nodo->Hder, cod);
    }
    else {
        if (nodo->Hizq == NULL && nodo->Hder == NULL) {
            delete nodo;
            return NULL;
        }
        else if (nodo->Hizq == NULL) {
            NodoAAA* temp = nodo->Hder;
            delete nodo;
            return temp;
        }
        else if (nodo->Hder == NULL) {
            NodoAAA* temp = nodo->Hizq;
            delete nodo;
            return temp;
        }
        else {
            NodoAAA* sucesor = nodo->Hder;
            while (sucesor->Hizq != NULL) {
                sucesor = sucesor->Hizq;
            }
            nodo->dato = sucesor->dato;
            nodo->Hder = eliminarNodoRecursivo(nodo->Hder, obtenerLlave(sucesor->dato, 3));
        }
    }

    return nodo;
}

void ArbolAA::eliminarNodo(int cod) {
    string codnuevo = intAString(cod);
    NodoAAA* nodoEliminar = buscarNodo(raiz, codnuevo);

    if (nodoEliminar != NULL) {
        raiz = eliminarNodoRecursivo(raiz, cod);
    }
}

void ArbolAA::recorrerArbol(NodoAAA*& nodo, int valor, int pos) {
    if (nodo != NULL) {
        recorrerArbol(nodo->Hizq, valor, pos);

        if (obtenerLlave(nodo->dato, pos) == valor) {
            eliminarNodo(obtenerLlave(nodo->dato, 3));
            // Reinicia el recorrido desde el principio después de la eliminación
            recorrerArbol(raiz, valor, pos);
            return; // Termina el recorrido actual para evitar procesamiento adicional
        }

        recorrerArbol(nodo->Hder, valor, pos);
    }
}

void ArbolAA::crearInventarios(ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas)
{
    string linea, codPasillo, codProducto, codMarca, codInventario, nombre,
        cantStock, codCanasta, inventario;

    ifstream archivo("Inventario.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Inventario.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, codPasillo, ';');
        ss >> ws;
        getline(ss, codProducto, ';');
        ss >> ws;
        getline(ss, codMarca, ';');
        ss >> ws;
        getline(ss, codInventario, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;
        getline(ss, cantStock, ';');
        ss >> ws;
        getline(ss, codCanasta, ';');
        ss >> ws;

        inventario = codPasillo + "; " + codProducto + "; " + codMarca + "; "
            + codInventario + "; " + nombre + "; " + cantStock + "; " + codCanasta;

        if (pasillos.existeNodo(codPasillo))
        {
            if (productos.existeNodo(codProducto))
            {
                if (marcas.existeNodo(codMarca))
                {
                    if (!existeNodo(codInventario))
                        insertarNodo(inventario);
                }
            }
        }
    }

    archivo.close();
}

wstring ArbolAA::mostrarArbol(NodoAAA* nodo, int nivel)
{
    wstring salida;

    if (nodo != NULL)
    {
        salida += mostrarArbol(nodo->Hder, nivel + 1);

        wstring nodoStr = L"";
        
        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        nodoStr += strAWstr(nodo->dato) + L"\r\n";

        salida += nodoStr;

        salida += mostrarArbol(nodo->Hizq, nivel + 1);
    }

    return salida;
}

void ArbolAA::reporteInventariosR(NodoAAA* nodo, ofstream& archivo)
{
    if (nodo != NULL) {
        reporteInventariosR(nodo->Hizq, archivo);

        archivo << "Código de pasillo: " << obtenerLlave(nodo->dato, 0) << "\n";
        archivo << "Código de producto: " << obtenerLlave(nodo->dato, 1) << "\n";
        archivo << "Código de marca: " << obtenerLlave(nodo->dato, 2) << "\n";
        archivo << "Código de inventario: " << obtenerLlave(nodo->dato, 3) << "\n";
        archivo << "Nombre: " << obtenerDato(nodo->dato, 4) << "\n";
        archivo << "Stock: " << obtenerDato(nodo->dato, 5) << "\n";
        archivo << "Código de canasta: " << obtenerDato(nodo->dato, 6) << "\n";
        archivo << "----------------------------\n";

        reporteInventariosR(nodo->Hder, archivo);
    }
}

void ArbolAA::reporteInventarios() {
    ofstream archivo("Reporte-Inventarios.txt");
    if (archivo.is_open()) {
        archivo << "Inventario del supermercado:\n\n";
        reporteInventariosR(raiz, archivo);
        archivo.close();
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
    }
}

NodoAAA* ArbolAA::skew(NodoAAA* x)
{
    // cout << "Rotacion derecha" << endl;

    if (x == NULL || x->Hizq == NULL)
        return x;

    if (x->Hizq->nivel == x->nivel)
    {
        NodoAAA* izq = x->Hizq;
        x->Hizq = izq->Hder;
        izq->Hder = x;

        return izq;
    }

    return x;
}

NodoAAA* ArbolAA::split(NodoAAA* x)
{
    // cout << "Rotacion izquierda" << endl;

    if (x == NULL || x->Hder == NULL || x->Hder->Hder == NULL)
        return x;

    if (x->nivel == x->Hder->Hder->nivel)
    {
        NodoAAA* der = x->Hder;
        x->Hder = der->Hizq;
        der->Hizq = x;
        der->nivel++;

        return der;
    }

    return x;
}
