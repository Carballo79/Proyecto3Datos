
#include "ArbolBB.h"
#include "Utilidades.h"
#include <string>
#include <fstream>
#include <sstream>

ArbolBB::ArbolBB() : raiz(NULL) {}

NodoABB* ArbolBB::insertarBinario(NodoABB* nodo, string dato)
{
    if (nodo == NULL)
        return (new NodoABB(dato));

    if (obtenerLlave(dato, 0) < obtenerLlave(nodo->dato, 0))
        nodo->Hizq = insertarBinario(nodo->Hizq, dato);
    else
        nodo->Hder = insertarBinario(nodo->Hder, dato);

    return nodo;
}

void ArbolBB::insertarNodo(string dato) { raiz = insertarBinario(raiz, dato); }

NodoABB* ArbolBB::buscarNodo(NodoABB* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    int llaveNodo = obtenerLlave(dato, 0);

    if (llaveNodo == obtenerLlave(nodo->dato, 0))
        return nodo;
    else if (llaveNodo < obtenerLlave(nodo->dato, 0))
        return buscarNodo(nodo->Hizq, dato);
    else
        return buscarNodo(nodo->Hder, dato);
}

bool ArbolBB::existeNodo(string dato) { return buscarNodo(raiz, dato) != NULL; }

NodoABB* ArbolBB::filtrarDato(NodoABB* nodo, string dato)
{
    if (nodo == NULL)
        return NULL;

    if (dato == obtenerDato(nodo->dato, 0))
        return nodo;

    if (obtenerLlave(dato, 0) < stringAInt(obtenerDato(nodo->dato, 0)))
        return filtrarDato(nodo->Hizq, dato);

    return filtrarDato(nodo->Hder, dato);
}

void ArbolBB::modificarNodo(string llaveNodo, string nuevoDato)
{
    NodoABB* nodo = buscarNodo(raiz, llaveNodo);

    if (nodo != NULL)
    {
        nodo->dato = llaveNodo + "; " + nuevoDato;

        cout << "\n\tPasillo modificado exitosamente:" << endl;
        cout << "\n\tPasillo modificado:\n\t" << nodo->dato << endl << endl;
    }
    else
        cout << "\n\tPasillo no encontrado en el arbol.\n" << endl;
}

void ArbolBB::crearPasillos()
{
    string linea, codPasillo, nombre, pasillo;

    ifstream archivo("Pasillos.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Pasillos.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, codPasillo, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;

        pasillo = codPasillo + "; " + nombre;

        if (!existeNodo(codPasillo))
            insertarNodo(pasillo);
    }

    archivo.close();
}

void ArbolBB::crearCiudades()
{
    string linea, codCiudad, nombre, ciudad;

    ifstream archivo("Ciudades.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Ciudades.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, codCiudad, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;

        ciudad = codCiudad + "; " + nombre;

        if (!existeNodo(codCiudad))
            insertarNodo(ciudad);
    }
}

void ArbolBB::mostrarArbol(NodoABB* nodo, int nivel, wstring& salida)
{
    if (nodo != NULL)
    {
        mostrarArbol(nodo->Hder, nivel + 1, salida);

        // Construye la cadena con los datos del nodo
        wstring nodoStr = L"";
        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        // Agrega el dato del nodo a la cadena
        nodoStr += strAWstr(nodo->dato) + L"\r\n";

        // Agrega la cadena del nodo a la salida
        salida += nodoStr;

        mostrarArbol(nodo->Hizq, nivel + 1, salida);
    }
}

string ArbolBB::buscarMasVisitado(NodoABB* nodo)
{
    if (nodo == NULL)
        return "";

    string masVisitadoIzquierdo = buscarMasVisitado(nodo->Hizq);
    string masVisitadoDerecho = buscarMasVisitado(nodo->Hder);

    int visitasRaiz = obtenerLlave(nodo->dato, 0);
    int visitasIzquierdo = masVisitadoIzquierdo.empty() ? -1 : obtenerLlave(nodo->dato, 0);
    int visitasDerecho = masVisitadoDerecho.empty() ? -1 :
        obtenerLlave(nodo->dato, 0);

    if (visitasRaiz >= visitasIzquierdo && visitasRaiz >= visitasDerecho) {
        return "\nNo hay pasillos mas visitados.";
    }
    else if (visitasIzquierdo >= visitasRaiz && visitasIzquierdo >= visitasDerecho) {
        return masVisitadoIzquierdo;
    }
    else {
        return masVisitadoDerecho;
    }
}

