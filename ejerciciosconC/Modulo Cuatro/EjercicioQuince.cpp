/*
Realice un programa que solicite al usuario que piense un número
entero entre 1 al 100. El programa debe generar un número aleatorio
en ese mismo rango [1-100] e indicarle al usuario si el numero 
que digito es menor o mayor al número aleatorio, así hasta que lo adivine y por 
último mostrarle el número de intentos que le llevo.
variable = limite inferior + rand()%(limite_superios +1-limite_inferior)
video 30
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int numero, dato, contador=0;
	srand(time(NULL));//Genera un numero aleatorio
	dato = (1 + rand()%(100));
	do{
		cout<<"Digite un numero: ";
		cin >> numero;
		if (numero>dato){
			cout<<"Digite un numero menor" << endl;
		}
		if(numero<dato){
			cout <<"Digite un numero mayor"<<endl;
		}
		contador++;
	}while(numero != dato);
	cout<<"Felicidades adivinaste el numero"<<endl;
	cout <<"Numero de intentos: " << contador << endl;
	system("pause");
	return 0;
}

