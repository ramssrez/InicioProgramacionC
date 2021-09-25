/*
En esta sentencia primero ejecuta y depues piensa

Sentencia do while
     do{
      conjunto de instrucciones;
      
	}while(expresión lógica);
	
*/
#include <iostream>
//Esta libreria es paracida a la anterior, pero con el detalle de que se utiliza otra función
#include <stdlib.h>
using namespace std;
int main (){
	int i ;
	i=1;
	//incremento de i de 1 a 10
	cout <<"Incremento de 1 a 10" <<endl;
	do {
		cout <<i<<endl;
		i++;
	}while(i<=10);
	
	//Decremento del do...while
	i=10;
	cout <<"Decremento de 10 a 1"<< endl;
	do{
		cout <<i<<endl;
		i--;
	}while(i>=1);
	
	//funcion similar a la de getch() para poder ejecutar el ejecutable
	system ("pause");
	return 0;
}
