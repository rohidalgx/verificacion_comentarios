/*
 * Neutral.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef NEUTRAL_H_
#define NEUTRAL_H_

#include "Categoria.h"

class Neutral: public Categoria {
public:
	Neutral();
	virtual ~Neutral();
	float pesoPorCategoria(float puntaje);
};

#endif /* NEUTRAL_H_ */
