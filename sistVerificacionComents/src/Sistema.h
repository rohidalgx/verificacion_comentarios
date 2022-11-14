/*
 * Sistema.h
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include <iostream>
#include <stdio.h>
using namespace std;
#include "Comentador.h"
#include "Empresa.h"
#include <vector>


class Sistema {

private:
	vector<Comentador> usuarios;
	vector<Empresa> empresas;

public:
	Sistema();
	Sistema(vector<Comentador> usuarios,vector<Empresa> empresas);
	void agregarUsuario(Comentador usuario);
	void agregarEmpresa(Empresa empresa);
	void recategorizar();
	virtual ~Sistema();
};

#endif /* SISTEMA_H_ */
