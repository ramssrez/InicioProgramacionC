/*
Escriba un programa que lea de la entrada estándar los dos catetos
de un triángulo rectángulo y escriba en la salida estándar su hipotenusa
*/
#include <iostream>
#include <math.h>
using namespace std;

int main (){
	//sqrt es para calcular la raiz cuadrada de una variable
	//pow ea para elevar una variable, expresandose de la siguiente manera
	//pow(variableElevar, Exponente a Elevar)
	float catA, catB, hipotenusa=0;
	cout <<"Ingrese el cateto A: "; cin >> catA;
	cout << "Ingrese el cateto B: "; cin >> catB;
	//hipotenusa = sqrt((catA*catA)+(catB*catB));
	//Otra forma de expresarlo es la siguiete
	hipotenusa = sqrt(pow(catA,2)+pow(catB,2));
	cout <<"La hipotenusa es: " << hipotenusa << endl;
	return 0;
}
