/*
 * Empresa.h
 *
 *  Created on: 14 nov. 2022
 *      Author: WINDOWS
 */

#ifndef EMPRESA_H_
#define EMPRESA_H_
#include <iostream>
#include <stdio.h>
using namespace std;
#include "Administrador.h"
#include "Comentario.h"
#include "Comentador.h"
#include <vector>
class Empresa {


private:
	string nombre;
	int razonSocial;
	string rubro;
	vector <string> redesSociales;
	Administrador administrador;
	vector<Comentario> comentarios;


public:
	Empresa();
	Empresa(string nombre, int razonSocial, string rubro,string sitioWeb,Administrador administrador);
	virtual ~Empresa();
	void mostrarRedes();
	void agregarRedes(string red);
	void quitarRedes(string red);

friend class Administrador;
};

#endif /* EMPRESA_H_ */
