/*
Escribe un programa que calcule el valor de 2^1+2^2+2^3+...+2^n
*/
#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
int main (){
	int numero, suma=0, elevacion=0;
	cout <<"Digite un numero: ";
	cin >> numero;
	for(int i = 1; i<=numero; i++){
		elevacion=pow(2,i);
		suma = suma+ elevacion;
	}
	cout <<"El resultado es: " << suma<<endl;
	system("pause");
	return 0;
}
