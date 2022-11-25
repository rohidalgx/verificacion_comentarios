/*
 * Comentador.h
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#ifndef COMENTADOR_H_
#define COMENTADOR_H_
#include <iostream>
using namespace std;
#include "Categoria.h"
#include "Comentario.h"
#include "Empresa.h"
#include "Neutral.h"
#include "Pesimista.h"
#include "Optimista.h"

//class Comentario;
class Empresa;

class Comentador {
private:
	int telefono;
	string ciudad;
	string provincia;
	string pais;
	Categoria *cat;
	int cantNeg;
	int cantPos;
	int cantComentarios;

public:
	Comentador();
	Comentador(int telefono, string ciudad, string provincia, string pais);
	virtual ~Comentador();
	void agregarComentario(Empresa em, Comentario comen);
	float calculoPeso(int entero);
	int getTelefono();
	int getCantNeg();
	int getCantPos();
	int getCantTotal();
	void recategorizar();


};

#endif /* COMENTADOR_H_ */
