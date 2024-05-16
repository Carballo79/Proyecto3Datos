
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
    padre->llaves[pos] = hijo->llaves[MAX_LLAVES / 2 - 1];
    nuevoHijo->cuenta = MAX_LLAVES / 2;

    for (int i = 0; i < nuevoHijo->cuenta; i++)
    {
        nuevoHijo->llaves[i] = hijo->llaves[i + MAX_LLAVES / 2];
    }

    if (!hijo->esHoja)
    {
        for (int i = 0; i <= nuevoHijo->cuenta; i++)
            nuevoHijo->hijos[i] = hijo->hijos[i + MAX_LLAVES / 2];
    }

    hijo->cuenta = MAX_LLAVES / 2;

    for (int i = padre->cuenta; i > pos; i--)
        padre->hijos[i + 1] = padre->hijos[i];

    padre->hijos[pos + 1] = nuevoHijo;
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
            i--;

        i++;

        if (nodo->hijos[i]->cuenta >= MAX_LLAVES)
        {
            dividirPagina(nodo, i);

            if (llaveDato > obtenerLlave(nodo->llaves[i], 0))
                i++;
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

void ArbolB::mostrarArbol(NodoAB* nodo)
{
    if (nodo != NULL)
    {
        cout << "\t";

        for (int i = nodo->cuenta - 1; i >= 0; i--)
        {
            mostrarArbol(nodo->hijos[i + 1]);
            cout << nodo->llaves[i] << " - \t" << endl << endl;
        }

        mostrarArbol(nodo->hijos[0]);
    }
}

void ArbolB::mostrarArbol() { mostrarArbol(raiz); }

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
