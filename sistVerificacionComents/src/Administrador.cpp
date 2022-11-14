/*
 * Administrador.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: WINDOWS
 */

#include "Administrador.h"
#include "Empresa.h"


Administrador::Administrador() {
	// TODO Auto-generated constructor stub

}
Administrador::Administrador(Empresa *empresa){
	this->empresa = empresa;
}

Administrador::~Administrador() {
	// TODO Auto-generated destructor stub
}

void Administrador::agregarComentador(Comentador c){
	empresa->comentadores.insert(empresa->comentadores.end(), c);
}
bool Administrador::validarComentarios(Comentario c){
	bool siono;
	printf("Comentario valido?\n");
	cin>>siono;
	return(siono);
}
void Administrador::ocultarComentario(Comentario c){
	c.setMostrar(false);

}
void Administrador::mostrarComentario(Comentario c){
	c.setMostrar(true);
}
