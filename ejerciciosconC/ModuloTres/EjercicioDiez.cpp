/*
Mostrar los meses del año, pidiendole al usuario un número entre
1-12 y mostrar el mes al que corresponde
*/
#include <iostream>
using namespace std;
int main (){
	int mes;
	cout <<"Selecciona un numero entre 1 y 12: ";
	cin>>mes;
	
	switch(mes){
		case 1: cout <<"El mes es Enero"; break;
		case 2: cout <<"El mes es Febrero"; break;
		case 3: cout <<"El mes es Marzo"; break;
		case 4: cout <<"El mes es Abril"; break;
		case 5: cout <<"El mes es Mayo"; break;
		case 6: cout <<"El mes es Junio"; break;
		case 7: cout <<"El mes es Julio"; break;
		case 8: cout <<"El mes es Agosto"; break;
		case 9: cout <<"El mes es Septiembre"; break;
		case 10: cout <<"El mes es Octubre"; break;
		case 11: cout <<"El mes es Noviembre"; break;
		case 12: cout <<"El mes es Diciembre"; break;
		default : cout <<"Ese numero no esta entre el rango de 1 y 12"; break;
	}
	
	return 0;
}

