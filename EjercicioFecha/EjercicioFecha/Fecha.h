#pragma once
#include <string>
class Fecha
{
private:
	//props
	int _dia;
	int _mes;
	int _anio;
	//Metodos privados
	int maximoDiasEnMes(int mes, int anio);
	void restarDia();
	void agregarDia();
	bool esBisiesto(int anio);
public:
	//Constructor y sobrecarga Constructor
	Fecha();
	Fecha(int dia, int mes, int anio);
	//Metodos 
	int getDia();
	int getMes();
	int getAnio();
	void setDia(int dia);
	void setMes(int mes);
	void setAnio(int anio);
	void agregarDias(int dias);
	std::string to_String();

};

