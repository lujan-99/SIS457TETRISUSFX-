#include "Bloque.h"

Bloque::Bloque(string _nombre, int _numeroTiles, vector<vector<bool>> _apariencia, int _angulo, string _color, float _velocidad, int _posicionX, int _posicionY)
{
	nombre = _nombre;
	numeroTiles = _numeroTiles;
	apariencia = _apariencia;
	angulo = _angulo;
	color = _color;
	velocidad = _velocidad;
	posicionX = _posicionX;
	posicionY = _posicionY;
}

void Bloque::rotar(int _angulo)
{
	cout << "funcion para rotar el bloque" << endl;
}

void Bloque::acelerar(float _velocidad, int nivelDificultad)
{
	cout << "funcion para acelerar la caida del bloque" << endl;
}

void Bloque::moverHorizontalmente(int _direccion)
{
	cout << "funcion que mueve el bloque a la izquierda o a la derecha"<<endl;
}

void Bloque::cambiarForma(vector<vector<bool>> _apariencia)
{
	cout << "funcion que cambia la forma del bloque una sola vez" << endl;
}
