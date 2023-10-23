#include <iostream>
using namespace std;
int main(){
    int *x;
    int **z;
    int y = 56;
    int arreglo[5];//={'a','b','c','d','e'};
    z=&x;
    x=&y;
    //arreglo=&x;
    cout << "El valor de x es: " << x << endl;
    cout << "El valor donde apunta x: " << *x << endl;
    cout << "La direccion de x:" << &x << endl;
    cout << "El valor de z es:" << &z << endl;
    cout << "El valor de arreglo es:" << &arreglo[0] << endl;
    return 0;
}
