/*Escribe un programa que lea valores enteros hasta que se introduzca un 
en el rango de 20 y 30 o se introduzca el valor 0 El programa sebe entregar 
la suma de los valores mayores a 0 intruducidos
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int numero,suma = 0;
	do{
		cout <<"Digite un numero"<< endl;
		cin >> numero;
		if(numero >0){
			suma +=numero;
		}
	}while((numero <20)||(numero>30)&&(numero !=0));
	//Para obtener numero en un rango es adecuado usar el do while
	cout <<"La suma es: "<<suma <<endl;
	system("pause");
	return 0;
}
