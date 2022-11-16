/*
 * Empresa.cpp
 *
 *  Created on: 14 nov. 2022
 *      Author: WINDOWS
 */

#include "Empresa.h"


Empresa::Empresa() {
	// TODO Auto-generated constructor stub

}

Empresa::~Empresa() {
	// TODO Auto-generated destructor stub
}

void Empresa::mostrarRedes(){
	printf("Comenta tambien en nuestras redes\n");
	for(int i = 0; i < this->redesSociales.size(); i++){

		cout<<this->redesSociales[i]<<endl;
	}
}

void Empresa::agregarRedes(string red){
	this->redesSociales.insert(this->redesSociales.end(), red);
}

void Empresa::quitarRedes(string red){
//	for(int i = 0; i < this->redesSociales.size(); i++){
//		if(this->redesSociales[i]==red){
//			this->redesSociales.erase(i);
//			this->redesSociales.erase(__first, __last);
//		}
//	}
//	this->redesSociales.erase(0, this->redesSociales, red);
//	redesSociales.erase(std::remove(redesSociales.begin(), redesSociales.end(), red), redesSociales.end());
//	this->redesSociales.erase(__first, __last)
}

bool Empresa::insertarComentario(Comentario c){
	if(this->administrador.validarComentarios(c)){
		this->comentarios.insert(this->comentarios.end(), c);
		return(true);
	}else{
		return(false);
	}
}
