//Escribe un fragmento de programa que intercambie los valores de dos variables
#include<iostream>
using namespace std;

int main(){
	int x;
	int y;
	int aux;
	cout << "Digite el primer valor: "; cin >> x;
	cout << "Digite el segundo valor: "; cin >> y;
	
	
	/*
	x=10
	y=5
	despues 
	x=5
	y=10
	*/
	aux = x;
	x = y;
	y = aux;
	cout <<"Los valores cambiados son x: " << x <<endl ;
	cout <<"Los valores cambiados son y: " << y <<endl ;
	return 0;
}
