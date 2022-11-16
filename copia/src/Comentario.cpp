/*
 * Comentario.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Comentario.h"
#include "Comentador.h"

Comentario::Comentario() {
	// TODO Auto-generated constructor stub

}

Comentario::Comentario(string coment, Fecha fech, int punt, Comentador *comentador){
	this->comentario = coment;
	this->fecha = fech;
	this->puntuacion = punt;
	this->comentador = comentador;
	this->mostrar = false;
}

Comentario::~Comentario() {
	// TODO Auto-generated destructor stub
}

void Comentario::mostrarComentario(){
	if(this->mostrar == true){
		cout<<"Comentario: "<<this->comentario<<endl;
		cout<<"Fecha: "<<this->fecha<<endl;
		cout<<"Puntuacion: "<<this->puntuacion<<endl;
	}else{
		cout<<"No se muestra este comentario"<<endl;
	}
}

void Comentario::setMostrar(bool b){
	this->mostrar = b;
}

bool Comentario::getMostrar(){
	return(this->mostrar);
}

int Comentario::getPuntuacion(){
	return(this->puntuacion);
}

float Comentario::calcularPeso(){
	return this->comentador->calculoPeso(this->puntuacion);
}

Fecha Comentario::getFecha(){
	return this->fecha;
}
