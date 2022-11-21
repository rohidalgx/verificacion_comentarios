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
	Administrador *administrador;
	vector<Comentario> comentarios;
	vector<Comentador *> comentadores;

public:
	Empresa();
	Empresa(string nombre, int razonSocial, string rubro, vector<string> redesSociales);
	virtual ~Empresa();
	bool enComentadores(int telefono);
	void agregarAdministrador(Administrador *administrador);
	bool agregarComentario(Comentario comen);
	void calcularPeso(Fecha f1, Fecha f2);
	void mostrarRedes();
	void agregarComnetador(Comentador *comentador);
};

#endif /* EMPRESA_H_ */
