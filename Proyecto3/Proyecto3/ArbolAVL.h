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
    NodoAVL* eliminarNodo(NodoAVL* root, int key);
    NodoAVL* eliminar(int dato);
    void recorrerArbol(NodoAVL*& nodo, int valor, int pos);
    void crearProductos(ArbolBB& pasillos);
    void mostrarPorLlave(NodoAVL* nodo, string dato);
    void mostrarPorLlave(string dato);
    wstring mostrarArbol(NodoAVL* nodo, int nivel);
    void productosPorPasilloR(NodoAVL* R, string codPasillo, ofstream& archivo);
    void productosPorPasillo(string codPasillo);

    int altura(NodoAVL* N);
    int maximo(int a, int b);
    NodoAVL* rotacionIzquierda(NodoAVL* n1);
    NodoAVL* rotacionDerecha(NodoAVL* n2);
    int obtenerFB(NodoAVL* N);
    NodoAVL* minValorNodo(NodoAVL* nodo);

    void filtrarPorPasillo(NodoAVL* R, string codPasillo, System::Windows::Forms::ComboBox^ comboBox);
};
