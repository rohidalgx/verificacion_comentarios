/*
 * Comentario.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef COMENTARIO_H_
#define COMENTARIO_H_
#include "Fecha.h"

class Comentario {
private:
	string comentario;
	Fecha fecha;
	int puntuacion;
	bool mostrar;
public:
	Comentario();
	Comentario(string coment, Fecha fecha, int puntuacion);
	virtual ~Comentario();
	void setMostrar(bool b);
	void printComentario();
	bool getMostrar();
};

#endif /* COMENTARIO_H_ */
