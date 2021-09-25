/*
Escribe un programa que defin un vector de números y muestre
en la salida estándar el vector en orden inverso. del ultimo al primero
Video 32
*/
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main (){
	int vector[100];
	int n;
	cout<<"Ingrese el numero de elementos: ";
	cin >> n;
	for (int i =0; i<n;i++){
		cout<<"Ingrese un valor: ";
		cin >> vector [i];
	}
	for (int i = n-1; i >= 0 ; i--){
		cout<< "valor i: "<< i<<"->"<<vector[i]<< endl;
	}
	
	getch();
	return 0; 
}
