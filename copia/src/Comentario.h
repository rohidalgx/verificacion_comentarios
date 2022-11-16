/*
 * Comentario.h
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#ifndef COMENTARIO_H_
#define COMENTARIO_H_
#include "Fecha.h"
#include <iostream>
using namespace std;

class Comentador;

class Comentario {
private:
	string comentario;
	Fecha fecha;
	int puntuacion;
	bool mostrar;
	Comentador *comentador;

public:
	Comentario();
	Comentario(string coment, Fecha fech, int punt, Comentador *comentador);
	virtual ~Comentario();
	void mostrarComentario();
	void setMostrar(bool b);
	bool getMostrar();
	int getPuntuacion();
	float calcularPeso();
	Fecha getFecha();

};

#endif /* COMENTARIO_H_ */
