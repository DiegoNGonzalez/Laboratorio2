#include <iostream>

using namespace std;
#include "Fecha.h"

int main() {

	Fecha nacimiento(13, 5, 1993);
	

	cout << nacimiento.to_String() << endl;
	
	int dia, mes, anio;
	cout << "Introduce el dia: ";
	cin >> dia;
	cout << "Introduce el mes: ";
	cin >> mes;
	cout << "Introduce el anio: ";
	cin >> anio;

	Fecha hoy(dia,mes,anio);

	Fecha ayer = hoy;
	Fecha manana = hoy;
	Fecha haceUnAnio = hoy;
	Fecha dentroDeUnAnio = hoy;

	cout << "Hoy es: " << hoy.to_String() << endl;

	ayer.agregarDias(-1);
	cout << "Ayer fue: " << ayer.to_String() << endl;

	manana.agregarDias(1);
	cout << "Ma�ana ser�: " << manana.to_String() << endl;

	haceUnAnio.agregarDias(-365);
	cout << "Hace un a�o fue: " << haceUnAnio.to_String() << endl;

	dentroDeUnAnio.agregarDias(365);
	cout << "Dentro de un a�o ser�: " << dentroDeUnAnio.to_String() << endl;




	return 0;
}