/*
Ejercicio 14 
En una clase de 5 alumnos se han realizado tres ex�menes y
se requiere determinar el n�mero de :
Alumnos que aprobaron todos los ex�menes.
Alumnos que aporobaron al menos un ex�men.
Alumnos que aprobaron �nicamente el �ltimo examen.
Realice un programa que permita la lectura de los datos y 
el c�lculo de las estadisticas.

*/
#include <iostream>
#include <stdlib.h>
using namespace std;
 int main (){
 	int notaUno;
 	int notaDos;
 	int notaTres;
 	int todos=0;
 	int uno = 0;
 	int ultimo =0;
 	for (int i= 1; i<=5;i++){
 		cout <<"Alumno numero: " << i<< endl;
 		cout <<"Ingrese la primera nota: ";
 		cin >> notaUno;
 		cout <<"Ingrese la segunda nota: ";
 		cin>> notaDos;
 		cout <<"Ingrese la tercera nota: ";
 		cin >> notaTres;
 		if (notaUno >= 7 && notaDos >= 7 && notaTres >=7){
 			todos ++;
		 }else if(notaUno<=7&&notaDos<=7&&notaTres>=7){
		 	ultimo ++;
		 }else if((notaUno>=7&&notaDos<=7&&notaTres<=7)||(notaUno<=7&&notaDos>=7&&notaTres<=7)||(notaUno<=7&&notaDos<=7&&notaTres>=7)){
		 	uno ++;
		 }
 		
	 }
	 if(todos == 0 && ultimo ==0 && uno == 0){
	 	cout <<"Todos los alumnos reprobaron los tres examenes"<<endl;
	 }else{
	 
	 	cout << "El numero que aprobaron todos: " <<todos<<endl;
 	 	cout << "El numero que aprobaron el ultimo: " <<ultimo<<endl;
	 	cout << "El numero que aprobaron solo uno: " <<uno<<endl;
	}
	 system("pause");

 	return 0;
 }
