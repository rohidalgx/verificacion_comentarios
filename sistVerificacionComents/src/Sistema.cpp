/*
 * Sistema.cpp
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#include "Sistema.h"

Sistema::Sistema() {
	// TODO Auto-generated constructor stub

}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

Sistema::Sistema(vector<Comentador> usuarios,vector<Empresa> empresas){
	this->usuarios = usuarios;
	this->empresas = empresas;
}
void Sistema::agregarUsuario(Comentador usuario){
	usuarios.insert(usuarios.end(), usuario);
}
void Sistema::agregarEmpresa(Empresa empresa){
	empresas.insert(empresas.end(), empresa);
}
void Sistema::recategorizar(){
	for (int i  = 0; i < usuarios.size(); ++i) {

		float total = usuarios[i].getPuntaje()/usuarios[i].getCantidad();
		usuarios[i].setValoracion(total);
	}
}
