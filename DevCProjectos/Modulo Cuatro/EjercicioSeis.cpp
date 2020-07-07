/*
Escriba un programa que calcule x^y, donde tanto x como y son enteros positivo,
sin utilizr la sunción pow
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int x,y, resultado=1;
	cout <<"Ingresa la base x: ";
	cin >> x;
	cout <<"Ingrese el factor a elevar y: ";
	cin >>y;
	if ((x==0)&&(y==0)){
		resultado =0;
		//cout <<"El resultado es: " <<resultado ;
	}else{
		for (int i=1;i<=y;i++){
			resultado = resultado*x;
		//resultado *=x;
		}
	}
	
	cout <<"El resultado es: " << resultado<< endl;
	
	getch();
	return 0;
}

