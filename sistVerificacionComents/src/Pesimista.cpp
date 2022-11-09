/*
 * Pesimista.cpp
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#include "Pesimista.h"

Pesimista::Pesimista() {
	// TODO Auto-generated constructor stub

}

Pesimista::~Pesimista() {
	// TODO Auto-generated destructor stub
}

int Pesimista::seleccionarCategoria(int puntaje){

	if(puntaje < 5){
		return(puntaje / 2);
	}else{
		if(puntaje > 5){
			return(puntaje * 2);
		}else{
			return(puntaje);
		}
	}
}
