
#include "ArbolBB.h"
#include "Utilidades.h"
#include <string>
#include <Windows.h>
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

void ArbolBB::eliminarNodo(int cod) {
    NodoABB* padre = NULL;
    NodoABB* actual = raiz;

    while (actual != NULL && obtenerLlave(actual->dato, 0) != cod) {
        padre = actual;

        if (cod < obtenerLlave(actual->dato, 0)) {
            actual = actual->Hizq;
        }
        else {
            actual = actual->Hder;
        }
    }

    if (actual == NULL) {
        cout << "Codigo no encontrado en el arbol." << endl;
        return;
    }

    if (actual->Hizq == NULL && actual->Hder == NULL) {
        if (padre != NULL) {
            if (padre->Hizq == actual) {
                padre->Hizq = NULL;
            }
            else {
                padre->Hder = NULL;
            }
        }
        else {
            raiz = NULL;
        }

        delete actual;
    }
    else if (actual->Hizq == NULL) {
        NodoABB* hijo = actual->Hder;

        if (padre != NULL) {
            if (padre->Hizq == actual) {
                padre->Hizq = hijo;
            }
            else {
                padre->Hder = hijo;
            }
        }
        else {
            raiz = hijo;
        }

        delete actual;
    }
    else if (actual->Hder == NULL) {
        NodoABB* hijo = actual->Hizq;

        if (padre != NULL) {
            if (padre->Hizq == actual) {
                padre->Hizq = hijo;
            }
            else {
                padre->Hder = hijo;
            }
        }
        else {
            raiz = hijo;
        }

        delete actual;
    }
    else {
        NodoABB* sucesorPadre = actual;
        NodoABB* sucesor = actual->Hder;

        while (sucesor->Hizq != NULL) {
            sucesorPadre = sucesor;
            sucesor = sucesor->Hizq;
        }

        actual->dato = sucesor->dato;

        if (sucesorPadre->Hizq == sucesor) {
            sucesorPadre->Hizq = sucesor->Hder;
        }
        else {
            sucesorPadre->Hder = sucesor->Hder;
        }

        delete sucesor;
    }
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

wstring ArbolBB::mostrarArbol(NodoABB* nodo, int nivel)
{
    wstring salida;
    
    if (nodo != NULL)
    {
        salida += mostrarArbol(nodo->Hder, nivel + 1);

        wstring nodoStr = L"";

        for (int i = 0; i < nivel; i++)
            nodoStr += L"    ";

        nodoStr += strAWstr(nodo->dato) + L"\r\n";

        salida += nodoStr;

        salida += mostrarArbol(nodo->Hizq, nivel + 1);
    }

    return salida;
}

void ArbolBB::reportePasillosR(NodoABB* nodo, ofstream& archivo)
{
    if (nodo != NULL) {
        reportePasillosR(nodo->Hizq, archivo);

        archivo << "Código de pasillo: " << obtenerLlave(nodo->dato, 0) << "\n";
        archivo << "Nombre: " << obtenerDato(nodo->dato, 1) << "\n";
        archivo << "----------------------------\n";

        reportePasillosR(nodo->Hder, archivo);
    }
}

void ArbolBB::reportePasillos() {
    ofstream archivo("Reporte-Pasillos.txt");
    if (archivo.is_open()) {
        archivo << "Pasillos del supermercado:\n\n";
        reportePasillosR(raiz, archivo);
        archivo.close();
    }
    else {
        cout << "\nNo se pudo abrir el archivo.\n";
    }
}

void ArbolBB::aumentarPasilloVisitado(string cod) {
    string nombreArchivo = "PasillosVisitados.txt";

    // Verifica si el archivo existe
    ifstream archivoLectura(nombreArchivo);
    bool archivoExiste = archivoLectura.is_open();
    archivoLectura.close();

    if (!archivoExiste) {
        // El archivo no existe
        ofstream archivoCreacion(nombreArchivo);
        if (!archivoCreacion.is_open()) {
            cerr << "Error al crear el archivo." << std::endl;
            return;
        }
        archivoCreacion.close();
    }

    // Abrir el archivo en modo lectura
    archivoLectura.open(nombreArchivo);
    if (!archivoLectura.is_open()) {
        cerr << "Error al abrir el archivo para lectura." << std::endl;
        return;
    }

    bool codEncontrado = false;
    string linea;
    while (getline(archivoLectura, linea)) {
        istringstream ss(linea); // Mueve esta línea dentro del bucle
        string codActual;
        while (getline(ss, codActual, ';')) {
            if (codActual == cod) {
                codEncontrado = true;
                break;
            }
        }
        if (codEncontrado) {
            break; // Sal del bucle exterior si encontraste la cédula
        }
    }

    archivoLectura.close();

    if (!codEncontrado) {
        // Abrir el archivo en modo escritura (append)
        ofstream archivoEscritura(nombreArchivo, std::ios::app);
        if (!archivoEscritura.is_open()) {
            cerr << "Error al abrir el archivo para escritura." << endl;
            return;
        }

        archivoEscritura << cod + ";1" << endl; // Agrega ";1" al final de la línea
        archivoEscritura.close();
    }
    else {
        // Incrementar el número junto a la código
        ifstream archivoLectura2(nombreArchivo);
        ofstream archivoTemporal("temp.txt"); // Archivo temporal para escribir los datos actualizados

        if (!archivoLectura2.is_open() || !archivoTemporal.is_open()) {
            cerr << "Error al abrir archivos para lectura/escritura." << endl;
            return;
        }

        string linea;
        while (getline(archivoLectura2, linea)) {
            istringstream ss(linea);
            string codActual;
            getline(ss, codActual, ';');

            if (codActual == cod) {
                // Encontramos la cédula, incrementa el número
                int numero;
                ss >> numero; // Lee el número actual
                ++numero; // Incrementa el número
                archivoTemporal << cod << ";" << numero << endl;
            }
            else {
                // No es la cédula buscada, copia la línea tal cual
                archivoTemporal << linea << endl;
            }
        }

        archivoLectura2.close();
        archivoTemporal.close();

        // Reemplazar el archivo original con el archivo temporal
        remove(nombreArchivo.c_str());
        rename("temp.txt", nombreArchivo.c_str());
    }
}

void ArbolBB::pasilloMasVisitado() {
    string nombreArchivoEntrada = "PasillosVisitados.txt";
    string nombreArchivoSalida = "Reporte-PasilloMasVisitado.txt";

    // Primero, encontrar el número máximo de visitas
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numPasilloMax = 0;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVisitas;
        char separador;
        if (iss >> codPasillo >> separador >> numVisitas) {
            if (numVisitas > numPasilloMax) {
                numPasilloMax = numVisitas;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los pasillos con el número máximo de visitas
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVisitas;
        char separador;
        if (iss >> codPasillo >> separador >> numVisitas) {
            if (numVisitas == numPasilloMax) {
                archivoSalida << "Pasillo más visitado:\n";
                archivoSalida << "Código de pasillo: " << codPasillo << "\n";
                archivoSalida << "Número de visitas: " << numVisitas << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

}

void ArbolBB::pasilloMenosVisitado() {
    string nombreArchivoEntrada = "PasillosVisitados.txt";
    string nombreArchivoSalida = "Reporte-PasilloMenosVisitado.txt";

    // Primero, encontrar el número minimo de visitas
    ifstream archivoEntrada(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    int numPasillosMin = INT_MAX;
    string linea;
    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVisitas;
        char separador;
        if (iss >> codPasillo >> separador >> numVisitas) {
            if (numVisitas < numPasillosMin) {
                numPasillosMin = numVisitas;
            }
        }
    }
    archivoEntrada.close();

    // Segundo, escribir todos los pasillos con el número máximo de visitas
    archivoEntrada.open(nombreArchivoEntrada);
    if (!archivoEntrada.is_open()) {
        cerr << "Error al volver a abrir el archivo: " << nombreArchivoEntrada << endl;
        return;
    }

    ofstream archivoSalida(nombreArchivoSalida);
    if (!archivoSalida.is_open()) {
        cerr << "Error al crear el archivo: " << nombreArchivoSalida << endl;
        archivoEntrada.close();
        return;
    }

    while (getline(archivoEntrada, linea)) {
        istringstream iss(linea);
        int codPasillo, numVisitas;
        char separador;
        if (iss >> codPasillo >> separador >> numVisitas) {
            if (numVisitas == numPasillosMin) {
                archivoSalida << "Pasillo menos visitado:\n";
                archivoSalida << "Código de pasillo: " << codPasillo << "\n";
                archivoSalida << "Número de visitas: " << numVisitas << "\n";
                archivoSalida << "-----------------\n";
            }
        }
    }

    archivoEntrada.close();
    archivoSalida.close();
}

void ArbolBB::inordenR(NodoABB* R, System::Windows::Forms::ComboBox^ comboBox)
{
    if (R == NULL)
        return;
    else
    {
        inordenR(R->Hizq, comboBox);
        comboBox->Items->Add(gcnew System::String(R->dato.c_str()));
        inordenR(R->Hder, comboBox);
    }
}
