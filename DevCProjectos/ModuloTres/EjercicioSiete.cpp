/*
Escriba un programa que solicite una edad (entero) e
indique en la salida estándar si la edad esta en el rango de 18 a 25
*/
#include <iostream>
using namespace std;
int main (){
	int edad;
	cout << "Ingresa su edad";
	cin>> edad;
	if((edad >= 18)&&(edad <= 25)){
		cout <<"Estas en el rango de edad de 18 a 25";
	}else {
		cout <<"No estas en el rango de edad";
	}
	return 0;
}
