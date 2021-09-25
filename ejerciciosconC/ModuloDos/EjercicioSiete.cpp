/*
La calificación final de unestudiante es la media de tres notas
La nota de practicas que cuenta con 30% total la nota teórica que cuenta un
60% y la nota de participación que cuenta con el 10 % restante Escriba un programa
que lea de la entrada estándar las tres notas de un alumno y escriba en la salida estándar su nota final
*/
#include <iostream>
using namespace std;

int main(){
	float calPrac, calPart,calTeo, promedio=0;
	cout << "Digite la primera nota (practicas): "; cin >> calPrac;
	cout << "Digite la segunda nota (Teorica): "; cin >> calTeo;
	cout << "Digite la primera nota(Participacion): "; cin >> calPart;
	promedio = ((calPrac*0.3)+(calPart*0.60)+(calTeo*0.10));
	/*
	//Tambien se puede escribir de la siguiente manera
	calPrac = calPrac *  0.30   == calPrac*=calPrac
	calPart = calPart *  0.60   == calPart*=calPart
	calTeo = calTeo *  0.10   == calTeo*=calart
	promedio = calPrac+calPart+calTeo*0.10;

	*/
	cout << "El promedio final es: " << promedio <<endl;
	return 0;
}
