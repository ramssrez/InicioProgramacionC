/*
Cambiar un número entero con el mismo valor pero en romanos
  M = 1000
  D = 500
  C = 100
  L = 50
  x = 10
  V = 5
  I=1
*/
#include <iostream>
using namespace std;
int main(){
	int numero,unidades,decenas,centenas,miles;
	cout <<"Ingresa el numero entero: ";
	cin >>numero;
	//Primero se tiene que dividir el numeoro para obtener sus miles, las centenas, las decenas y las unidades
	unidades = numero%10;
	cout<<unidades;
	return 0;
}
