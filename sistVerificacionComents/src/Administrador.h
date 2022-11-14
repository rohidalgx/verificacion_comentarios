/*
 * Administrador.h
 *
 *  Created on: 14 nov. 2022
 *      Author: WINDOWS
 */

#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_
#include "Comentario.h"
#include "Comentador.h"
#include "Empresa.h"
#include <iostream>
#include <stdio.h>
using namespace std;

class Administrador {

private:
	Empresa *empresa;


public:
	Administrador();
	Administrador(Empresa *empresa);
	virtual ~Administrador();

	void agregarComentador(Comentador c);
	void validarComentarios();
	bool ocultarComentario(Comentario c);
	bool mostrarComentario(Comentario c);
};

#endif /* ADMINISTRADOR_H_ */
