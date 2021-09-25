/*
Realice un programa que calcule y meustre en la salida estándar la suma de los cuadrados de los
10 primeros enteros mayores a cero
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int suma = 0, cuadrado;
	for (int i=1 ;i<=10;i++){
		cuadrado = i*i;
		// suma +=cuadrado;
		suma = suma + cuadrado;
	}
	cout << "El resultado de la suma es: " <<suma;
	getch();
	return 0;
}
