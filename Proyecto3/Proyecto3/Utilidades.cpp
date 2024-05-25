
#include "Utilidades.h"

int stringAInt(string str)
{
    stringstream ss(str);
    int num = 0;

    ss >> num;

    return num;
}

string intAString(int num)
{
    ostringstream ss;

    ss << num;

    return ss.str();
}

int obtenerLlave(string dato, int pos)
{
    stringstream ss(dato);
    string temp;

    for (int i = 0; i < pos; i++)
    {
        getline(ss, temp, ';');
        ss >> ws;
    }

    getline(ss, temp, ';');
    ss >> ws;

    return stringAInt(temp);
}

string obtenerDato(string dato, int pos)
{
    stringstream ss(dato);
    string temp;

    for (int i = 0; i < pos; i++)
    {
        getline(ss, temp, ';');
        ss >> ws;
    }

    getline(ss, temp, ';');
    ss >> ws;

    return temp;
}

wstring strAWstr(string str)
{
    return wstring(str.begin(), str.end());
}

//void mostrarArboles(ArbolBB& pasillos, ArbolAVL& productos, ArbolRN& marcas, ArbolAA& inventarios,
//    ArbolB& clientes, ArbolB& admins, ArbolB& vendedores, ArbolBB& ciudades)
//{
//    wstring salida = L"";
//
//    salida += L"\nPasillos:\n";
//    pasillos.mostrarArbol(pasillos.raiz, 0, salida);
//
//    salida += L"\nProductos:\n";
//    productos.mostrarArbol(productos.raiz, 0, salida);
//
//    salida += L"\nMarcas:\n";
//    marcas.mostrarArbol(marcas.raiz, 0, salida);
//
//    salida += L"\nInventarios:\n";
//    inventarios.mostrarArbol(inventarios.raiz, 0, salida);
//
//    salida += L"\nClientes:\n";
//    clientes.mostrarArbol(clientes.raiz, salida);
//
//    salida += L"\nAdministradores:\n";
//    admins.mostrarArbol(admins.raiz, salida);
//
//    salida += L"\nVendedores:\n";
//    vendedores.mostrarArbol(vendedores.raiz, salida);
//
//    salida += L"\nCiudades:\n";
//    ciudades.mostrarArbol(ciudades.raiz, 0, salida);
//
//    salida += L"\n";
//
//    LPCWSTR sw = salida.c_str();
//    OutputDebugString(sw);
//}
