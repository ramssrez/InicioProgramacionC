/*
Hacer un men� que considere las siguientes opciones
Caso 1: Cubo de un n�mero.
Caso 2: N�mero par o impar.
Caso 3. Salir.
*/
#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int opc;
	cout <<"\tBienvenido, elige una opcion"<<endl;
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
		case 2:
			int n2;
			cout <<"Ingrese un numero: ";
			cin >> n2;
			if(n2%2==0){
				cout<<"El numero es par ";
			}else {
				cout<<"El numero es impar";
			}
			break;
		case 3:
			cout <<"Adios!!!!!!!!!!!!!!";
			break;
	}
	return 0;
}
