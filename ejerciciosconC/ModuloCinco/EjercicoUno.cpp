/*
Escribe un programa que defina un vector de números y
calcule la suma de sus elementos.
Video 31
*/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main(){
	int vector[]={1,2,3,4,5};
	int suma = 0;
	
	for (int i = 0; i<5;i++){
		suma = vector[i] + suma;
		cout <<"La suma del vector es: " << suma << endl;
	}
	
	cout<< "La suma total es: "<< suma <<endl;

	
	getch();
	return 0;
}
