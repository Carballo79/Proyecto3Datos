#pragma once

#include "NodoAAA.h"
#include "ArbolRN.h"

class ArbolAA
{
public:
    ArbolAA();

    NodoAAA* raiz;

    NodoAAA* insertarAuxiliar(NodoAAA* nodo, string dato);
    void insertarNodo(string dato);
    NodoAAA* buscarNodo(NodoAAA* nodo, string dato);
    bool existeNodo(string dato);
    string buscarPorMarca(NodoAAA* nodo, string dato);
    string buscarPorMarca(string dato);
    void modificarNodo(string llaveNodo, string nuevoDato);
    void crearInventarios(ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas);
    void mostrarArbol(NodoAAA* nodo, int nivel, wstring& salida);

    NodoAAA* skew(NodoAAA* x);
    NodoAAA* split(NodoAAA* x);
};
