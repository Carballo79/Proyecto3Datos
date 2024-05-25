
#include "ArbolB.h"
#include "Utilidades.h"

#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

ArbolB::ArbolB() : raiz(NULL) {}

void ArbolB::insertarNodo(string dato)
{
    if (raiz == NULL)
    {
        raiz = new NodoAB(true);
        raiz->llaves[0] = dato;
        raiz->cuenta = 1;
    }
    else
    {
        if (raiz->cuenta >= MAX_LLAVES)
        {
            NodoAB* nuevaRaiz = new NodoAB(false);
            nuevaRaiz->hijos[0] = raiz;
            dividirPagina(nuevaRaiz, 0);
            raiz = nuevaRaiz;
        }

        meterHoja(raiz, dato);
    }
}

void ArbolB::dividirPagina(NodoAB* padre, int pos)
{
    NodoAB* hijo = padre->hijos[pos];
    NodoAB* nuevoHijo = new NodoAB(hijo->esHoja);
    int mitad = MAX_LLAVES / 2;

    // Mover las llaves y los hijos al nuevo nodo
    for (int i = 0; i < mitad; i++)
    {
        nuevoHijo->llaves[i] = hijo->llaves[i + mitad];
    }

    if (!hijo->esHoja)
    {
        for (int i = 0; i <= mitad; i++)
        {
            nuevoHijo->hijos[i] = hijo->hijos[i + mitad];
        }
    }

    hijo->cuenta = mitad - 1;
    nuevoHijo->cuenta = mitad;

    for (int i = padre->cuenta; i > pos; i--)
    {
        padre->hijos[i + 1] = padre->hijos[i];
        padre->llaves[i] = padre->llaves[i - 1];
    }

    padre->hijos[pos + 1] = nuevoHijo;
    padre->llaves[pos] = hijo->llaves[mitad - 1];
    padre->cuenta++;
}

void ArbolB::meterHoja(NodoAB* nodo, string dato)
{
    int llaveDato = obtenerLlave(dato, 0);
    int i = nodo->cuenta - 1;

    if (nodo->esHoja)
    {
        while ((i >= 0) && (llaveDato < obtenerLlave(nodo->llaves[i], 0)))
        {
            nodo->llaves[i + 1] = nodo->llaves[i];
            i--;
        }

        nodo->llaves[i + 1] = dato;
        nodo->cuenta++;
    }
    else
    {
        while ((i >= 0) && (llaveDato < obtenerLlave(nodo->llaves[i], 0)))
        {
            i--;
        }

        i++;

        if (nodo->hijos[i]->cuenta >= MAX_LLAVES)
        {
            dividirPagina(nodo, i);

            if (llaveDato > obtenerLlave(nodo->llaves[i], 0))
            {
                i++;
            }
        }

        meterHoja(nodo->hijos[i], dato);
    }
}

bool ArbolB::buscarNodo(NodoAB* nodo, string dato)
{
    int llaveNodo = obtenerLlave(dato, 0);

    if (nodo == NULL)
        return false;

    int i = 0;
    while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
        i++;

    if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        return true;
    else if (nodo->esHoja)
        return false;
    else
        return buscarNodo(nodo->hijos[i], dato);
}

bool ArbolB::buscar(string dato) { return buscarNodo(raiz, dato); }

NodoAB* ArbolB::buscar(NodoAB* nodo, string dato)
{
    int llaveNodo = obtenerLlave(dato, 0);

    if (nodo == NULL)
        return NULL;

    int i = 0;
    while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
        i++;

    if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        return nodo;
    else if (nodo->esHoja)
        return NULL;
    else
        return buscar(nodo->hijos[i], dato);
}

void ArbolB::modificarNodo(string nuevoDato)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(nuevoDato, 0);

    while (nodo != NULL)
    {
        int i = 0;
        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            nodo->llaves[i] = nuevoDato;
            cout << "\nCliente modificado exitosamente." << endl;
            cout << "\nCliente modificado:\n" << nodo->llaves[i] << endl << endl;
            return;
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }
}

