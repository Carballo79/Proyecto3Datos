
#include "NodoARN.h"

NodoARN::NodoARN(std::string _dato, NodoARN* _padre) :
    dato(_dato), padre(_padre), Hizq(NULL), Hder(NULL), color(1) {}
