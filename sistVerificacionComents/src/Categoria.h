/*
 * Categoria.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef CATEGORIA_H_
#define CATEGORIA_H_

class Categoria {
public:
	Categoria();
	virtual ~Categoria();
	virtual int seleccionarCategoria(int puntaje)=0;

};

#endif /* CATEGORIA_H_ */
