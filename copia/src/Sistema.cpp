/*
 * Sistema.cpp
 *
 *  Created on: 18 nov. 2022
 *      Author: WINDOWS
 */

#include "Sistema.h"

Sistema::Sistema() {
	// TODO Auto-generated constructor stub

}

Sistema::~Sistema() {
	// TODO Auto-generated destructor stub
}

void Sistema::agregarUsuario(Comentador comentador){
	comentadores.insert(comentadores.end(), comentador);
}
void Sistema::agregarEmpresa(Empresa empresa){
	empresas.insert(empresas.end(),empresa);
}
void Sistema::recategorizar(){
	for (unsigned int i  = 0; i < comentadores.size(); ++i) {
		comentadores[i].recategorizar();
	}
}
void Sistema::imprimirInfo(){
	cout<<"Informacion del sistema"<<endl;
	cout<<"Empresas: "<<endl;
	for(unsigned int i=0; this->empresas.size(); i++){
		cout<<this->empresas[i].getNombre()<<endl;
	}

	cout<<"Comentadores: "<<endl;
	for(unsigned int i=0; this->comentadores.size(); i++){
		cout<<"Telefono"<<this->comentadores[i].getTelefono()<<endl;
	}
}
