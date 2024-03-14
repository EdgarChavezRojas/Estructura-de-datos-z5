#include "Array2.h"
#include <iostream>
using namespace std;
int main()
{
	Array2 arraF(5);
	int D[5], L[5];
	arraF.cargarArray(D);
	cout << "\n Vector 2";
	arraF.cargarArray(L);
	cout << "\nValores del vector 1: " << endl;
	arraF.mostrarArray(D);
	cout << "\nValores del vector 2: " << endl;
	arraF.mostrarArray(L);
	cout << "\nLa suma de los vectores es: "; arraF.sumarArray(D, L);
	cout << "\nEl vector mayor es: " << endl;
	arraF.vectormayor(D, L);

}

