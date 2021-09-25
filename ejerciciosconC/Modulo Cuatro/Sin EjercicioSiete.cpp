//Escribe un programa que calcule el valor de: 1+2+3+4+++n
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int valor, resultado =0 ;
	cout <<"Digite el numero de elementos: ";
	cin >> valor;
	 for (int i = 1; i<=valor;i++){
	 	//resultado = resultado +i;
	 	resultado +=i;
	 }
	 cout << "La suma es: " << resultado;
	
	getch();
	return 0;
}
