/*Sentencia swich
	switch(ezpresion){
		case literal1:
			intrucciones;
			break;
		case literal 2:
			instrucciones;
			break;
		default:
			intruccionesDefault;
			break;
	}
*/
#include <string>
#include <iostream>

using namespace std;
int main (){
	int numero;
	string nombre;
	cout << "Digite un numero entre 1-5: ";
	cin >> numero;
	cout <<"Digite un nombre: ";
	cin >> nombre;
	cout << "El nombre es: " <<nombre<<endl;
	
	switch(numero){
		case 1:
			cout << "Es el numero 1" << endl;
			break;
		case 2:
			cout << "Es el numero 2" << endl;
			break;
		case 3:
			cout << "Es el numero 3" << endl;
			break;
		case 4:
			cout << "Es el numero 4" << endl;
			break;	
		case 5:
			cout << "Es el numero 5" << endl;
			break;
		default:
			cout <<"Es un numero diferente entre 1 y 5";
			
	}
	return 0;
}
