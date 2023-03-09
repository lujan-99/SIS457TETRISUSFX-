#pragma once
#include<string>
#include "Tablero.h"

using namespace std;

class Escenario
{
private:
	string nombre;
	int alto;
	int ancho;
	string imagenFondo;
	int puntaje;
	int mejorPuntaje;
	int nivel;
	//Tablero tablero;

public:
	Escenario(string _nombre, int _alto, int _ancho, string _imagenFondo, int _puntaje, int _mejorPuntaje, int _nivel/*, Tablero _tablero*/);
	
	void incrementarPuntaje(int _puntaje, int _filasEliminadas);
	void actualizarMejorPuntaje(int _mejorPuntaje, int _puntajeActual);
	int incrementarNivel(int _puntaje);

	//Gettters
	string getNombre() { return nombre; }
	string getImagenFondo() { return imagenFondo; }
	int getPuntaje() { return puntaje; }
	int getMejorPuntaje() { return mejorPuntaje; }
	int getNivel() { return nivel; }

	void setNombre(string _nombre) { nombre = _nombre; }

	//void setTablero(Tablero _tablero) { tablero = _tablero; }
	//Tablero getTablero() { return tablero; }
};
