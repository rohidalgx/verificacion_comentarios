/*
 * Comentador.cpp
 *
 *  Created on: 9 nov. 2022
 *      Author: rocio
 */

#include "Comentador.h"
#include <iostream>
#include <stdio.h>
using namespace std;

Comentador::Comentador() {
	// TODO Auto-generated constructor stub

}

Comentador::~Comentador() {
	// TODO Auto-generated destructor stub
}

Comentador::Comentador(int telefono, string ciudad, string provincia, string pais){
	this->telefono = telefono;
	this->ciudad = ciudad;
	this->provincia = provincia;
	this->pais = pais;
	Neutral neutral;
	categoria = neutral;
	cantidadComentarios = 0;
	valoracion = 0;
	totalPuntaje = 0;
}

Comentario Comentador::agregarComentario(){
	char comentario[50];
	int dia, mes, anio, puntaje;
	printf("Ingrese el comentario\n");
	gets(comentario);

	printf("Ingrese la fecha\n");
	printf("Dia\n");
	scanf("%d", &dia);
	printf("Mes\n");
	scanf("%d", &mes);
	printf("Anio\n");
	scanf("%d", &anio);

	printf("Ingrese el puntaje\n");
	scanf("%d", &puntaje);
	Fecha f(dia, mes, anio);
	Comentario coment(comentario, f, puntaje);


	cantidadComentarios ++;
	totalPuntaje = totalPuntaje + puntaje;

	return(coment);

}



int Comentador::getPuntaje(){
	return totalPuntaje;
}
int Comentador::getCantidad(){
	return cantidadComentarios;
}
void Comentador::setValoracion(float total){

	valoracion = total;
}
