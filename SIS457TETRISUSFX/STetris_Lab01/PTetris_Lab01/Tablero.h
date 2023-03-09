#pragma once
#include"Bloque.h"

class Tablero
{
private:
	int anchoTiles; //definimos el ancho del tablero respecto a la cantidad de tiles que los bloques podran ocupar horintalmente
	int altoTiles; //definimos el ancho del tablero respecto a la cantidad de tiles que los bloques podran ocupar verticalmente
	int numeroFilasEliminadas;
	int posicionVerticalFilaMasAltaOcupada; //fila mas alta tenga un tile ocupado
	vector<bool> filaActual;
	//Bloque bloque;

public:
	Tablero(int _anchoTiles, int _altoTiles, int _numeroFilasEliminadas, int _posicionVerticalFilaMasAltaOcupada, vector<bool> _filaActual/*, Bloque _bloque */ ); //constructor
	bool filaLlena(vector<bool> _filaActual);
	int eliminarFila(bool _filaLlena);
	void bajarFilas(bool _filaAbajoVacia);
	void incrementarNumeroFilasEliminadas(int _numeroFilasEliminadas);
	int identificarFilaOcupadaMasAlta(vector<bool> _fila);
	bool finJuego(int _posiscionFilaMasAlta, int altoTablero);


	//Metodos accesores

	int getFilasEliminadas() { return numeroFilasEliminadas; }
	vector<bool> getFilaActual() { return filaActual; }
	int getAltoTiles() { return altoTiles; }
	int getPosicionVerticalFilaMasAltaOcupada() { return posicionVerticalFilaMasAltaOcupada; }
};

