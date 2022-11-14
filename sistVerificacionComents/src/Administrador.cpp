/*
 * Administrador.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: WINDOWS
 */

#include "Administrador.h"

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
void Administrador::validarComentarios();
bool Administrador::ocultarComentario(Comentario);
bool Administrador::mostrarComentario(Comentario);
