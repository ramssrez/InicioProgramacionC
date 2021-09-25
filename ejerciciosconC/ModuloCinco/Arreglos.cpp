/*
Inicio del modulo Cinco "Arreglos y vectores
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	//Declaración de arreglos de 10 elemenotos
	int numero [] = {1,2,3,4,5,6,7,8,9,10};
	int numeroDos[] =  {1,4,5,2,36,8,8,9,6,5,2,2};
	cout <<"El numero en 0 es: "<< numero[0]<<endl;
	for (int i = 0; i<10;i++){
		cout <<"arreglos posicion: " <<i<< " valor: " <<numero[i]<<endl;
	}
	
	system("pause");
	return 0;	

}
