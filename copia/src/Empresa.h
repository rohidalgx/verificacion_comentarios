/*
 * Empresa.h
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include "Comentario.h"
#include "Fecha.h"
#include "Administrador.h"
#include <vector>

class Empresa {
private:
	string nombre;
	int razonSocial;
	string rubro;
	vector<string> redesSociales;
	Administrador admnistrador;
	vector<Comentario> comentarios;

public:
	Empresa();
	Empresa(string nombre, int razonSocial, string rubro, vector<string> redesSociales, Administrador administrador);
	virtual ~Empresa();

//	void agregarRed(string red);
//	void quitarRed(string red);
	void mostrarRedes();
	void agregarComentario(Comentario comen);
	void calcularPeso(Fecha f1, Fecha f2);
};

#endif /* EMPRESA_H_ */
