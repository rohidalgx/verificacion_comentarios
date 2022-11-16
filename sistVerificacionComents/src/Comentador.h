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
#include "Pesimista.h"
#include "Optimista.h"
#include "Empresa.h"
#include "Neutral.h"

class Comentador {
private:
	int telefono;
	string ciudad;
	string provincia;
	string pais;
	Categoria *categoria;
	float valoracion;
	int cantidadComentarios;
	int totalPuntaje;


public:
	Comentador();
	Comentador(int telefono, string ciudad, string provincia, string pais);
	virtual ~Comentador();
	int getPuntaje();
	int getCantidad();
	void setValoracion(float total);
	bool agregarComentario(Empresa e);


};

#endif /* COMENTADOR_H_ */
