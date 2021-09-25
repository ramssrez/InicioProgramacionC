/*Escribe un programa que calcule las soluciones de una ecuación de 
segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que:
*/
#include <iostream>
#include <math.h>

using namespace std;
int main(){
	float a,b,c,x1,x2, raiz;
	cout <<"Ingresa el valor de a: "; cin>> a;
	cout <<"Ingresa el valor de b: "; cin>> b;
	cout <<"Ingresa el valor de c: "; cin>> c;
	raiz=pow(b,2)-4*a*c;
	//Esta condicioón es para los numero complejos
	if (raiz >= 0){
		x1=(-b+(sqrt(raiz)))/(2*a);
		x2=(-b-(sqrt(raiz)))/(2*a);
		cout << "La primera raiz es: " << x1 << endl;
		cout << "La segunda raiz es: " << x2 << endl;
	}else{
		cout <<"La raiz es negativa, nos encontramos con numeros complejos";
	}
	return 0;
}
