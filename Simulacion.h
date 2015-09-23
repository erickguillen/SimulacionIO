#ifndef SIMULACION_H
#define SIMULACION_H

#include "Util.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

class Simulacion
{
private:
	double Reloj;
	Evento* EventoActual;
	Util* ManejadorDeEventos;
	Computadora ComputadoraA;
	Computadora ComputadoraB;
	Computadora ComputadoraC;
public:
	Simulacion();
	void run(int tiempo);
	void evento_LlegaAComputadoraC(Evento *evento);
};

#endif // SIMULACION_H