void ArbolB::crearClientes(ArbolBB& ciudades)
{
    string linea, cedula, nombre, codCiudad, telefono, correo, cliente;

    ifstream archivo("Clientes.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Clientes.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, cedula, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;
        getline(ss, codCiudad, ';');
        ss >> ws;
        getline(ss, telefono, ';');
        ss >> ws;
        getline(ss, correo, ';');
        ss >> ws;

        cliente = cedula + "; " + nombre + "; " + codCiudad + "; "
            + telefono + "; " + correo;

        if (!buscar(cedula))
        {
            if (ciudades.existeNodo(codCiudad))
                insertarNodo(cliente);
        }
    }

    archivo.close();
}

void ArbolB::crearAdmins(ArbolBB& ciudades)
{
    string linea, cedula, nombre, codCiudad, telefono, correo, admin;

    ifstream archivo("Administradores.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Administradores.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, cedula, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;
        getline(ss, codCiudad, ';');
        ss >> ws;
        getline(ss, telefono, ';');
        ss >> ws;
        getline(ss, correo, ';');
        ss >> ws;

        admin = cedula + "; " + nombre + "; " + codCiudad + "; "
            + telefono + "; " + correo;

        if (ciudades.existeNodo(codCiudad))
        {
            if (!buscar(cedula))
                insertarNodo(admin);
        }
    }

    archivo.close();
}

void ArbolB::crearVendedores()
{
    string linea, cedula, nombre, vendedor;

    ifstream archivo("Vendedores.txt");

    if (!archivo)
    {
        cout << "\n\tNo se pudo abrir el archivo Vendedores.txt\n" << endl;
        return;
    }

    while (getline(archivo, linea))
    {
        // Ignora l�neas vac�as
        if (linea.empty() || (linea.find_first_not_of(" \t\r\n") == string::npos))
            continue;

        istringstream ss(linea);

        getline(ss, cedula, ';');
        ss >> ws;
        getline(ss, nombre, ';');
        ss >> ws;

        vendedor = cedula + "; " + nombre;

        if (!buscar(cedula))
            insertarNodo(vendedor);
    }

    archivo.close();
}

string ArbolB::obtenerNodo(string dato)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(dato, 0);

    while (nodo != NULL)
    {
        int i = 0;

        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            return nodo->llaves[i];
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }

    return "";
}

wstring ArbolB::mostrarArbol(NodoAB* nodo, int nivel)
{
    wstring salida;

    if (nodo != NULL)
    {
        for (int i = nodo->cuenta; i >= 0; i--)
        {
            if (i < nodo->cuenta + 1)
                salida += mostrarArbol(nodo->hijos[i], nivel + 1);

            if (i > 0 && i <= nodo->cuenta)
            {
                wstring nodoStr = L"";

                for (int j = 0; j < nivel; j++)
                    nodoStr += L"    ";

                nodoStr += strAWstr(nodo->llaves[i - 1]) + L"\r\n";

                salida += nodoStr;
            }
        }
    }

    return salida;
}

void ArbolB::reporteClientes()
{
    ofstream archivo("Reporte-Clientes.txt");

    if (archivo.is_open())
    {
        archivo << "Reporte de clientes:" << endl;
        reporteClientes(raiz, archivo);

        archivo.close();
        cout << "\tArchivo creado exitosamente." << endl;
    }
    else
        cout << "\tNo se pudo abrir o crear el archivo." << endl;
}

void ArbolB::reporteClientes(NodoAB* nodo, ofstream& archivo)
{
    if (nodo != NULL)
    {
        for (int i = 0; i < nodo->cuenta; i++)
            archivo << "\nCédula: " << obtenerDato(nodo->llaves[i], 0)
            << "\nNombre: " << obtenerDato(nodo->llaves[i], 1) << endl;

        for (int i = 0; i <= nodo->cuenta; i++)
            reporteClientes(nodo->hijos[i], archivo);
    }
}

string ArbolB::buscarMostrarContacto(string cedula)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(cedula, 0);
    string resultado = "";

    while (nodo != NULL)
    {
        int i = 0;

        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            resultado = nodo->llaves[i];
            return resultado;
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }

    return resultado; // Devuelve un string vacío si no se encuentra la cédula
}

