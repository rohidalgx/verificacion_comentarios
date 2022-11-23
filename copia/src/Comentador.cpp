/*
 * Comentador.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Comentador.h"
#include "Comentario.h"


Comentador::Comentador() {
	// TODO Auto-generated constructor stub

}

Comentador::~Comentador() {
	// TODO Auto-generated destructor stub
}

Comentador::Comentador(int telefono, string ciudad, string provincia, string pais){
	this->telefono = telefono;
	this->ciudad = ciudad;
	this->pais = pais;
	this->provincia = provincia;
	this->cantComentarios = 0;
	this->cantNeg = 0;
	this->cantPos = 0;
	Neutral n;
	this->cat = &n;
}

void Comentador::agregarComentario(Empresa em, Comentario comen){
	if (em.enComentadores(this->telefono)) {

		this->cantComentarios++;
		if (comen.getPuntuacion() < 4){
			this->cantNeg++;
		}else if(comen.getPuntuacion()> 6){
			this->cantPos++;
			cout<<"No olvide comentar en nuestras redes!"<<endl;
			em.mostrarRedes();
		}
		if(em.agregarComentario(comen)){
			cout<<"Comentario Aprobado"<<endl;
		}else{
			cout<<"Comentario Rechazado"<<endl;
		}
	}else{
		cout<<"El comentador no es comentador de esta empresa"<<endl;
	}
}

float Comentador::calculoPeso(int entero){
	return(this->cat->seleccionarCategoria(entero));
}
int Comentador::getCantNeg(){
	return(this->cantComentarios);
}
int Comentador::getCantPos(){
	return(this->cantPos);
}
int Comentador::getCantTotal(){
	return(this->cantComentarios);
}

void Comentador::recategorizar(){
	if(cantNeg > cantComentarios*0.6){
		Pesimista p;
		cat = &p;
	}else{
		if(cantPos > cantComentarios*0.6){
			Optimista o;
			cat = &o;
		}else{
			Neutral n;
			cat = &n;
		}
	}
}

int Comentador::getTelefono(){
	return telefono;
}
