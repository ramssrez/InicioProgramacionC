/*
Realice un programa que lea de la entrada estándar números hasta que
se introduzca un cero. En ese momento el programa debe terminar y mostrar
en la salida estándar el número de valores mayores que que cero leídos.
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int i,j;
	int valor;
	i=0;
	j=0;
	do{
		cout <<"Ingrese un valor: ";
		cin >>valor;
		if(valor>0){
			i++;
		}
		j++	;
	}while(valor != 0);
	
	cout<<"El valor de los numero positivos son: " <<i<<endl;
	cout<<"El Numero de veces que se ingreso un numero: "<<j<<endl;
	getch();
	return 0;
}