void ArbolB::aumentarNumFacturas(string cedula)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(cedula, 0);

    while (nodo != NULL)
    {
        int i = 0;

        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            stringstream ss(nodo->llaves[i]);
            string temp, numFacturas;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Incrementar el número de facturas
            numFacturas = to_string(stoi(datos[5]) + 1);
            datos[5] = numFacturas;

            // Reconstruir los datos del cliente
            nodo->llaves[i] = "";
            for (size_t j = 0; j < datos.size(); ++j)
            {
                nodo->llaves[i] += datos[j];
                if (j < datos.size() - 1)
                    nodo->llaves[i] += ";";
            }

            return;
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }
}

void ArbolB::aumentarNumCompras(string cedula)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(cedula, 0);

    while (nodo != NULL)
    {
        int i = 0;

        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            stringstream ss(nodo->llaves[i]);
            string temp, numCompras;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Incrementar el número de compras
            numCompras = to_string(stoi(datos[6]) + 1);
            datos[6] = numCompras;

            // Reconstruir los datos del cliente
            nodo->llaves[i] = "";
            for (size_t j = 0; j < datos.size(); ++j)
            {
                nodo->llaves[i] += datos[j];
                if (j < datos.size() - 1)
                    nodo->llaves[i] += ";";
            }

            return;
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }
}
string ArbolB::conseguirContFacturas(string cedula)
{
    NodoAB* nodo = raiz;
    int llaveNodo = obtenerLlave(cedula, 0);

    while (nodo != NULL)
    {
        int i = 0;

        while ((i < nodo->cuenta) && (llaveNodo > obtenerLlave(nodo->llaves[i], 0)))
            i++;

        if ((i < nodo->cuenta) && (llaveNodo == obtenerLlave(nodo->llaves[i], 0)))
        {
            stringstream ss(nodo->llaves[i]);
            string temp, numFacturas;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Obtener el número de facturas
            numFacturas = datos[5];

            return numFacturas;
        }
        else if (nodo->esHoja)
            break;
        else
            nodo = nodo->hijos[i];
    }

    return ""; // Devuelve un string vacío si no se encuentra la cédula
}
void ArbolB::reporteClienteMasCompras(NodoAB* nodo, string& clienteMayor, int& maxNum)
{
    if (nodo != NULL)
    {
        for (int i = 0; i < nodo->cuenta; ++i)
        {
            stringstream ss(nodo->llaves[i]);
            string temp;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Comprobar si el último número es mayor que el máximo actual
            int num = stoi(datos[6]);
            if (num > maxNum)
            {
                maxNum = num;
                clienteMayor = nodo->llaves[i];
            }
        }

        // Recorrer los hijos del nodo
        for (int i = 0; i <= nodo->cuenta; ++i)
            reporteClienteMasCompras(nodo->hijos[i], clienteMayor, maxNum);
    }
}

