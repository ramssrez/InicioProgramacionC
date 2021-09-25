/*
Escriba un programa que lea de la entrada estándar un caráctere indique 
en la salida estándar si el cacrácter es una vocal minuscula o no
*/
#include <iostream>
using namespace std;
int main (){
	char caracter;
	cout <<"Ingresa una letra del teclado: ";
	cin >> caracter;
	switch(caracter){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout <<"Es una vocal minuscula";
			break;
		default:
			cout << "No es una vocal minuscula";
			break;
	}
	return 0;
}
