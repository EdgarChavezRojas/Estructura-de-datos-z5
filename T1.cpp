
#include "Array.h"
#include <iostream>
using namespace std;
int main()
{
    int Q[] = { 1,3,5,7,9 };
    Array array1(5);
    
    cout << "\nEl menor es: " << array1.mostrarmenor(Q);
    cout << "\nEl promedio es: " << array1.mostrarpromedio(Q);
    return 0;
}

