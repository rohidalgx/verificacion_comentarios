/*
 * Optimista.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef OPTIMISTA_H_
#define OPTIMISTA_H_

#include "Categoria.h"

class Optimista: public Categoria {
public:
	Optimista();
	virtual ~Optimista();
	float seleccionarCategoria(float puntaje);
};

#endif /* OPTIMISTA_H_ */
