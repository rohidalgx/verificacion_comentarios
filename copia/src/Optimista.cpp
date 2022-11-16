/*
 * Optimista.cpp
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#include "Optimista.h"

Optimista::Optimista() {
	// TODO Auto-generated constructor stub

}

Optimista::~Optimista() {
	// TODO Auto-generated destructor stub
}

float Optimista::seleccionarCategoria(float puntaje){
	if(puntaje > 5){
		return(puntaje / 2);
	}else{
		if(puntaje < 5){
			return(puntaje * 2);
		}else{
			return(puntaje);
		}
	}
}
