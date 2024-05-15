
#include "NodoAVL.h"
#include "ArbolBB.h"

class ArbolAVL
{
public:
    ArbolAVL();

    NodoAVL* raiz;

    NodoAVL* insertarBalanceado(NodoAVL*& nodo, string dato);
    void insertarNodo(string dato);
    NodoAVL* buscarNodo(NodoAVL* nodo, string dato);
    bool existeNodo(string dato);
    NodoAVL* filtrarDato(NodoAVL* nodo, string dato);
    void modificarNodo(string llaveNodo, string nuevoDato);
    void crearProductos(ArbolBB& pasillos);
    void mostrarPorLlave(NodoAVL* nodo, string dato);
    void mostrarPorLlave(string dato);
    void mostrarArbol(NodoAVL* nodo, int nivel);
    void mostrarArbol();
    void crearReporteProPasillo(NodoAVL* nodo, string llaveNodo, ofstream& archivo);
    void crearReporteProPasillo(string llaveNodo);

    int altura(NodoAVL* N);
    int max(int a, int b);
    NodoAVL* rotacionIzquierda(NodoAVL* n1);
    NodoAVL* rotacionDerecha(NodoAVL* n2);
    int obtenerFB(NodoAVL* N);
};