string ArbolBB::buscarMasVisitado() { return buscarMasVisitado(raiz); }

string ArbolBB::buscarMenosVisitado(NodoABB* nodo) {
    if (nodo == NULL) {
        return "";
    }

    string menosVisitadoIzquierdo = buscarMenosVisitado(nodo->Hizq);
    string menosVisitadoDerecho = buscarMenosVisitado(nodo->Hder);

    int visitasRaiz = obtenerLlave(nodo->dato, 0);
    int visitasIzquierdo = menosVisitadoIzquierdo.empty() ? INT_MAX : obtenerLlave(nodo->dato, 0);
    int visitasDerecho = menosVisitadoDerecho.empty() ? INT_MAX : obtenerLlave(nodo->dato, 0);

    if (visitasRaiz <= visitasIzquierdo && visitasRaiz <= visitasDerecho) {
        return "\nNo hay pasillos menos visitados.";
    }
    else if (visitasIzquierdo <= visitasRaiz && visitasIzquierdo <= visitasDerecho) {
        return menosVisitadoIzquierdo;
    }
    else {
        return menosVisitadoDerecho;
    }
}

string ArbolBB::buscarMenosVisitado() { return buscarMenosVisitado(raiz); }

void ArbolBB::crearReportePasillos(NodoABB* nodo, ofstream& archivo)
{
    if (nodo != NULL) {
        crearReportePasillos(nodo->Hizq, archivo);

        archivo << "Codigo de pasillo: " << obtenerLlave(nodo->dato, 0) << "\n";
        archivo << "Nombre: " << obtenerDato(nodo->dato, 1) << "\n";

        crearReportePasillos(raiz->Hder, archivo);
    }
}

void ArbolBB::crearReportePasillos() {
    // Crear el archivo con la fecha en el nombre
    ofstream archivo("Reporte-Pasillos.txt");
    if (archivo.is_open()) {
        archivo << "Pasillos del supermercado:\n";
        crearReportePasillos(raiz, archivo);
        archivo.close();
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
    }
}

void ArbolBB::crearReportePasilloMasVisitado()
{
    string pasilloMayor = buscarMasVisitado();

    ofstream archivo("Reporte-Pasillo mas visitado.txt");
    if (archivo.is_open()) {
        size_t pos1 = pasilloMayor.find(";");
        size_t pos2 = pasilloMayor.find(";", pos1 + 1);
        string codigo = pasilloMayor.substr(0, pos1);
        string nombre = pasilloMayor.substr(pos1 + 1, pos2 - pos1 - 1);
        int visitas = stoi(pasilloMayor.substr(pos2 + 1));


        archivo << "Pasillo mas visitado\n";
        archivo << "Codigo: " << codigo << "\n";
        archivo << "Nombre: " << nombre << "\n";
        archivo << "Cantidad de visitas: " << visitas << "\n";
        archivo.close();
        cout << "\nReporte generado existosamente." << endl;
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
    }
}

void ArbolBB::crearReportePasilloMenosVisitado()
{
    string pasilloMenor = buscarMenosVisitado();

    // Crear el archivo con la fecha en el nombre
    ofstream archivo("Reporte-Pasillo mas visitado.txt");
    if (archivo.is_open()) {
        size_t pos1 = pasilloMenor.find(";");
        size_t pos2 = pasilloMenor.find(";", pos1 + 1);
        string codigo = pasilloMenor.substr(0, pos1);
        string nombre = pasilloMenor.substr(pos1 + 1, pos2 - pos1 - 1);
        int visitas = stoi(pasilloMenor.substr(pos2 + 1));

        // Escribir la información en el archivo
        archivo << "Pasillo menos visitado\n";
        archivo << "Codigo: " << codigo << "\n";
        archivo << "Nombre: " << nombre << "\n";
        archivo << "Cantidad de visitas: " << visitas << "\n";
        archivo.close();
        cout << "\nReporte generado existosamente." << endl;
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
    }
}
