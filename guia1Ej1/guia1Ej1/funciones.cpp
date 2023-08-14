#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;

void cargarDatos(string vectorNombre[], string vectorApellido[], int vectorNotas[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Ingrese el nombre del alumno " << i + 1 << ": ";
		cin >> vectorNombre[i];
		cout << "Ingrese el apellido del alumno " << i + 1 << ": ";
		cin >> vectorApellido[i];
		cout << "Ingrese la nota del alumno " << i + 1 << ": ";
		cin >> vectorNotas[i];
	}

	
}