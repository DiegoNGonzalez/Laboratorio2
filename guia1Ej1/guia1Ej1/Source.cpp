#include <iostream>

using namespace std;
#include <string>
#include "funciones.h"


int main() {
  
	int *vectorNotas, n;
	string	*vectorNombre, *vectorApellido;
	cout << "Ingrese la cantidad de alumnos: ";
	cin >> n;
	vectorNombre = new string[n];
	vectorApellido = new string[n];
	vectorNotas = new int[n];
	cargarDatos(vectorNombre, vectorApellido, vectorNotas, n);
	

  return 0;
}