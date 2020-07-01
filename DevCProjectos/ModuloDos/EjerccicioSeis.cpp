/*Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos
*/
#include <iostream>
using namespace std;

int main (){
	float notaUno, notaDos, notaTres, notaCuatro, promedio = 0;
	cout << "Digite la primera nota: "; cin >> notaUno;
	cout << "Digite la segunda nota: "; cin >> notaDos;
	cout << "Digite la tercera nota: "; cin >> notaTres;
	cout << "Digite la cuarta nota: "; cin >> notaCuatro;
	promedio = (notaUno+notaDos+notaTres+notaCuatro)/(4);
	cout << "El promedio es: " <<promedio <<endl;
	return 0;
}
