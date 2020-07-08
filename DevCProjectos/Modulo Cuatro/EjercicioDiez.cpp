/*
Escriba un programa que calcule el valor de 1!+2!+3!+...+n!
(suma de factoriales)
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int numero, suma=0, factorial=1;
	cout <<"Digite un numero: ";
	cin >> numero;
	for (int j = 1; j<=numero; j++){
     	//factorial *=i
		factorial *=j;
		suma +=factorial;
	}
	cout <<"El resultado es: " << suma<<endl;
	getch();
	return 0;
}
