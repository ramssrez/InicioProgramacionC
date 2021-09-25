/*
Escribe un programa que defina un vector de números
y calcule si existe algún numero en el vactor cuyo valor
equivale a la suma del resto de números del vector
Video 33
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
    int numero, suma=0, a=0;
    int vector[100];
	cout << "Digite el tamaño del vector: ";
	cin >>numero;
	for (int i =0; i<numero;i++){
		cout<<i+1<<" digite el valor: ";
		cin >>vector[i];
		suma +=vector[i];
	}
	cout <<"La suma es: "<<suma<<endl;
	for (int i = 0; i<numero; i++){
		if(vector[i] ==(suma-vector[i])){
			cout<<"El numero : "<<vector[i] <<" es igual a la suma de los demas"<<endl;
			a=1;
		}	
	}
	
	if (a==0){
		cout<<"No hay considencias en la suma de los numeros"<<endl;
	}
	
	system("pause");

	return 0;
}
