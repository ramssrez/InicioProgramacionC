/*
Sentencia for
    for(expresion1; expresion logica; expresion2){
       conjunto de expresiones;
    }
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main (){
	int i;
	cout<<"Rango de 1 a 10" <<endl;
	//El for permite inicializar el for
	for (i = 1;i <= 10;i++){
		cout <<"El valor de i es: " <<i<<endl;
	}
	
	/*
	En el for la variable que esta iterando, se puede inicializar	
	El siguiente ejemplo se puede mostrar una de las formas en como se puede hacer
	for (int i = 1;i <= 10;i++){
		cout <<"El valor de i es: " <<i<<endl;
	}
	*/
	
	
	cout <<"Rango de 10 a 1" <<endl;
	for (i = 10;i >= 1;i--){
		cout <<"El valor de i es: " <<i<<endl;
	}
	getch();
	return 0;
}
