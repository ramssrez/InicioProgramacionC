 /*Escribe un programa que lea de la entrada estandar el precio de un 
 producto y muestre en la salida estándar el precio del producto al aplicarle
 IVA
 */
 #include <iostream>
 using namespace std;
 int main (){
 	double valor = 0;
 	double iva = 0.16;
 	double ivaValor = 0;
	 	 	  
 	cout << "Escribe el valor del producto: "; 
	cin>> valor;
	ivaValor = (valor*iva) + valor ;
 	cout <<"El precio con IVA es: " <<ivaValor << endl; 
 	return 0;
 }
