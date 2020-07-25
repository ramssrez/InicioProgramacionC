/*
Desarrolla un programa que lea de la entrada estándar un vector 
de enteros y determine el mayor elemento del vector
Video 33
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int vector [100];
	int numero;
	int mayor = 0;
	cout<<"Ingrese el numero de elementos de arreglos: ";
	cin >>numero;
	for (int i = 0; i<numero;i++){
		cout<<i+1<<", Ingresa los valores del arreglo: ";
		cin >>vector[i];
		
		if(vector[i]>mayor){
			mayor =vector [i]; 
		}
	}
	cout <<"El numero mayor es: "<<mayor;
	return 0;
}
