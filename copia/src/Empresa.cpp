/*
 * Empresa.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Empresa.h"
#include "Comentador.h"
#include "Administrador.h"

Empresa::Empresa() {
	// TODO Auto-generated constructor stub

}

Empresa::Empresa(string nombre, int razonSocial, string rubro, vector<string> redesSociales){
	this->nombre = nombre;
	this->razonSocial = razonSocial;
	this->rubro = rubro;
	this->redesSociales = redesSociales;


}
void Empresa::agregarAdministrador(Administrador *administrador){
	this->administrador = administrador;
}

bool Empresa::enComentadores(int telefono){

	for (unsigned int i = 0; i < comentadores.size(); ++i) {
		if( telefono == comentadores[i]->getTelefono()){
			return true;
		}
	}

	return false;
}

Empresa::~Empresa() {
	// TODO Auto-generated destructor stub
}

void Empresa::agregarComentador(Comentador *comentador){
	comentadores.insert(comentadores.end(), comentador);

}

bool Empresa::agregarComentario(Comentario comen){
	if (this->administrador->validarComentarios(comen)) {
		this->comentarios.insert(comentarios.end(), comen);
		return true;
	}else {
		return false;
	}

}



//void Empresa::agregarRed(string red){
//	this->redesSociales.insert(redesSociales.end(), red);
//}
//void Empresa::quitarRed(string red){
//	this->redesSociales.erase(remove(redesSociales.begin(), redesSociales.end(), red), redesSociales.end());
//}

void Empresa::mostrarRedes(){
	cout<<"Comenta tambien en nuestras redes"<<endl;
	for(unsigned int i=0; i<this->redesSociales.size(); i++){
		cout<<this->redesSociales[i]<<endl;
	}
}
void Empresa::calcularPeso(Fecha f1, Fecha f2){
	for(unsigned int i=0; this->comentarios.size(); i++){
		if(f2>=comentarios[i].getFecha() and comentarios[i].getFecha() >= f1){
			cout<<comentarios[i].calcularPeso()<<endl;
		}
	}
}
