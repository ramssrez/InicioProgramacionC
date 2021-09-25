/*
La sentencia while, esta se caracteriza que puede ser infinita, si no se le limita 
con las expresiones que se le asignaron

  while (expresión lógica){
   conjunto de intrucciones
  }
*/
#include <iostream>
//Con esta libreria hace que nuestro ejecutables no se detenga con una funcion
#include <conio.h>
using namespace std;
int main(){
	int i;
	i = 1;
	//While en donde se realiza del 1 al 10
	cout << "Del 1 al 10";
	while(i<=10){
		cout << i <<endl;
		//i= i + 1;
		i++;
	}

	//while en donde se realiza del 1 al 100
	cout << "Del 1 al 100"<<endl;
	i=1;
		while(i<=100){
		cout << i <<endl;
		//i= i + 1;
		i++;
	}
	
	//while en donde se va a realizar de orden decendente
	cout << "Orden decendente"<<endl;
	while(i>=1){
		cout << i <<endl;
		//i= i + 1;
		i--;
	}
	
	//cout << "While infinito" << endl;
	//while(i<=10){
	//	cout <<"Esto es un blucle infinito" <<endl;
	//}
	
	//La siguiente funcion es la encargada de que nuestro ejecutable se desarrollo demanera adecuada
	getch();
	return 0;
}
