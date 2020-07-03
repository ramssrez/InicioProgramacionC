/*
Hacer un menú que considere las siguientes opciones
Caso 1: Cubo de un número.
Caso 2: Número par o impar.
Caso 3. Salir.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int opc;
	cout <<"\tBienvenido al ejercicio cuatro"<<endl;
	cout <<"1. Cubo de un numero"<<endl;
	cout <<"2. Numero par o impar"<<endl;
	cout <<"3. Salir "<<endl;
	cout <<"Opcion: ";
	cin >> opc;
	switch(opc){
		case 1:
			float n1;
			cout <<"Ingrese un numero: ";
			cin >> n1;
			cout << "El cubo del numero es: " <<pow(n1,3);
			break;
	}
	return 0;
}