void ArbolB::reporteClienteMasCompras()
{
    string cliente = "";
    int maxCompras = -1;
    reporteClienteMasCompras(raiz, cliente, maxCompras);

    ofstream archivo("Reporte-Cliente mas compras.txt");
    if (archivo.is_open())
    {
        stringstream ss(cliente);
        string temp, cedula, nombre, codigoCiudad, telefono, correo, numFacturas, numCompras;

        getline(ss, cedula, ';');
        getline(ss, nombre, ';');
        getline(ss, codigoCiudad, ';');
        getline(ss, telefono, ';');
        getline(ss, correo, ';');
        getline(ss, numFacturas, ';');
        getline(ss, numCompras, ';');

        archivo << "Cliente que mas compro:\n";
        archivo << "Cedula:" << cedula << "\n";
        archivo << "Nombre: " << nombre << "\n";
        archivo << "Codigo de ciudad: " << codigoCiudad << "\n";
        archivo << "Numero de telefono: " << telefono << "\n";
        archivo << "Correo: " << correo << "\n";
        archivo << "Cantidad de facturas: " << numFacturas << "\n";
        archivo << "Cantidad de compras:" << numCompras << "\n";

        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo Reporte-Cliente mas compras.txt" << endl;
    }
}
void ArbolB::reporteClienteMenosCompras()
{
    string clienteMenor = "";
    int minNum = INT_MAX;
    reporteClienteMenosCompras(raiz, clienteMenor, minNum);

    ofstream archivo("Reporte-Cliente menos compras.txt");
    if (archivo.is_open())
    {
        stringstream ss(clienteMenor);
        string temp, cedula, nombre, codigoCiudad, telefono, correo, numFacturas, numCompras;

        getline(ss, cedula, ';');
        getline(ss, nombre, ';');
        getline(ss, codigoCiudad, ';');
        getline(ss, telefono, ';');
        getline(ss, correo, ';');
        getline(ss, numFacturas, ';');
        getline(ss, numCompras, ';');

        archivo << "Cliente que menos compro:\n";
        archivo << "Cedula:" << cedula << "\n";
        archivo << "Nombre: " << nombre << "\n";
        archivo << "Codigo de ciudad: " << codigoCiudad << "\n";
        archivo << "Numero de telefono: " << telefono << "\n";
        archivo << "Correo: " << correo << "\n";
        archivo << "Cantidad de facturas: " << numFacturas << "\n";
        archivo << "Cantidad de compras:" << numCompras << "\n";

        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo Reporte-Cliente menos compras.txt" << endl;
    }
}

void ArbolB::reporteClienteMenosCompras(NodoAB* nodo, string& clienteMenor, int& minNum)
{
    if (nodo != NULL)
    {
        for (int i = 0; i < nodo->cuenta; ++i)
        {
            stringstream ss(nodo->llaves[i]);
            string temp;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Comprobar si el último número es menor que el mínimo actual
            int num = stoi(datos[6]);
            if (num < minNum)
            {
                minNum = num;
                clienteMenor = nodo->llaves[i];
            }
        }

        // Recorrer los hijos del nodo
        for (int i = 0; i <= nodo->cuenta; ++i)
            reporteClienteMenosCompras(nodo->hijos[i], clienteMenor, minNum);
    }
}
void ArbolB::reporteClienteMasFacturas()
{
    string clienteMayor = "";
    int maxNum = -1; // Inicializar con el valor más pequeño posible
    reporteClienteMasFacturas(raiz, clienteMayor, maxNum);

    ofstream archivo("Reporte-Cliente que mas Facturo.txt");
    if (archivo.is_open())
    {
        stringstream ss(clienteMayor);
        string temp, cedula, nombre, codigoCiudad, telefono, correo, numFacturas, numCompras;

        getline(ss, cedula, ';');
        getline(ss, nombre, ';');
        getline(ss, codigoCiudad, ';');
        getline(ss, telefono, ';');
        getline(ss, correo, ';');
        getline(ss, numFacturas, ';');
        getline(ss, numCompras, ';');

        archivo << "Cliente que mas facturo:\n";
        archivo << "Cedula:" << cedula << "\n";
        archivo << "Nombre: " << nombre << "\n";
        archivo << "Codigo de ciudad: " << codigoCiudad << "\n";
        archivo << "Numero de telefono: " << telefono << "\n";
        archivo << "Correo: " << correo << "\n";
        archivo << "Cantidad de facturas: " << numFacturas << "\n";
        archivo << "Cantidad de compras:" << numCompras << "\n";

        archivo.close();
    }
    else
    {
        cout << "No se pudo abrir el archivo Reporte-Cliente que mas Facturo.txt" << endl;
    }
}

void ArbolB::reporteClienteMasFacturas(NodoAB* nodo, string& clienteMayor, int& maxNum)
{
    if (nodo != NULL)
    {
        for (int i = 0; i < nodo->cuenta; ++i)
        {
            stringstream ss(nodo->llaves[i]);
            string temp;
            vector<string> datos;

            // Extraer todos los datos
            while (getline(ss, temp, ';'))
                datos.push_back(temp);

            // Comprobar si el penúltimo número es mayor que el máximo actual
            int num = stoi(datos[5]);
            if (num > maxNum)
            {
                maxNum = num;
                clienteMayor = nodo->llaves[i];
            }
        }

        // Recorrer los hijos del nodo
        for (int i = 0; i <= nodo->cuenta; ++i)
            reporteClienteMasFacturas(nodo->hijos[i], clienteMayor, maxNum);
    }
}

