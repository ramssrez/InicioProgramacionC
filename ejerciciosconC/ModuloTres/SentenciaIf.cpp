/*Condicionales if
  if(condicion){
     instruccion 1;
   }else{
     instrucción 2;
   }
*/
#include <iostream>
using namespace std;

int main (){
	int numero, dato = 5;
	cout << "Digite un numero: ";
	cin>> numero;
	//Dentro de la sentencia del if, siempre va a ser verdadero
	if(numero == dato){ //Verdadero de la expresón true
		cout << "El numero es igual a 5"<<endl;
	}else{
		cout << "El numero es diferente de: " <<dato <<endl;
	}
	
	
    //Otra forma de expresar el if pero con diferente expresión, mencionando que es falso
    //En este caso es si numero es diferente de dato
	if (numero != dato){ //Negación de la expresión falso
		cout << "El numero no es 5"<<endl;
	}else {
		cout << "El numero es 5"<<endl;
	}
	
	//Es para las expresiones que son diferentes ya sea mayor o menor que
	if (numero >  dato){ //Negación de la expresión falso
		cout << "El numero es mayor a: " << dato <<endl;
	}else {
		cout << "El numero es menor a: "<<dato <<endl;
	}
	
		//Es para las expresiones que son diferentes ya sea mayor o menor que
	if (numero <  dato){ //Negación de la expresión falso
		cout << "El numero es menor a: " << dato <<endl;
	}else {
		cout << "El numero es mayor a: "<<dato <<endl;
	}
	
	return 0;	
}

