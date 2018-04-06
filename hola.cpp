//============================================================================
// Name        : hola.cpp
// Author      : CGP
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void ramaSecreta();
void ramaSecretaVersion1_0();
void nuevoMetodo();

int main() {
	
	cout << "!!!Hello World!!!" << endl; // Cambio en comentario 1
	cout << " Hola Mundo!! " << endl;			// comentario 2
	cout << "Bon jour!!!" << endl;					// comentarios 3
	cout << "Ciao Mondo!!!" << endl;					// comentarios 3
	cout << "Egun on!!!" << endl;					//COMENTARIO NUEVO EN LA RAMA
	return 0;
}



void ramaSecretaVersion1_0() {
	cout << "Rama secreta v1.0 \n" ;	
	cout << "Change in rama secreta v1.0 \n" ;	
}

void nuevoMetodo(){
	cout << "Nuevo método" << endl;
}

void changeColor(){
	cout << "Change color" << endl;
}
