#include "Nodo.h"

Nodo::Nodo()
{
    dato = 0;
    next= nullptr;
}

Nodo::~Nodo()
{
    //dtor
}

Nodo::Nodo(const Nodo& other)
{
    dato = other.dato;
    next = other.next;
}

Nodo& Nodo::operator=(const Nodo& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
