
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

NodoAVL* ArbolAVL::obtenerCodProducto(NodoAVL* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    if (nodo == NULL || dato == obtenerDato(nodo->dato, 0))
        return nodo;

    if (obtenerLlave(dato, 1) < stringAInt(obtenerDato(nodo->dato, 1)))
        return obtenerCodProducto(nodo->Hizq, dato);

    return obtenerCodProducto(nodo->Hder, dato);
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

NodoAVL* ArbolAVL::eliminarNodo(NodoAVL* nodo, int llave)
{
    if (nodo == NULL)
        return nodo;

    if (llave < obtenerLlave(nodo->dato, 1))
        nodo->Hizq = eliminarNodo(nodo->Hizq, llave);
    else if (llave > obtenerLlave(nodo->dato, 1))
        nodo->Hder = eliminarNodo(nodo->Hder, llave);
    else
    {
        if ((nodo->Hizq == NULL) || (nodo->Hder == NULL))
        {
            NodoAVL* temp = nodo->Hizq ? nodo->Hizq : nodo->Hder;

            if (temp == NULL)
            {
                temp = nodo;
                nodo = NULL;
            }
            else
                *nodo = *temp;

            free(temp);
        }
        else
        {
            NodoAVL* temp = minValorNodo(nodo->Hder);

            nodo->dato = temp->dato;

            nodo->Hder = eliminarNodo(nodo->Hder, obtenerLlave(temp->dato, 1));
        }
    }

    if (nodo == NULL)
        return nodo;

    nodo->altura = 1 + maximo(altura(nodo->Hizq), altura(nodo->Hder));

    int balance = obtenerFB(nodo);

    if ((balance > 1) && (obtenerFB(nodo->Hizq) >= 0))
        return rotacionDerecha(nodo);

    if ((balance > 1) && (obtenerFB(nodo->Hizq) < 0))
    {
        nodo->Hizq = rotacionIzquierda(nodo->Hizq);
        return rotacionDerecha(nodo);
    }

    if ((balance < -1) && (obtenerFB(nodo->Hder) <= 0))
        return rotacionIzquierda(nodo);

    if ((balance < -1) && (obtenerFB(nodo->Hder) > 0))
    {
        nodo->Hder = rotacionDerecha(nodo->Hder);
        return rotacionIzquierda(nodo);
    }

    return nodo;
}

NodoAVL* ArbolAVL::eliminar(int dato) {
    return raiz = eliminarNodo(raiz, dato);
}

void ArbolAVL::recorrerArbol(NodoAVL*& nodo, int valor, int pos) {
    if (nodo != NULL) {
        recorrerArbol(nodo->Hizq, valor, pos);
        if (obtenerLlave(nodo->dato, pos) == valor) {
            eliminar(obtenerLlave(nodo->dato, 1));
            // Reinicia el recorrido desde el principio después de la eliminación
            recorrerArbol(raiz, valor, pos);
            return; // Termina el recorrido actual para evitar procesamiento adicional
        }

        recorrerArbol(nodo->Hder, valor, pos);
    }
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

wstring ArbolAVL::mostrarArbol(NodoAVL* nodo, int nivel)
{
    wstring salida;

    if (nodo != NULL)
    {
        salida += mostrarArbol(nodo->Hder, nivel + 1);

        // Construye la cadena con los datos del nodo
        wstring nodoStr = L"";
        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        // Agrega el dato del nodo a la cadena
        nodoStr += strAWstr(nodo->dato) + L"\r\n";

        // Agrega la cadena del nodo a la salida
        salida += nodoStr;

        salida += mostrarArbol(nodo->Hizq, nivel + 1);
    }

    return salida;
}

void ArbolAVL::productosPorPasilloR(NodoAVL* R, string codPasillo, ofstream& archivo)
{
    if (R == NULL)
        return;

    productosPorPasilloR(R->Hizq, codPasillo, archivo);

    if (obtenerDato(R->dato, 0) == codPasillo)
    {
        archivo << "Código de pasillo: " << obtenerLlave(R->dato, 0) << "\n";
        archivo << "Código de producto: " << obtenerLlave(R->dato, 1) << "\n";
        archivo << "Nombre: " << obtenerDato(R->dato, 2) << "\n";
        archivo << "----------------------------\n";
    }

    productosPorPasilloR(R->Hder, codPasillo, archivo);
}

void ArbolAVL::productosPorPasillo(string codPasillo) {
    ofstream archivo("Reporte-ProductosPorPasillo.txt");
    if (archivo.is_open()) {
        archivo << "Productos de un pasillo:\n\n";
        productosPorPasilloR(raiz, codPasillo, archivo);
        archivo.close();
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
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

NodoAVL* ArbolAVL::minValorNodo(NodoAVL* nodo)
{
    NodoAVL* act = nodo;

    while (act->Hizq != NULL)
        act = act->Hizq;

    return act;
}

void ArbolAVL::filtrarPorPasillo(NodoAVL* R, string codPasillo, System::Windows::Forms::ComboBox^ comboBox)
{
    if (R == NULL)
        return;

    filtrarPorPasillo(R->Hizq, codPasillo, comboBox);
    
    if (obtenerDato(R->dato, 0) == codPasillo)
        comboBox->Items->Add(gcnew System::String(R->dato.c_str()));

    filtrarPorPasillo(R->Hder, codPasillo, comboBox);
}
