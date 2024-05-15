
#include "NodoAB.h"

NodoAB::NodoAB(bool _esHoja) : esHoja(_esHoja), cuenta(0)
{
    for (int i = 0; i < MAX_LLAVES + 1; i++)
        hijos[i] = NULL;
}
