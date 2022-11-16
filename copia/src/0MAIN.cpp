//============================================================================
// Name        : copia.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Pesimista.h"
#include "Optimista.h"
#include "Neutral.h"
#include "Comentario.h"
#include "Comentador.h"
#include "Fecha.h"

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Neutral n;
	Fecha f(10,11,2020);
	cout<<"Puntaje: "<<n.seleccionarCategoria(7)<<endl;
//	Comentador comentador()
//	Comentario c("Mi comentario", f, 8);
//	c.mostrarComentario();

	return 0;
}
