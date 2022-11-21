//============================================================================
// Name        : copia.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Administrador.h"
#include "Categoria.h"
#include "Comentador.h"
#include "Comentario.h"
#include "Empresa.h"
#include "Fecha.h"
#include "Neutral.h"
#include "Optimista.h"
#include "Pesimista.h"
#include "Sistema.h"

int main() {
	cout << "!!!Proyecto Final!!!" << endl; // prints !!!Hello World!!!
	//creo un par de fechas
	Fecha f1(10, 11, 2020);
	Fecha f2(15, 10, 2021);
	Fecha f3(20, 7, 2020);
	//creo un sistema
	Sistema sist;
	//creo un par de comentadores
	Comentador com1(3815239217, "Yerba Buena", "Tucuman", "Argentina");
	Comentador com2(3815269457, "Las Talitas", "Tucuman", "Argentina");
	Comentador com3(1467589648, "Madrid", "Madrid", "España");
	//agrego los comentadores al sistema
	sist.agregarUsuario(com1);
	sist.agregarUsuario(com2);
	sist.agregarUsuario(com3);
	//creo unas empresas
	vector<string> redesSociales1;
	redesSociales1.insert(redesSociales1.end(), "Facebook: empresa1");
	redesSociales1.insert(redesSociales1.end(), "Instagram: empresa1");
	Empresa em1("Empresa uno", 351, "Gastronomico", redesSociales1);
	vector<string> redesSociales2;
	redesSociales2.insert(redesSociales2.end(), "Facebook: empresa2");
	redesSociales2.insert(redesSociales2.end(), "Instagram: empresa2");
	Empresa em2("Empresa dos", 485, "Tecnologia", redesSociales2);
	//agrego las empresas al sistema
	sist.agregarEmpresa(em1);
	sist.agregarEmpresa(em2);
	//creo administradores para ambas empresas
	Administrador admin1(&em1);
	Administrador admin2(&em2);
	em1.agregarAdministrador(&admin1);
	em2.agregarAdministrador(&admin2);
	//agrego los comentadores a la empresa
	admin1.agregarComentador(&com1);
	admin1.agregarComentador(&com2);
	admin2.agregarComentador(&com3);
	//creo unos comentarios
	Comentario c1("Comentario 1", f1, 7, &com1);
	Comentario c2("Comentario 2", f2, 5, &com2);
	Comentario c3("Comentario 2", f3, 4, &com3);
	//los agrego a la empresa
	com1.agregarComentario(em1, c1);
	com1.agregarComentario(em1, c2);
	com2.agregarComentario(em2, c3);
	//resumen del sistema
	sist.imprimirInfo();

	//calculo el peso de los comentadores
	//cout<<"Peso comentador1"<<com1.calculoPeso(com1.getCantTotal())<<endl;

	//admin1.ocultarComentario(&c1);
	//admin1.mostrarComentario(&c2);
	sist.recategorizar();

	return 0;
}
