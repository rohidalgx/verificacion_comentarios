	/*
 * Administrador.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Administrador.h"
#include "Empresa.h"

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
	empresa->agregarComentador(comentador);

}

bool Administrador::validarComentarios(Comentario comentario){
	int a;
	do {
		comentario.setMostrar(true);
		comentario.mostrarComentario();
		cout<<"Validar este comentario? 0: no 1: si"<<endl;
		cin>>a;
	} while (a<0 and a>1);
	if(a==1){
		return(true);
	}else{
		return false;
	}
}

void Administrador::ocultarComentario(Comentario *comentario){
	comentario->setMostrar(false);
}

void Administrador::mostrarComentario(Comentario *comentario){
	comentario->setMostrar(true);
}
