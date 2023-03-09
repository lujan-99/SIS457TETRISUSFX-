#include "Escenario.h"
#include<iostream>

Escenario::Escenario(string _nombre, int _alto, int _ancho, string _imagenFondo, int _puntaje, int _mejorPuntaje, int _nivel/*, Tablero _tablero*/)
{
	nombre = _nombre;
	alto = _alto;
	ancho = _ancho;
	imagenFondo = _imagenFondo;
	puntaje = _puntaje;
	mejorPuntaje = _mejorPuntaje;
	nivel = _nivel;
	//tablero = _tablero;
}

void Escenario::incrementarPuntaje(int _puntaje, int _filasEliminadas)
{
	cout << "funcion que incrementa el cobtador de puntaje" << endl;
}

void Escenario::actualizarMejorPuntaje(int _mejorPuntaje, int _puntajeActual)
{
	cout << "funcion que actualiza el mejor puntaje" << endl;
}

int Escenario::incrementarNivel(int _puntaje)
{
	cout << "funcion que incrementa la dificultad del juego" << endl;
	return 0;
}
