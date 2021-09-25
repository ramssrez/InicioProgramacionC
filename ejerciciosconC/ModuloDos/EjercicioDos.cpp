//Expresiones en C++ la cual es (a/b)/(c+d)
#include <iostream>
using namespace std;

//Escibe la siguiente expresión matemática como expresión en C++

int main(){
	float a, b,c,d, resultado = 0;
	cout << "Digite el valor de a: ";
	cin >> a;
	cout <<"Digite el valor de b: ";
	cin >> b;
	cout << "Digite el valor de c: ";
	cin >> c;
	cout <<"Digite el valor de d: ";
	cin >> d;
	resultado = (a+b)/(c+d);
	
	//cout.precision(2); //Con esta funcion podemos redondear los decimales de salida para nuestro programas
	cout <<"El resultado es: " <<resultado <<endl;
	
	return 0;
}