void ArbolB::eliminar(string cedula) {
    if (!buscar(cedula)) {
        cout << "El dato a eliminar no existe en el árbol." << endl;
        return;
    }
    eliminarNodo(raiz, cedula);

    // Si la raíz tiene 0 llaves, hacer su único hijo la nueva raíz
    // si tiene un hijo, de lo contrario asignar NULL.
    if (raiz->cuenta == 0) {
        NodoAB* tmp = raiz;
        if (raiz->esHoja)
            raiz = NULL;
        else
            raiz = raiz->hijos[0];

        // Liberar la antigua raíz
        delete tmp;
    }
    return;
}

void ArbolB::eliminarNodo(NodoAB* nodo, string cedula) {
    int idx = 0;
    while (idx < nodo->cuenta && obtenerLlave(nodo->llaves[idx], 0) < obtenerLlave(cedula, 0))
        ++idx;

    // Si la llave a ser eliminada se encuentra en este nodo
    if (idx < nodo->cuenta && obtenerLlave(nodo->llaves[idx], 0) == obtenerLlave(cedula, 0)) {
        if (nodo->esHoja)
            eliminarDeHoja(nodo, idx);
        else
            eliminarDeNoHoja(nodo, idx);
    }
    else {
        // Si este nodo es una hoja, entonces la llave no está en el árbol
        if (nodo->esHoja) {
            cout << "La llave " << cedula << " no existe en el árbol." << endl;
            return;
        }

        // La llave a ser eliminada está presente en el subárbol con raíz en este nodo
        // La bandera indica si la llave está presente en el subárbol con raíz en el último hijo de este nodo
        bool flag = ((idx == nodo->cuenta) ? true : false);

        // Si el hijo donde la llave se supone que existe tiene menos de t llaves, llenamos ese hijo
        if (nodo->hijos[idx]->cuenta < MAX_LLAVES / 2)
            llenar(nodo, idx);

        // Si el último hijo ha sido fusionado, se debe haber fusionado con el anterior hijo y
        // por lo tanto debemos recursivamente eliminar la llave en el (idx-1)ésimo hijo. De lo contrario,
        // debemos recursivamente eliminar la llave en el (idx)ésimo hijo.
        if (flag && idx > nodo->cuenta)
            eliminarNodo(nodo->hijos[idx - 1], cedula);
        else
            eliminarNodo(nodo->hijos[idx], cedula);
    }
    return;
}

// Un método de utilidad para eliminar la llave k en el subárbol con raíz en este nodo
// El supuesto es que el nodo debe tener al menos t llaves
void ArbolB::eliminarDeNoHoja(NodoAB* nodo, int idx) {
    string k = nodo->llaves[idx];

    // Si el hijo que precede a k (nodo->C[idx]) tiene al menos t llaves,
    // entonces encuentra el predecesor 'pred' de k en el subárbol con raíz en
    // C[idx]. Reemplaza k por pred. Recursivamente borra pred
    // en C[idx]
    if (nodo->hijos[idx]->cuenta >= MAX_LLAVES / 2) {
        string pred = obtenerPredecesor(nodo, idx);
        nodo->llaves[idx] = pred;
        eliminarNodo(nodo->hijos[idx], pred);
    }

    // Si el hijo nodo->C[idx] tiene menos de t llaves, entonces examina C[idx+1].
    // Si C[idx+1] tiene al menos t llaves, entonces encuentra el sucesor 'succ' de k en
    // el subárbol con raíz en C[idx+1]
    // Reemplaza k por succ
    // Recursivamente borra succ en C[idx+1]
    else if (nodo->hijos[idx + 1]->cuenta >= MAX_LLAVES / 2) {
        string succ = obtenerSucesor(nodo, idx);
        nodo->llaves[idx] = succ;
        eliminarNodo(nodo->hijos[idx + 1], succ);
    }

    // Si tanto C[idx] como C[idx+1] tienen t-1 llaves, fusiona k y todo C[idx+1]
    // en C[idx]
    // Ahora C[idx] contiene 2t-1 llaves
    // Libera C[idx+1] y recursivamente borra k en C[idx]
    else {
        fusionar(nodo, idx);
        eliminarNodo(nodo->hijos[idx], k);
    }
    return;
}

