	/*
 * Administrador.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Administrador.h"
#include "Empresa.h"
#include "Comentador.h"
#include <iostream>
using namespace std;

Administrador::Administrador() {
	// TODO Auto-generated constructor stub

}

Administrador::Administrador(Empresa *empresa){
	this->empresa = empresa;
}

Administrador::~Administrador() {
	// TODO Auto-generated destructor stub
}

void Administrador::agregarComentador(Comentador *comentador){
	empresa->agregarComnetador(comentador);

}

bool Administrador::validarComentarios(Comentario comentario){
	comentario.mostrarComentario();
	int a;
	do {

		cout<<"Validar este comentario? 0_si 1_no"<<endl;
		cin>>a;
	} while (a<0 and a>1);
	return a;
}

void Administrador::ocultarComentario(Comentario *comentario){
	comentario->setMostrar(false);
}

void Administrador::mostrarComentario(Comentario *comentario){
	comentario->setMostrar(true);
}
