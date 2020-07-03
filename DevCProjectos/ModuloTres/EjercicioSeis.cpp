/*
Escrib aun programa que lea de la entrada estándar un carácter e indique en 
la salida estándar si el carácter esuna vocal minúscula, es una vocal mayúscula o no es una voal
*/
#include <iostream>
using namespace std;
int main (){
	char letra;
	cout <<"Ingresa una letra del teclado";
	cin >> letra;
	switch(letra){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			cout <<"Es una vocal minuscula";
			break;
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			cout <<"Es una vocal mayuscula";
			break;
		default:
			cout << "No es una vocal ni mayuscula ni minuscula";
			break;
	}
	return 0;
}
