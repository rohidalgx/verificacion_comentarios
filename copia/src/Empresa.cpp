/*
 * Empresa.cpp
 *
 *  Created on: 16 nov. 2022
 *      Author: rocio
 */

#include "Empresa.h"

Empresa::Empresa() {
	// TODO Auto-generated constructor stub

}

Empresa::Empresa(string nombre, int razonSocial, string rubro, vector<string> redesSociales, Administrador administrador){
	this->nombre = nombre;
	this->razonSocial = razonSocial;
	this->rubro = rubro;
	this->redesSociales = redesSociales;
	this->admnistrador = administrador;
}

Empresa::Empresa(string nombre, int razonSocial, string rubro, Administrador administrador){
	this->nombre = nombre;
	this->razonSocial = razonSocial;
	this->rubro = rubro;
	this->admnistrador = administrador;
}

Empresa::~Empresa() {
	// TODO Auto-generated destructor stub
}

void Empresa::agregarComentario(Comentario comen){
	this->comentarios.insert(comentarios.end(), comen);
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
