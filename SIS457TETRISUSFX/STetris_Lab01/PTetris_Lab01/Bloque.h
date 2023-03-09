#pragma once
#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Bloque
{
private:
	string nombre;
	int numeroTiles;
	vector<vector<bool>>apariencia;
	int angulo;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;

public:
	Bloque(string _nombre, int _numeroTiles, vector<vector<bool>> _apariencia, int _angulo, string _color, float _velocidad, int _posicionX, int _posicionY);
	void rotar(int _angulo);
	void acelerar(float _velocidad, int _nivelDificultad);
	void moverHorizontalmente(int _direccion);
	void cambiarForma(vector<vector<bool>> _apariencia);

	//getters
	string getNombre() { return nombre; }
	int getAngulo() { return angulo; }
	string getColor() { return color; }
	float getVelocidad() { return velocidad; }
	int getPosicionX() { return posicionX; }
	int getPosicionY() { return posicionY; }
	vector<vector<bool>> getApariencia() { return apariencia; }

protected:

};

