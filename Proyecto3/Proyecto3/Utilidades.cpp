
#include "Utilidades.h"

int stringAInt(string str)
{
    stringstream ss(str);
    int num = 0;

    ss >> num;

    return num;
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

wstring strAWstr(string& str)
{
    wstring_convert<codecvt_utf8_utf16<wchar_t>> converter;
    return converter.from_bytes(str);
}
