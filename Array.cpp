#include "Array.h"
#include <iostream>
using namespace std;

void Array::mostrarArray(int A[]) {
	for (int i = 0; i < n; i++) {
		cout << A[i] << " ";

	}

}
float Array::mostrarpromedio(int S[]) {
	double suma = 0;
	for (int i = 0; i < n; i++) {
		suma = suma + S[i];

	}
	return suma / n;
}

int Array::mostrarmenor(int P[]) {
	int e; e = P[0];
	for (int i = 0; i < n; i++) {
		if (P[i] < e) {
			e = P[i];
		}

	}
	return e;


}

