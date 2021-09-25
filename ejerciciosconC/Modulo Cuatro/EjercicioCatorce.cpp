/*
Ejercicio 14 
En una clase de 5 alumnos se han realizado tres exámenes y
se requiere determinar el número de :
Alumnos que aprobaron todos los exámenes.
Alumnos que aporobaron al menos un exámen.
Alumnos que aprobaron únicamente el último examen.
Realice un programa que permita la lectura de los datos y 
el cálculo de las estadisticas.

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
