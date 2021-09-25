/*
Hacer un programa que lea 5 numero en un arreglo, 
los copie a otro arreglo multiplicado por 2 y muestre el 
segundo arreglo
Video 34
*/
#include<iostream>
#include <conio.h>
using namespace std;
int main(){
	int numero; 
	int vector[100];
	int vectorDos[100];
	cout<<"Digite el numero de variables del vector: ";
	cin >> numero;
	for (int i = 0; i<numero ;i++){
		cout<<i+1<<" el primer valor es: ";
		cin >> vector[i];
	}
	for (int i = 0; i<numero ;i++){
		vectorDos[i]=vector[i]*2;
		cout<< 1+i<<" vector Dos: " <<vectorDos[i]<<endl;
	}
	getch();
	return 0;
}
