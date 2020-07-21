#include <iostream>
/*
Programa que hace una encriptación en C++
*/
using namespace std;
void encriptar (char frase[50]);

 int main (){
 	char frase [50];
 	cout <<"Ingrese una frase" << endl;
 	cin.getline(frase,50);
 	encriptar(frase);
 	cout << "La frase encriptada es: " << frase;
 	
 	
 	return 0;
 }
 
 void encriptar (char frase[50]){
 /*usa el codigo ASCII para cambiar el  valor del caracter
 */
 	int i = 0;
 	while (frase[i] !=0){
 		frase[i] = frase[i]^25;
 		i++;
	 }
 }
