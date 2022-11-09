/*
 * Pesimista.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef PESIMISTA_H_
#define PESIMISTA_H_

#include "Categoria.h"

class Pesimista: public Categoria {
public:
	Pesimista();
	virtual ~Pesimista();
	int seleccionarCategoria(int puntaje);
};

#endif /* PESIMISTA_H_ */
