/*Realice un programa que lea de la entrada est�ndar los siguientes 
datos de una persona
   Edad: dato de un tipo entero.
   Sexo: dato de tipo car�cter
   Altura en metro: de tipo real.

Tras leer los datos, el programa debe de mostrarlos en la salida est�ndar
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main (){
	//Con esta funci�n se le agrega a los valores en espa�ol como las tildes y en la letra �
	setlocale(LC_CTYPE, "Spanish");
	
	int edad = 0;
	float altura = 0.0;
	//char sexo;  Sin embargo solo agrega un solo caracter y no se podria distinguir entre femenino o masculino
	char sexo[10]; //De esta manera agraga 10 caracteres en la cadena de texto
	
	cout <<"Proporciona tu edad: "; 
	cin >>edad;
	cout <<"Proporciona tu altura: ";
	cin >>altura;
	cout <<"Proporciona tu sexo ";
	cin >> sexo;
	
	cout <<"Tu edad es: " << edad <<" a�os"<<endl;
	cout <<"Tu sexo es: " << sexo <<endl;
	cout <<"Tu altura es: " <<altura <<" metros" <<endl;
	
	 
	return 0;
}
