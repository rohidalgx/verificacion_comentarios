/*
 * Administrador.h
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#ifndef ADMINISTRADOR_H_
#define ADMINISTRADOR_H_
#include "Empresa.h"
#include "Comentador.h"
#include "Comentario.h"


class Comentador;


class Empresa;

class Administrador {

private:
	Empresa *empresa;

public:
	Administrador();
	Administrador(Empresa *empresa);
	virtual ~Administrador();
	void agregarComentador(Comentador *comentador);
	bool validarComentarios(Comentario comentario);
	void ocultarComentario(Comentario *comentario);
	void mostrarComentario(Comentario *comentario);

};

#endif /* ADMINISTRADOR_H_ */
