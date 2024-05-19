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
    void crearMarcas(ArbolBB& pasillos, ArbolAVL& productos);
    void mostrarPorLlave(NodoARN* nodo, string dato);
    void mostrarPorLlave(string dato);
    void mostrarArbol(NodoARN* nodo, int nivel, wstring& salida);
    void rotacionIzquierda(NodoARN* nodo);
    void rotacionDerecha(NodoARN* nodo);
};
