
#include "ArbolRN.h"
#include "Utilidades.h"

#include <string>
#include <fstream>
#include <sstream>

ArbolRN::ArbolRN() : raiz(NULL) {}

void ArbolRN::insertarNodo(string dato)
{
    NodoARN* nodo = new NodoARN(dato, NULL);

    int llaveNodo = obtenerLlave(nodo->dato, 2);

    if (raiz == NULL)
    {
        raiz = nodo;
        raiz->color = 0; // Color negro para la ra�z
    }
    else
    {
        NodoARN* padre = NULL;
        NodoARN* act = raiz;

        while (act != NULL)
        {
            padre = act;

            if (llaveNodo < obtenerLlave(act->dato, 2))
                act = act->Hizq;
            else
                act = act->Hder;
        }

        nodo->padre = padre;

        if (llaveNodo < obtenerLlave(padre->dato, 2))
            padre->Hizq = nodo;
        else
            padre->Hder = nodo;

        insertarBalanceado(nodo);
    }
}

void ArbolRN::insertarBalanceado(NodoARN* nodo)
{
    NodoARN* uValor;

    while ((nodo->padre != NULL) && (nodo->padre->color == 1))
    {
        if (nodo->padre == nodo->padre->padre->Hizq)
        {
            uValor = nodo->padre->padre->Hder;

            if ((uValor != NULL) && (uValor->color == 1))
            {
                uValor->color = 0;
                nodo->padre->color = 0;
                nodo->padre->padre->color = 1;
                nodo = nodo->padre->padre;
            }
            else
            {
                if (nodo == nodo->padre->Hder)
                {
                    nodo = nodo->padre;
                    rotacionIzquierda(nodo);
                }

                nodo->padre->color = 0;
                nodo->padre->padre->color = 1;
                rotacionDerecha(nodo->padre->padre);
            }
        }
        else
        {
            uValor = nodo->padre->padre->Hizq;

            if ((uValor != NULL) && (uValor->color == 1))
            {
                uValor->color = 0;
                nodo->padre->color = 0;
                nodo->padre->padre->color = 1;
                nodo = nodo->padre->padre;
            }
            else
            {
                if (nodo == nodo->padre->Hizq)
                {
                    nodo = nodo->padre;
                    rotacionDerecha(nodo);
                }

                nodo->padre->color = 0;
                nodo->padre->padre->color = 1;
                rotacionIzquierda(nodo->padre->padre);
            }
        }
    }

    raiz->color = 0;
}

NodoARN* ArbolRN::buscarNodo(NodoARN* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    int llaveNodo = obtenerLlave(dato, 2);

    if (llaveNodo == obtenerLlave(nodo->dato, 2))
        return nodo;
    else if (llaveNodo < obtenerLlave(nodo->dato, 2))
        return buscarNodo(nodo->Hizq, dato);
    else
        return buscarNodo(nodo->Hder, dato);
}

bool ArbolRN::existeNodo(string dato) { return buscarNodo(raiz, dato) != NULL; }

NodoARN* ArbolRN::filtrarDato(NodoARN* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    if (nodo == NULL || dato == obtenerDato(nodo->dato, 1))
        return nodo;

    if (obtenerLlave(dato, 2) < stringAInt(obtenerDato(nodo->dato, 2)))
        return filtrarDato(nodo->Hizq, dato);

    return filtrarDato(nodo->Hder, dato);
}

void ArbolRN::modificarNodo(string llaveNodo, string nuevoDato)
{
    NodoARN* nodo = buscarNodo(raiz, llaveNodo);

    if (nodo != NULL)
    {
        nodo->dato = obtenerDato(nodo->dato, 0) + "; " + obtenerDato(nodo->dato, 1) + "; "
            + llaveNodo + "; " + nuevoDato;

        cout << "\n\tMarca modificada exitosamente." << endl;
        cout << "\n\tMarca modificada:\n\t" << nodo->dato << endl << endl;
    }
    else
        cout << "\n\tLa marca no existe en el arbol.\n" << endl;
}

