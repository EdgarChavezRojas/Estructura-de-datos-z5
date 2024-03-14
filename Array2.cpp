#include "Array2.h"
#include <iostream>
using namespace std;

void Array2::cargarArray(int p[]) {
	for (int i = 0; i < n; i++) {

		cout << "\nValor  " <<   i + 1 << "  del vector: "; cin>> p[i];

	}

}
void Array2::mostrarArray(int s[]) {
	for (int i = 0; i < n; i++) {
		cout << "\nValor " << i + 1 << " : " << s[i];
	}
}
void Array2::sumarArray(int k[], int x[]) {
	for (int i = 0; i < n; i++) {
		cout << k[i] + x[i]<<" ";

	}

}
void Array2::vectormayor(int r[], int q[]){
	int suma1 = 0, suma2 = 0;
	for (int i = 0; i < n; i++) {
		suma1 += r[i];
		suma2 += q[i];

	}
	if (suma1 > suma2) {
		mostrarArray(r);
	}
	else {
		mostrarArray(q);
	}

}

