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
    NodoAAA* buscarPorMarcaInventario(NodoAAA* nodo, string dato);


    void modificarNodo(string llaveNodo, string nuevoDato);
    NodoAAA* eliminarNodoRecursivo(NodoAAA* nodo, int cod);
    void eliminarNodo(int cod);
    void recorrerArbol(NodoAAA*& nodo, int variable, int pos);
    void crearInventarios(ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas);
    wstring mostrarArbol(NodoAAA* nodo, int nivel);
    void reporteInventariosR(NodoAAA* nodo, ofstream& archivo);
    void reporteInventarios();

    NodoAAA* skew(NodoAAA* x);
    NodoAAA* split(NodoAAA* x);
};
