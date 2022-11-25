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
	cout<<"!!!Proyecto Final!!!"<<endl; // prints !!!Proyecto Final!!!

	//creo un par de fechas
	cout<<endl<<"Creando 3 fechas"<<endl;
	Fecha f1(10, 11, 2020);
	Fecha f2(15, 10, 2021);
	Fecha f3(20, 7, 2020);

	//creo un sistema
	cout<<endl<<"Creando 1 sistema"<<endl;
	Sistema sist;

	//creo un par de comentadores
	cout<<endl<<"Creando 3 comentadores"<<endl;
	Comentador com1(3815239217, "Yerba Buena", "Tucuman", "Argentina");
	Comentador com2(3815269457, "Las Talitas", "Tucuman", "Argentina");
	Comentador com3(1467589648, "Madrid", "Madrid", "España");

	//agrego los comentadores al sistema
	cout<<endl<<"Agregando comentadores al sistema"<<endl;
	sist.agregarUsuario(com1);
	sist.agregarUsuario(com2);
	sist.agregarUsuario(com3);

	//creo unas empresas
	cout<<endl<<"Creando 2 empresas"<<endl;
	vector<string> redesSociales1;
	redesSociales1.insert(redesSociales1.end(), "Facebook: empresa1");
	redesSociales1.insert(redesSociales1.end(), "Instagram: empresa1");
	Empresa em1("Empresa uno", 351, "Gastronomico", redesSociales1);
	vector<string> redesSociales2;
	redesSociales2.insert(redesSociales2.end(), "Facebook: empresa2");
	redesSociales2.insert(redesSociales2.end(), "Instagram: empresa2");
	Empresa em2("Empresa dos", 485, "Tecnologia", redesSociales2);

	//agrego las empresas al sistema
	cout<<endl<<"Agregando empresas al sistema"<<endl;
	sist.agregarEmpresa(em1);
	sist.agregarEmpresa(em2);

	//creo administradores para ambas empresas
	cout<<endl<<"Creando 2 administradores"<<endl;
	Administrador admin1(&em1);
	Administrador admin2(&em2);
	cout<<endl<<"Asignando administradores a sus empresas"<<endl;
	em1.agregarAdministrador(&admin1);
	em2.agregarAdministrador(&admin2);

	//agrego los comentadores a la empresa
	cout<<endl<<"Administradores agregando comentadores"<<endl;
	admin1.agregarComentador(&com1);
	admin1.agregarComentador(&com2);
	admin2.agregarComentador(&com3);

	//creo unos comentarios
	cout<<endl<<"Creando 3 comentarios"<<endl;
	Comentario c1("Excalente servicio!", f1, 7, &com1);
	Comentario c2("Demoran mucho en atender", f2, 5, &com2);
	Comentario c3("No tienen estacionamiento", f3, 4, &com3);

	//los agrego a la empresa
	cout<<endl<<"Agregando comentarios a las empresas"<<endl;
	com1.agregarComentario(em1, c1);
	com2.agregarComentario(em1, c2);
	com3.agregarComentario(em2, c3);

	//resumen del sistema
	cout<<endl<<"Mostrando informacion del sistema"<<endl;
	sist.imprimirInfo();

	//calculo el peso de los comentarios del comentador
	cout<<"Peso del comentario1 realizado por comentador1<: "<<com1.calculoPeso(c1.getPuntuacion())<<endl<<endl;

	//probando funciones de ocultar y mostrar
	cout<<endl<<"Ocultando comentario1"<<endl;
	admin1.ocultarComentario(&c1);
	cout<<endl<<"Mostrando comentario2"<<endl;
	admin1.mostrarComentario(&c2);

	//probando funcion recategorizar
	cout<<endl<<"Recategorizando usuarios"<<endl;
	sist.recategorizar();

	cout<<endl<<"FIN :D"<<endl;
	return 0;
}