// Para eliminar yd de nodo->C[idx]
void ArbolB::eliminarDeHoja(NodoAB* nodo, int idx) {
    // Mueve todas las llaves después de idx en el nodo actual una posición atrás
    for (int i = idx + 1; i < nodo->cuenta; ++i)
        nodo->llaves[i - 1] = nodo->llaves[i];

    // Reduce la cuenta de llaves
    nodo->cuenta--;

    return;
}

// Una función para llenar el hijo C[idx] del nodo actual que tiene menos de t-1 llaves
void ArbolB::llenar(NodoAB* nodo, int idx) {
    // Si el hijo anterior (C[idx-1]) tiene más de t-1 llaves, toma una llave de ese hijo
    if (idx != 0 && nodo->hijos[idx - 1]->cuenta >= MAX_LLAVES / 2)
        tomarDePrev(nodo, idx);

    // Si el siguiente hijo (C[idx+1]) tiene más de t-1 llaves, toma una llave de ese hijo
    else if (idx != nodo->cuenta && nodo->hijos[idx + 1]->cuenta >= MAX_LLAVES / 2)
        tomarDeSig(nodo, idx);

    // Fusiona C[idx] con su hermano
    // Si C[idx] es el último hijo, fusiona con su hermano anterior
    // De lo contrario, fusiona con su siguiente hermano (C[idx+1])
    else {
        if (idx != nodo->cuenta)
            fusionar(nodo, idx);
        else
            fusionar(nodo, idx - 1);
    }
    return;
}

// Una función para tomar una llave del nodo->C[idx-1] y insertarla
// en C[idx]
void ArbolB::tomarDePrev(NodoAB* nodo, int idx) {
    NodoAB* hijo = nodo->hijos[idx];
    NodoAB* hermano = nodo->hijos[idx - 1];

    // La última llave de C[idx-1] sube al padre y la llave[idx-1]
    // del padre se inserta como la primera llave en C[idx]. Así, el hermano pierde una
    // llave y el hijo gana una llave

    // Mover todas las llaves en C[idx] una posición adelante
    for (int i = hijo->cuenta - 1; i >= 0; --i)
        hijo->llaves[i + 1] = hijo->llaves[i];

    // Si C[idx] no es una hoja, mover todos sus hijos una posición adelante
    if (!hijo->esHoja) {
        for (int i = hijo->cuenta; i >= 0; --i)
            hijo->hijos[i + 1] = hijo->hijos[i];
    }

    // Establecer la primera llave del hijo igual a las llaves[idx-1] del nodo actual
    hijo->llaves[0] = nodo->llaves[idx - 1];

    // Mover el último hijo del hermano como primer hijo de C[idx]
    if (!hijo->esHoja)
        hijo->hijos[0] = hermano->hijos[hermano->cuenta];

    // Mover la llave del hermano al padre
    // Esto reduce el número de llaves en el hermano
    nodo->llaves[idx - 1] = hermano->llaves[hermano->cuenta - 1];

    hijo->cuenta += 1;
    hermano->cuenta -= 1;

    return;
}

