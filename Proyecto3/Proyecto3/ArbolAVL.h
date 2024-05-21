#pragma once

#include "NodoAVL.h"
#include "ArbolBB.h"

class ArbolAVL
{
public:
    ArbolAVL();

    NodoAVL* raiz;
    bool Hh;

    NodoAVL* insertarBalanceado(NodoAVL*& nodo, string dato);
    void insertarNodo(string dato);
    NodoAVL* buscarNodo(NodoAVL* nodo, string dato);
    bool existeNodo(string dato);
    NodoAVL* filtrarDato(NodoAVL* nodo, string dato);
    void modificarNodo(string llaveNodo, string nuevoDato);
    void crearProductos(ArbolBB& pasillos);
    void mostrarPorLlave(NodoAVL* nodo, string dato);
    void mostrarPorLlave(string dato);
    void mostrarArbol(NodoAVL* nodo, int nivel, wstring& salida);
    void crearReporteProPasillo(NodoAVL* nodo, string llaveNodo, ofstream& archivo);
    void crearReporteProPasillo(string llaveNodo);

    int altura(NodoAVL* N);
    int maximo(int a, int b);
    NodoAVL* rotacionIzquierda(NodoAVL* n1);
    NodoAVL* rotacionDerecha(NodoAVL* n2);
    int obtenerFB(NodoAVL* N);


    NodoAVL* eliminarNodo(NodoAVL* root, int key);

    void recorrerArbol(NodoAVL*& nodo, int valor, int pos);

    NodoAVL* eliminar(int dato);

};
