#pragma once

#include "NodoABB.h"
#using <System.Windows.Forms.dll>

using namespace std;

class ArbolBB
{
public:
    ArbolBB();

    NodoABB* raiz;

    NodoABB* insertarBinario(NodoABB* nodo, string dato);
    void insertarNodo(string dato);
    NodoABB* buscarNodo(NodoABB* nodo, string dato);
    bool existeNodo(string dato);
    NodoABB* filtrarDato(NodoABB* nodo, string dato);
    void modificarNodo(string llaveNodo, string nuevoDato);
    void eliminarNodo(int cod);
    void crearPasillos();
    void crearCiudades();
    wstring mostrarArbol(NodoABB* nodo, int nivel);
    void aumentarPasilloVisitado(string cod);
    void reportePasillosR(NodoABB* nodo, ofstream& archivo);
    void reportePasillos();
    void pasilloMasVisitado();
    void pasilloMenosVisitado();

    void inordenR(NodoABB* R, System::Windows::Forms::ComboBox^ comboBox);
};
