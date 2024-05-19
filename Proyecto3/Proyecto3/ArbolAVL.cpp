
#include "ArbolAVL.h"
#include "Utilidades.h"

#include <string>
#include <fstream>
#include <sstream>

ArbolAVL::ArbolAVL() : raiz(NULL) {}

NodoAVL* ArbolAVL::insertarBalanceado(NodoAVL*& nodo, string dato)
{

    if (nodo == NULL)
        return (new NodoAVL(dato));

    int llaveNodo = obtenerLlave(dato, 1);

    if (llaveNodo < obtenerLlave(nodo->dato, 1))
        nodo->Hizq = insertarBalanceado(nodo->Hizq, dato);
    else
        nodo->Hder = insertarBalanceado(nodo->Hder, dato);

    // Actualiza el factor balance de cada nodo y balancea el �rbol
    nodo->altura = max(altura(nodo->Hizq), altura(nodo->Hder)) + 1;
    int FB = obtenerFB(nodo);

    if (FB > 1)
    {
        if (llaveNodo < obtenerLlave(nodo->Hizq->dato, 1))
            return rotacionDerecha(nodo);
        else
        {
            nodo->Hizq = rotacionIzquierda(nodo->Hizq);
            return rotacionDerecha(nodo);
        }
    }

    if (FB < -1)
    {
        if (llaveNodo > obtenerLlave(nodo->Hder->dato, 1))
            return rotacionIzquierda(nodo);
        else
        {
            nodo->Hder = rotacionDerecha(nodo->Hder);
            return rotacionIzquierda(nodo);
        }
    }

    return nodo;
}

void ArbolAVL::insertarNodo(string dato) { raiz = insertarBalanceado(raiz, dato); }

NodoAVL* ArbolAVL::buscarNodo(NodoAVL* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    int llaveNodo = obtenerLlave(dato, 1);

    if (llaveNodo == obtenerLlave(nodo->dato, 1))
        return nodo;
    else if (llaveNodo < obtenerLlave(nodo->dato, 1))
        return buscarNodo(nodo->Hizq, dato);
    else
        return buscarNodo(nodo->Hder, dato);
}

bool ArbolAVL::existeNodo(string dato) { return buscarNodo(raiz, dato) != NULL; }

NodoAVL* ArbolAVL::filtrarDato(NodoAVL* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    if (nodo == NULL || dato == obtenerDato(nodo->dato, 0))
        return nodo;

    if (obtenerLlave(dato, 1) < stringAInt(obtenerDato(nodo->dato, 1)))
        return filtrarDato(nodo->Hizq, dato);

    return filtrarDato(nodo->Hder, dato);
}

void ArbolAVL::modificarNodo(string llaveNodo, string nuevoDato)
{
    NodoAVL* nodo = buscarNodo(raiz, llaveNodo);

    if (nodo != NULL)
    {
        nodo->dato = obtenerDato(nodo->dato, 0) + "; "
            + llaveNodo + "; " + nuevoDato;

        cout << "\n\tProducto modificado exitosamente:" << endl;
        cout << "\n\tProducto modificado:\n\t" << nodo->dato << endl << endl;
    }
    else
        cout << "\n\tProducto no encontrado en el arbol.\n" << endl;
}

void ArbolAVL::crearProductos(ArbolBB& pasillos)
{
    string linea, codPasillo, codProducto, nombre, producto;

    ifstream archivo("ProductosPasillos.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo ProductosPasillos.txt\n" << endl;
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
        getline(ss, nombre, ';');
        ss >> ws;

        producto = codPasillo + "; " + codProducto + "; " + nombre;

        if (pasillos.existeNodo(codPasillo))
        {
            if (!existeNodo(codProducto))
                insertarNodo(producto);
        }
    }

    archivo.close();
}

void ArbolAVL::mostrarPorLlave(NodoAVL* nodo, string dato)
{
    if (nodo != NULL)
    {
        mostrarPorLlave(nodo->Hizq, dato);

        if (obtenerLlave(nodo->dato, 0) == obtenerLlave(dato, 0))
            cout << "\t" + nodo->dato << endl;

        mostrarPorLlave(nodo->Hder, dato);
    }
}

void ArbolAVL::mostrarPorLlave(string dato) { mostrarPorLlave(raiz, dato); }

void ArbolAVL::mostrarArbol(NodoAVL* nodo, int nivel, wstring& salida)
{
    if (nodo != NULL)
    {
        mostrarArbol(nodo->Hder, nivel + 1, salida);

        // Construye la cadena con los datos del nodo
        wstring nodoStr = L"";
        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        // Agrega el dato del nodo a la cadena
        nodoStr += strAWstr(nodo->dato) + L"\r\n";

        // Agrega la cadena del nodo a la salida
        salida += nodoStr;

        mostrarArbol(nodo->Hizq, nivel + 1, salida);
    }
}

void ArbolAVL::crearReporteProPasillo(string llaveNodo) {
    ofstream archivo;

    archivo.open("Reporte-Productos por pasillo.txt", ios::out);

    if (archivo.fail()) {
        cout << "\nNo se pudo abrir el archivo";
        return;
    }

    archivo << "Productos por pasillo\n";
    crearReporteProPasillo(raiz, llaveNodo, archivo);
    archivo.close();
}

void ArbolAVL::crearReporteProPasillo(NodoAVL* nodo, string llaveNodo, ofstream& archivo) {
    if (nodo != NULL)
    {
        if (obtenerLlave(nodo->dato, 0) == stringAInt(llaveNodo))
        {
            archivo << "Numero de pasillo:" << obtenerDato(nodo->dato, 0) << "\n";
            archivo << "Codigo de producto:" << obtenerDato(nodo->dato, 1) << "\n";
            archivo << "Nombre de producto:" << obtenerDato(nodo->dato, 2) << "\n";
        }

        crearReporteProPasillo(nodo->Hizq, llaveNodo, archivo);
        crearReporteProPasillo(nodo->Hder, llaveNodo, archivo);
    }
}

int ArbolAVL::altura(NodoAVL* N)
{
    if (N == NULL)
        return 0;

    return N->altura;
}

int ArbolAVL::maximo(int a, int b) { return (a > b) ? a : b; }

NodoAVL* ArbolAVL::rotacionIzquierda(NodoAVL* n1)
{
    NodoAVL* n2 = n1->Hder;

    n1->Hder = n2->Hizq;
    n2->Hizq = n1;

    n1->altura = maximo(altura(n1->Hizq), altura(n1->Hder)) + 1;
    n2->altura = maximo(altura(n2->Hizq), altura(n2->Hder)) + 1;

    return n2;
}

NodoAVL* ArbolAVL::rotacionDerecha(NodoAVL* n2)
{
    NodoAVL* n1 = n2->Hizq;

    n2->Hizq = n1->Hder;
    n1->Hder = n2;

    n2->altura = maximo(altura(n2->Hizq), altura(n2->Hder)) + 1;
    n1->altura = maximo(altura(n1->Hizq), altura(n1->Hder)) + 1;

    return n1;
}

int ArbolAVL::obtenerFB(NodoAVL* N)
{
    if (N == NULL)
        return 0;

    return (altura(N->Hizq) - altura(N->Hder));
}