void ArbolB::tomarDeSig(NodoAB* nodo, int idx) {
    NodoAB* hijo = nodo->hijos[idx];
    NodoAB* hermano = nodo->hijos[idx + 1];

    // Las llaves[idx] se inserta como la última llave en C[idx]
    hijo->llaves[(hijo->cuenta)] = nodo->llaves[idx];

    // El primer hijo del hermano se inserta como el último hijo en C[idx]
    if (!(hijo->esHoja))
        hijo->hijos[(hijo->cuenta) + 1] = hermano->hijos[0];

    // La primera llave del hermano se inserta en llaves[idx]
    nodo->llaves[idx] = hermano->llaves[0];

    // Mover todas las llaves en el hermano una posición atrás
    for (int i = 1; i < hermano->cuenta; ++i)
        hermano->llaves[i - 1] = hermano->llaves[i];

    // Mover los hijos del hermano una posición atrás
    if (!hermano->esHoja) {
        for (int i = 1; i <= hermano->cuenta; ++i)
            hermano->hijos[i - 1] = hermano->hijos[i];
    }

    // Incrementar y decrementar la cuenta de llaves de C[idx] y C[idx+1] respectivamente
    hijo->cuenta += 1;
    hermano->cuenta -= 1;

    return;
}

// Una función para fusionar idx-th y (idx+1)th hijos de C
void ArbolB::fusionar(NodoAB* nodo, int idx) {
    NodoAB* hijo = nodo->hijos[idx];
    NodoAB* hermano = nodo->hijos[idx + 1];

    // Tomar una llave del nodo actual e insertarla en la posición (t-1) en C[idx]
    hijo->llaves[MAX_LLAVES / 2 - 1] = nodo->llaves[idx];

    // Copiar las llaves de C[idx+1] a C[idx] al final
    for (int i = 0; i < hermano->cuenta; ++i)
        hijo->llaves[i + MAX_LLAVES / 2] = hermano->llaves[i];

    // Copiar los hijos del hermano a C[idx]
    if (!hijo->esHoja) {
        for (int i = 0; i <= hermano->cuenta; ++i)
            hijo->hijos[i + MAX_LLAVES / 2] = hermano->hijos[i];
    }

    // Mover todas las llaves después de idx en el nodo actual una posición atrás - para llenar el vacío creado al mover llaves[idx] a C[idx]
    for (int i = idx + 1; i < nodo->cuenta; ++i)
        nodo->llaves[i - 1] = nodo->llaves[i];

    // Mover los hijos después de (idx+1) en el nodo actual una posición atrás
    for (int i = idx + 2; i <= nodo->cuenta; ++i)
        nodo->hijos[i - 1] = nodo->hijos[i];

    // Actualizar la cuenta de llaves de hijo y nodo actual
    hijo->cuenta += hermano->cuenta + 1;
    nodo->cuenta--;

    // Liberar la memoria ocupada por hermano
    delete(hermano);

    return;
}

string ArbolB::obtenerPredecesor(NodoAB* nodo, int idx) {
    // Mover al nodo más a la derecha en el subárbol izquierdo
    NodoAB* cur = nodo->hijos[idx];
    while (!cur->esHoja)
        cur = cur->hijos[cur->cuenta];

    // Devolver la última llave del nodo hoja
    return cur->llaves[cur->cuenta - 1];
}

string ArbolB::obtenerSucesor(NodoAB* nodo, int idx) {
    // Mover al nodo más a la izquierda en el subárbol derecho
    NodoAB* cur = nodo->hijos[idx + 1];
    while (!cur->esHoja)
        cur = cur->hijos[0];

    // Devolver la primera llave del nodo hoja
    return cur->llaves[0];
}

void ArbolB::recorrerArbol(NodoAB* nodo, int variable) {
    if (nodo == NULL)
        return;

    // Variable para indicar si se eliminó algún nodo
    bool eliminado = false;

    // Verificar el nodo actual con la variable y eliminar si es necesario
    for (int i = 0; i < nodo->cuenta; ++i) {
        if (obtenerLlave(nodo->llaves[i], 2) == variable) {
            eliminarNodo(nodo, obtenerDato(nodo->llaves[i], 0));
            eliminado = true;
            break;
        }
    }
    if (eliminado) {
        // Si se eliminó un nodo, continuar el recorrido desde el nodo actual
        recorrerArbol(nodo, variable);
        return; // Importante: después de volver desde el nodo actual, terminar la ejecución para evitar procesamiento adicional
    }

    // Recorrer los hijos del nodo actual
    if (!nodo->esHoja) {
        for (int i = 0; i <= nodo->cuenta; ++i) {
            recorrerArbol(nodo->hijos[i], variable);
        }
    }
}
