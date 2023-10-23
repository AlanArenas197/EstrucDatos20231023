#include <iostream>
#include "Nodo.h"

using namespace std;

int main()
{
    //int test;
    Nodo *ancla=new Nodo();
    Nodo *tmp, *nuevo;
    tmp = ancla;
    nuevo = new Nodo();
    tmp->Setnext(nuevo);
    cout << "El valor de la ancla es: " << ancla << endl;
    cout << "El valor de nuevo es: " << nuevo << endl;
    /*cout << "Prueba: ";
    cin >> test;
    ancla->Setdato(test);*/
    /*ancla->Setdato(45);
    cout << "El valor a donde apunta es: " << ancla->Getdato() << endl;*/
    while(tmp!=nullptr)
    {
        tmp->Setdato(56);
        cout << "El valor del nodo es: " << tmp->Getdato() << endl;
        tmp = tmp->Getnext();
    }
    return 0;
}
