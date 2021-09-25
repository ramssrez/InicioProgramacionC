/*
Hacer un programa que simule un cajero automático con un saldo 
inicial 1000 dólares.
*/
#include <iostream>
using namespace std;
int main(){
	int saldoInicial = 1000;
	int opc;
	float extra;
	float saldo = 0;
	float retiro;
	cout <<"\tBienvenido a su cajero virtual"<<endl;
	cout <<"1. Ingresardinero en cuenta"<<endl;
	cout <<"2. Retirara dinero de la cuenta"<<endl;
	cout <<"3. Salir "<<endl;
	cout <<"Opcion: ";
	cin >> opc;
	
	switch(opc){
		case 1:
			cout <<"Digite la cantidad de dinero a ingresar: ";
			cin >> extra;
			saldo = saldoInicial + extra;
			cout <<"Dinero de cuenta: " <<saldo;
			break;
		case 2:
			cout <<"Digite la cantidad de dinero que va a retirar: ";
			cin >> retiro;
			if(retiro > saldoInicial){
				cout << "No tienes saldo suficiente";
			}else{
				saldo = saldoInicial - retiro;
				cout <<"Dinero de cuenta: " <<saldo;				
			}
			
			break;
		case 3:
			cout <<"Adios!!!!!!!!!!!!!!";
			break;
	}
	return 0;
}
