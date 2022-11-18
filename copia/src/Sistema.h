/*
 * Sistema.h
 *
 *  Created on: 18 nov. 2022
 *      Author: WINDOWS
 */

#ifndef SISTEMA_H_
#define SISTEMA_H_
#include "Empresa.h"
#include "Comentador.h"

#include <vector>

class Sistema {

private:
	vector<Empresa> empresas;
	vector<Comentador> comentadores;

public:
	Sistema();
	virtual ~Sistema();
	void agregarUsuario(Comentador comentador);
	void agregarEmpresa(Empresa empresa);
	void recategorizar();

};

#endif /* SISTEMA_H_ */
