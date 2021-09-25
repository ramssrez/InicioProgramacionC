/*
Escriba un programa que lea dos número y determine cuál de 
ellos es mayor
*/
#include <iostream>

using namespace std;
int main (){
	int numUno, numDos;
	cout <<"Escribe el primer numero: ";
	cin >> numUno;
	cout <<"Escriba el segundo numero: ";
	cin >> numDos;
	if (numUno == numDos){
		cout << "Es el mismo numero";
	}else if(numUno < numDos){
		cout <<numUno << " es menor a "<< numDos <<endl;
	}else {
		cout <<numUno << " es mayor a "<< numDos <<endl;
	}
	return 0;
}
