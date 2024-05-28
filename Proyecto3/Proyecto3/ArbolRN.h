#pragma once

#include "NodoARN.h"
#include "ArbolAVL.h"

class ArbolRN
{
public:
    ArbolRN();

    NodoARN* raiz;

    void insertarNodo(string dato);
    void insertarBalanceado(NodoARN* nodo);
    NodoARN* buscarNodo(NodoARN* nodo, string dato);
    bool existeNodo(string dato);
    NodoARN* filtrarDato(NodoARN* nodo, string dato);
    void modificarNodo(string llaveNodo, string nuevoDato);
    void eliminarNodo(int dato);
    void eliminarReparar(NodoARN* nodo);
    void transplanteRN(NodoARN* u, NodoARN* v);
    void eliminarNodoAux(NodoARN* node, int key);
    NodoARN* minimo(NodoARN* node);
    void recorrerArbol(NodoARN*& nodo, int variable, int pos);
    void crearMarcas(ArbolBB& pasillos, ArbolAVL& productos);
    void mostrarPorLlave(NodoARN* nodo, string dato);
    void mostrarPorLlave(string dato);
    wstring mostrarArbol(NodoARN* nodo, int nivel);
    void rotacionIzquierda(NodoARN* nodo);
    void rotacionDerecha(NodoARN* nodo);

    void filtrarPorProducto(NodoARN* R, string codProducto, System::Windows::Forms::ComboBox^ comboBox);

    void marcasPorProducto();
};
