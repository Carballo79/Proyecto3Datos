#pragma once

#include "NodoAB.h"
#include "ArbolBB.h"

class ArbolB
{
public:
    ArbolB();

    NodoAB* raiz;

    void insertarNodo(string dato);
    bool buscar(string dato);
    void modificarNodo(string nuevoDato);
    void crearClientes(ArbolBB& ciudades);
    void crearAdmins(ArbolBB& ciudades);
    void crearVendedores();
    string obtenerNodo(string dato);
    wstring mostrarArbol(NodoAB* nodo, int nivel);
    void reporteClientes();
    string buscarMostrarContacto(string dato);
    void aumentarNumFacturas(string dato);
    void aumentarNumCompras(string dato);
    string conseguirContFacturas(string dato);
    void reporteClienteMasCompras();
    void reporteClienteMenosCompras();
    void reporteClienteMasFacturas();

    void dividirPagina(NodoAB* padre, int pos);
    void meterHoja(NodoAB* nodo, string dato);
    bool buscarNodo(NodoAB* nodo, string dato);
    NodoAB* buscar(NodoAB* nodo, string dato);
    void reporteClientes(NodoAB* nodo, ofstream& archivo);
    void reporteClienteMasCompras(NodoAB* nodo, string& clienteMayor, int& maxNum);
    void reporteClienteMenosCompras(NodoAB* nodo, string& clienteMenor, int& minNum);
    void reporteClienteMasFacturas(NodoAB* nodo, string& clienteMayor, int& maxNum);

    void eliminar(string cedula);
    void eliminarNodo(NodoAB* nodo, string cedula);
    void eliminarDeNoHoja(NodoAB* nodo, int idx);
    void eliminarDeHoja(NodoAB* nodo, int idx);
    void llenar(NodoAB* nodo, int idx);
    void tomarDePrev(NodoAB* nodo, int idx);
    void tomarDeSig(NodoAB* nodo, int idx);
    void fusionar(NodoAB* nodo, int idx);
    string obtenerPredecesor(NodoAB* nodo, int idx);
    string obtenerSucesor(NodoAB* nodo, int idx);
    void recorrerArbol(NodoAB* nodo, int variable);
};

