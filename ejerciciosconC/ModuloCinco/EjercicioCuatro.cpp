/*
Escribe un programa que lea de la entrada est�ndar un vector de
n�meros y muestre en la salida est�ndar los n�meros del 
vector con sus �ndices asociados elementos.
Video 32
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	int vector[100];
	int numeroElementos;
	cout<<"Digite el numero de elementos que tendra el arreglo: ";
	cin >>numeroElementos;
	
	for (int i = 0; i<numeroElementos;i++){
		cout<<"Digite un numero: ";
		//Guardando los eslementos de un vector
		cin >>vector[i];
	}
	//Mostrar los elementos con sus indices asociados
	for (int i = 0 ; i<numeroElementos;i++){
		cout<<"Los valores cuando i: "<< i<< "->"<<vector[i]<< endl;
		
	}
	system("pause");
	return 0;
	
}
