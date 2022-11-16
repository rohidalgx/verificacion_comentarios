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
#include <iostream>
#include <stdio.h>
using namespace std;
class Empresa;

class Administrador {

private:
	Empresa *empresa;


public:
	Administrador();
	Administrador(Empresa *empresa);
	virtual ~Administrador();
	Comentador s;
	void agregarComentador(s);
	bool validarComentarios(Comentario c);
	void ocultarComentario(Comentario c);
	void mostrarComentario(Comentario c);
};

#endif /* ADMINISTRADOR_H_ */
