/*
 * Comentador.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef COMENTADOR_H_
#define COMENTADOR_H_
#include <iostream>
#include <stdio.h>
using namespace std;
#include "Categoria.h"
#include "Comentario.h"

class Comentador {
private:
	int telefono;
	string ciudad;
	string provincia;
	string pais;
	Categoria *categoria;


public:
	Comentador();
	Comentador(int telefono, string ciudad, string provincia, string pais);
	virtual ~Comentador();
	Comentario agregarComentario();


};

#endif /* COMENTADOR_H_ */
