/* 
 * File:   main.cpp
 * Author: erick
 *
 * Created on September 19, 2015, 2:09 PM
 */

#include <cstdlib>
#include "Util.h"
#include <iostream>
#include "Simulacion.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
	int tiempoPorSimulacion;
	int tiempoToken;
	int numeroDeVeces;
	int modoLento = 0;

    printf("¿Cuantas veces quiere correr la simulación? \n");
	scanf("%d",&numeroDeVeces);
    printf("¿Cuanto tiempo desea por simulación? \n");
	scanf("%d",&tiempoPorSimulacion);
    printf("¿Cuanto es el tiempo de token por computadpra? \n");
	scanf("%d",&tiempoToken);
    printf("¿Desea activar el modo lento? 1 para Si \n");
	scanf("%d",&modoLento);

	//Corre la simulacion varias veces
	for(int i=0;i<numeroDeVeces;i++){
		Simulacion* Sim = new Simulacion();
		Sim->run(tiempoPorSimulacion,tiempoToken,modoLento);
		delete Sim;
	}

    return 0;
}

