/*Escibir un programa que realice la entrada y salida de dos numeros
y muestre la suma, resta, division, multiplicación*/
 #include <iostream>
 using namespace std;
 
 int main ()
 {
 	//Variables 
 	int numUno;
 	int numDos;
 	
 	//Se iguala a cero para no traer información basura en la codificación
 	int sum = 0;  //Realizar una suma
 	int res = 0;  //Realizar una resta
 	int mult = 0; //Realizar una multiplicación
 	float div = 0;// realizar una división
 	
 	
 	//Sección del ingreso de los valores
	cout << "Ingresa dos numeros" << endl;
 	cout <<"El primer ingresado: ";
 	cin >> numUno;
 	cout <<"El segundo ingresado: ";
 	cin >> numDos;
 	
 	sum = numUno + numDos;
 	res = numUno - numDos;
 	mult = numUno * numDos;
 	div = numUno / numDos;
 
 	//Seccion de impresion de los valores
 	cout << "La suma es: " << sum <<endl;
 	cout << "La resta es: " << res <<endl;
 	cout << "La multiplicacion es: " << mult <<endl;
 	cout << "La divicion es: " << div <<endl;

 	
 	
 	return 0;
 }
