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
	int vector[]={1,2,3,4,5};
	for (int i = 4; i >= 0 ; i--){
		cout<< "valor i: "<< i<<"->"<<vector[i]<< endl;
	}
	
	getch();
	return 0; 
}
