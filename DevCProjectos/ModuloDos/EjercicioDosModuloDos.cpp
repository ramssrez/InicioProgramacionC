//Expresiones en C++ la cual es (a/b)+1
#include <iostream>
using namespace std;

//Esta es una modificacón de lo para ver lo de git

int main(){
	float a, b, resultado = 0;
	cout << "Digite el valor de a: ";
	cin >> a;
	cout <<"Digite el valor de b: ";
	cin >> b;
	resultado = (a/b) + 1;
	
	cout.precision(2); //Con esta funcion podemos redondear los decimales de salida para nuestro programas
	cout <<"El resultado es: " <<resultado <<endl;
	
	return 0;
}
