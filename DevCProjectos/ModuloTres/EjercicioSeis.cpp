/*
Escrib aun programa que lea de la entrada est�ndar un car�cter e indique en 
la salida est�ndar si el car�cter esuna vocal min�scula, es una vocal may�scula o no es una voal
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
