/*
Cambiar un n�mero entero con el mismo valor pero en romanos
  M = 1000
  D = 500
  C = 100
  L = 50
  x = 10
  V = 5
  I=1
*/
#include <iostream>
using namespace std;
int main(){
	int numero,unidades,decenas,centenas,miles;
	cout <<"Ingresa el numero entero: ";
	cin >>numero;
	//Primero se tiene que dividir el numeoro para obtener sus miles, las centenas, las decenas y las unidades
	//De est aforma obtenemos los diferentes nuero que lo componen
	if(numero>3999){
		cout <<"Sale del rango de seleccion, usa otro numero menor a este";
		return 0;
	}

	unidades = numero%10;
	numero /=10;
	cout<<"Unidades "<<unidades<<endl;
	cout <<numero<<endl;
	decenas = numero%10;
	numero /=10;
	cout<<"Decenas "<<decenas<<endl;
	cout <<numero<<endl;
	centenas = numero%10;
	numero /=10;
	cout<<"Centenas "<<centenas<<endl;
	cout <<numero<<endl;
	miles = numero%10;
	numero /=10;
	cout<<"Miles "<<miles<<endl;
	cout <<numero<<endl;
	cout << "El numero romano es: ";
	switch(miles){
		case 1: cout<<"M";break;
		case 2: cout<<"MM";break;
		case 3: cout<<"MMM";break;
	}
	switch(centenas){
		case 1: cout<<"C";break;
		case 2: cout<<"CC";break;
		case 3: cout<<"CCC";break;
		case 4: cout<<"CD";break;
		case 5: cout<<"D";break;
		case 6: cout<<"DC";break;
		case 7: cout<<"DCC";break;
		case 8: cout<<"DCCC";break;
		case 9: cout<<"CM";break;
	}
	switch(decenas){
		case 1: cout<<"X";break;
		case 2: cout<<"XX";break;
		case 3: cout<<"XXX";break;
		case 4: cout<<"XL";break;
		case 5: cout<<"L";break;
		case 6: cout<<"LX";break;
		case 7: cout<<"LXX";break;
		case 8: cout<<"LXXX";break;
		case 9: cout<<"XC";break;
	}
	switch(unidades){
		case 1: cout<<"I";break;
		case 2: cout<<"II";break;
		case 3: cout<<"III";break;
		case 4: cout<<"IV";break;
		case 5: cout<<"V";break;
		case 6: cout<<"VI";break;
		case 7: cout<<"VII";break;
		case 8: cout<<"VIII";break;
		case 9: cout<<"";break;
	}
	return 0;
}
