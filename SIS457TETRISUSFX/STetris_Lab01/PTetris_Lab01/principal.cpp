/*integrantes del grupo:
-David Fernando Lujan Renteria
-Josue Saygua Romero
-Jhamil Crespo Rejas
*/

#include <iostream>
#include "Escenario.h"

using namespace std;



int main() {
	//cout << "Hola bienvenido al mundo de Tetris." << endl;

	Escenario escenarioInicial = Escenario("Escenario sin nombre", 7, 5, "paisaje prederminado", 0, 0, 1);
	Tablero primerTablero = Tablero(3, 7, 0, 0, {false, false, false});
	Bloque bloque = Bloque("cuadrado (2x2)", 4, { {true, true, false}, {true, true, false}, {false, false, false}, {false, false, false} }/*cuadrado*/, 0, "rojo", 0, 2, 7);


	//cout << "nombre del escenario: " << escenarioInicial.getNombre() << endl;
	

	//cout << "filas eliminadas: " << escenarioInicial.getTablero().getNumeroFilasEliminadas() << endl;

		cout << "Imagen de Fondo del Escenario: \n" << escenarioInicial.getImagenFondo() << endl; //se introduce la imagen de fondo del escenario
		cout << "Se inserta el tablero " << endl;

		//se muestran el nombre del escenario y los contadores de puntaje, nivel, mejor puntaje y filas eliminadas
		cout << "Nombre del Escenario: " << escenarioInicial.getNombre() << endl;
		cout << "Nivel: " << escenarioInicial.getNivel() << endl;
		cout << "Puntaje: " << escenarioInicial.getPuntaje() << endl;
		cout << "Mejor Puntaje: " << escenarioInicial.getMejorPuntaje() << endl;
		cout << "Filas Eliminadas: " << primerTablero.getFilasEliminadas() << endl;
		
		//se introduce el primer bloque
		cout << "Nombre del bloque: " << bloque.getNombre() << endl;
		cout << "Apariencia: \n\t[ ][ ]\n\t[ ][ ]" << endl;
		cout << "Angulo: " << bloque.getAngulo() << endl;
		cout << "Color del bloque: " << bloque.getColor();
		cout << "Velocidad: " << bloque.getVelocidad() << endl;
		cout << "Posicion X: " << bloque.getPosicionX()<<endl;
		cout << "Posicion Y: " << bloque.getPosicionY()<<endl;

		//usando los metodos en orden
		bloque.cambiarForma(bloque.getApariencia());
		bloque.moverHorizontalmente(1);
		bloque.rotar(90);
		bloque.acelerar(bloque.getVelocidad(), escenarioInicial.getNivel());
		cout << endl;
		primerTablero.identificarFilaOcupadaMasAlta(primerTablero.getFilaActual());
		primerTablero.eliminarFila(primerTablero.filaLlena(primerTablero.getFilaActual()));
		primerTablero.incrementarNumeroFilasEliminadas(primerTablero.getFilasEliminadas());
		primerTablero.bajarFilas(true);
		cout << endl;
		escenarioInicial.incrementarPuntaje(escenarioInicial.getPuntaje(), primerTablero.getFilasEliminadas());
		escenarioInicial.actualizarMejorPuntaje(escenarioInicial.getMejorPuntaje(), escenarioInicial.getPuntaje());
		escenarioInicial.incrementarNivel(escenarioInicial.getPuntaje());
		cout << endl;
		primerTablero.finJuego(primerTablero.getPosicionVerticalFilaMasAltaOcupada(), primerTablero.getAltoTiles());
		cout << "//////////////////////////////////////////////////" << endl;

		/*void incrementarPuntaje(int _puntaje, int _filasEliminadas);
	void actualizarMejorPuntaje(int _mejorPuntaje, int _puntajeActual);
	int incrementarNivel(int _puntaje);*/



}