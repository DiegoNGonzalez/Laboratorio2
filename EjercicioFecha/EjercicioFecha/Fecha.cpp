#include "Fecha.h"

Fecha::Fecha() {
	setDia(1);
	setMes(1);
	setAnio(2023);
}
Fecha::Fecha(int dia, int mes, int anio) {

	if (dia > 0 && dia <= maximoDiasEnMes(mes, anio) && mes > 0 && mes <= 12 && anio > 0 && anio < 2030) {
		setDia(dia);
		setMes(mes);
		setAnio(anio);

	}
	else {
		_dia = 1;
		_mes = 1;
		_anio = 2023;
	}


}

void Fecha::setDia(int dia) {
	_dia = dia;
}
void Fecha::setMes(int mes) {
	_mes = mes;
}
void Fecha::setAnio(int anio) {
	_anio = anio;
}
int Fecha::getDia() {
	return _dia;
}
int Fecha::getMes() {
	return _mes;
}
int Fecha::getAnio() {
	return _anio;
}
bool Fecha::esBisiesto(int anio) {
	bool bisiesto = false;
	if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
		bisiesto = true;
	}
	return bisiesto;
}
int Fecha::maximoDiasEnMes(int mes, int anio) {
	int diaMax = 31;// ENERO MARZO MAYO JULIO AGOSTO OCTUBRE DICIEMBRE
	if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		diaMax = 30;
	}
	else if (mes == 2) {
		if (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)) {
			diaMax = 29;
		}
		else {
			diaMax = 28;
		}
	}
	return diaMax;
}


void Fecha::restarDia() {
	if (_dia == 1) {
		if (_mes == 1) {
			_dia = maximoDiasEnMes(12, _anio - 1);
			_mes = 12;
			_anio--;
		}
		else {
			_dia = maximoDiasEnMes(_mes - 1, _anio);
			_mes--;
		}
	}
	else {
		_dia--;
	}
}
void Fecha::agregarDia() {
	if (_dia == maximoDiasEnMes(_mes, _anio)) {
		_dia = 1;

		if (_mes == 12) {
			_mes = 1;
			_anio++;
		}
		else {
			_mes++;
		}
	}
	else {
		_dia++;
	}
}
void Fecha::agregarDias(int dias) {
	if (dias > 0) {
		for (int i = 0; i < dias; i++) {
			agregarDia();
		}
	}
	else if (dias < 0) {
		for (int i = 0; i < -dias; i++) {
			restarDia();
		}
	}
}
std::string Fecha::to_String() {
	std::string dia;
	std::string mes;
	std::string anio = std::to_string(_anio);
	if (_dia < 10) {
		dia = "0" + std::to_string(_dia);
	}
	else {
		dia = std::to_string(_dia);
	}
	if (_mes < 10) {
		mes = "0" + std::to_string(_mes);
	}
	else {
		mes = std::to_string(_mes);
	}
	return dia + "/" + mes + "/" + anio;
}