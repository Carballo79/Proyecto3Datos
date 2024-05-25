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
    string buscarMasVisitado(NodoABB* nodo);
    string buscarMasVisitado();
    string buscarMenosVisitado(NodoABB* nodo);
    string buscarMenosVisitado();
    void crearReportePasillos(NodoABB* nodo, ofstream& archivo);
    void crearReportePasillos();
    void crearReportePasilloMasVisitado();
    void crearReportePasilloMenosVisitado();

    void inordenR(NodoABB* R, System::Windows::Forms::ComboBox^ comboBox);
};