void ArbolRN::eliminarReparar(NodoARN* x) {
    while ((x != raiz) && ((x == NULL) || (x->color == 0))) {
        if (x == x->padre->Hizq) {
            NodoARN* s = x->padre->Hder;

            if (s->color == 1) {
                s->color = 0;
                x->padre->color = 1;
                rotacionIzquierda(x->padre);
                s = x->padre->Hder;
            }

            if (((s->Hizq == NULL) || (s->Hizq->color == 0)) &&
                ((s->Hder == NULL) || (s->Hder->color == 0))) {
                s->color = 1;
                x = x->padre;
            }
            else {
                if ((s->Hder == NULL) || (s->Hder->color == 0)) {
                    if (s->Hizq != NULL) s->Hizq->color = 0;
                    s->color = 1;
                    rotacionDerecha(s);
                    s = x->padre->Hder;
                }

                s->color = x->padre->color;
                x->padre->color = 0;

                if (s->Hder != NULL) s->Hder->color = 0;
                rotacionIzquierda(x->padre);
                x = raiz;
            }
        }
        else {
            NodoARN* s = x->padre->Hizq;

            if (s->color == 1) {
                s->color = 0;
                x->padre->color = 1;
                rotacionDerecha(x->padre);
                s = x->padre->Hizq;
            }

            if (((s->Hizq == NULL) || (s->Hizq->color == 0)) &&
                ((s->Hder == NULL) || (s->Hder->color == 0))) {
                s->color = 1;
                x = x->padre;
            }
            else {
                if ((s->Hizq == NULL) || (s->Hizq->color == 0)) {
                    if (s->Hder != NULL) s->Hder->color = 0;
                    s->color = 1;
                    rotacionIzquierda(s);
                    s = x->padre->Hizq;
                }

                s->color = x->padre->color;
                x->padre->color = 0;

                if (s->Hizq != NULL) s->Hizq->color = 0;
                rotacionDerecha(x->padre);
                x = raiz;
            }
        }
    }

    if (x != NULL) x->color = 0;
}

void ArbolRN::transplanteRN(NodoARN* u, NodoARN* v) {
    if (u->padre == NULL) {
        raiz = v;
    }
    else if (u == u->padre->Hizq) {
        u->padre->Hizq = v;
    }
    else {
        u->padre->Hder = v;
    }

    if (v != NULL) {
        v->padre = u->padre;
    }
}

void ArbolRN::eliminarNodoAux(NodoARN* node, int key) {
    NodoARN* z = NULL;
    NodoARN* x;
    NodoARN* y;

    while (node != NULL) {
        if (obtenerLlave(node->dato, 2) == key) {
            z = node;
        }

        if (obtenerLlave(node->dato, 2) <= key) {
            node = node->Hder;
        }
        else {
            node = node->Hizq;
        }
    }

    if (z == NULL) {
        cout << "Llave no encontrada en el arbol." << endl;
        return;
    }

    y = z;
    int y_original_color = y->color;

    if (z->Hizq == NULL) {
        x = z->Hder;
        transplanteRN(z, z->Hder);
    }
    else if (z->Hder == NULL) {
        x = z->Hizq;
        transplanteRN(z, z->Hizq);
    }
    else {
        y = minimo(z->Hder);
        y_original_color = y->color;
        x = y->Hder;

        if (y->padre != z) {
            transplanteRN(y, y->Hder);
            y->Hder = z->Hder;

            if (y->Hder != NULL) {
                y->Hder->padre = y;
            }
        }

        transplanteRN(z, y);
        y->Hizq = z->Hizq;
        if (y->Hizq != NULL) {
            y->Hizq->padre = y;
        }
        y->color = z->color;
    }

    delete z;

    if (y_original_color == 0 && x != NULL) {
        eliminarReparar(x);
    }
}

NodoARN* ArbolRN::minimo(NodoARN* nodo) {
    while (nodo->Hizq != NULL) {
        nodo = nodo->Hizq;
    }

    return nodo;
}

void ArbolRN::eliminarNodo(int data) {
    eliminarNodoAux(this->raiz, data);
}

