/*
 * Comentario.cpp
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#include "Comentario.h"

Comentario::Comentario() {
	// TODO Auto-generated constructor stub

}

Comentario::~Comentario() {
	// TODO Auto-generated destructor stub
}

Comentario::Comentario(string coment, Fecha fecha, int puntuacion){
	this->comentario = coment;
	this->fecha = fecha;
	this->puntuacion = puntuacion;
}

void Comentario::setMostrar(bool b){
	this->mostrar = b;
}

bool Comentario::getMostrar(){
	return(this->mostrar);
}

void Comentario::printComentario(){

	printf("Comentario\n");
	cout<<this->comentario<<endl;


	printf("Fecha\n");
	cout<<this->fecha<<endl;


	printf("Puntaje\n");
	cout<<this->puntuacion<<endl;
}