void ArbolRN::recorrerArbol(NodoARN*& nodo, int valor, int pos) {
    if (nodo != NULL) {
        recorrerArbol(nodo->Hizq, valor, pos);

        if (obtenerLlave(nodo->dato, pos) == valor) {
            eliminarNodo(obtenerLlave(nodo->dato, 2));
            // Reinicia el recorrido desde el principio después de la eliminación
            recorrerArbol(raiz, valor, pos);
            return; // Termina el recorrido actual para evitar procesamiento adicional
        }

        recorrerArbol(nodo->Hder, valor, pos);
    }
}

void ArbolRN::crearMarcas(ArbolBB& pasillos, ArbolAVL& productos)
{
    string linea, codPasillo, codProducto, codMarca, nombre,
        cantGondola, precio, marca;

    ifstream archivo("MarcasProductos.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo MarcasProductos.txt\n" << endl;
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
        getline(ss, nombre, ';');
        ss >> ws;
        getline(ss, cantGondola, ';');
        ss >> ws;
        getline(ss, precio, ';');
        ss >> ws;

        marca = codPasillo + "; " + codProducto + "; " + codMarca + "; "
            + nombre + "; " + cantGondola + "; " + precio;

        if (pasillos.existeNodo(codPasillo))
        {
            if (productos.existeNodo(codProducto))
            {
                if (!existeNodo(codMarca))
                    insertarNodo(marca);
            }
        }
    }

    archivo.close();
}

void ArbolRN::mostrarPorLlave(NodoARN* nodo, string dato)
{
    if (nodo != NULL)
    {
        mostrarPorLlave(nodo->Hizq, dato);

        if (obtenerLlave(nodo->dato, 1) == obtenerLlave(dato, 1))
            cout << "\t" + nodo->dato << endl;

        mostrarPorLlave(nodo->Hder, dato);
    }
}

void ArbolRN::mostrarPorLlave(string dato) { mostrarPorLlave(raiz, dato); }

wstring ArbolRN::mostrarArbol(NodoARN* nodo, int nivel)
{
    wstring salida;

    if (nodo != NULL)
    {
        salida += mostrarArbol(nodo->Hder, nivel + 1);

        wstring nodoStr = L"";
        
        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        nodoStr += strAWstr(nodo->dato + (nodo->color ? " (R)" : " (N)")) + L"\r\n";

        salida += nodoStr;

        salida += mostrarArbol(nodo->Hizq, nivel + 1);
    }

    return salida;
}

void ArbolRN::rotacionIzquierda(NodoARN* nodo)
{
    NodoARN* y = nodo->Hder;
    nodo->Hder = y->Hizq;

    if (y->Hizq != NULL)
        y->Hizq->padre = nodo;

    y->padre = nodo->padre;

    if (nodo->padre == NULL)
        raiz = y;
    else if (nodo == nodo->padre->Hizq)
        nodo->padre->Hizq = y;
    else
        nodo->padre->Hder = y;

    y->Hizq = nodo;
    nodo->padre = y;
}

void ArbolRN::rotacionDerecha(NodoARN* nodo)
{
    NodoARN* y = nodo->Hizq;
    nodo->Hizq = y->Hder;

    if (y->Hder != NULL)
        y->Hder->padre = nodo;

    y->padre = nodo->padre;

    if (nodo->padre == NULL)
        raiz = y;
    else if (nodo == nodo->padre->Hder)
        nodo->padre->Hder = y;
    else
        nodo->padre->Hizq = y;

    y->Hder = nodo;
    nodo->padre = y;
}

void ArbolRN::filtrarPorProducto(NodoARN* R, string codProducto, System::Windows::Forms::ComboBox^ comboBox)
{
    if (R == NULL)
        return;

    filtrarPorProducto(R->Hizq, codProducto, comboBox);

    if (obtenerDato(R->dato, 1) == codProducto)
        comboBox->Items->Add(gcnew System::String(R->dato.c_str()));

    filtrarPorProducto(R->Hder, codProducto, comboBox);
}
