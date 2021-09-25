//Escribe la siguiente expresión a+(b/(c-d))
#include <iostream>
using namespace std ;

int main (){
	float a,b,c,d, resultado = 0;
	cout << "Digite el valor de a: ";
	cin >> a;
	cout << "Digite el valor de b: ";
	cin >> b;	
	cout << "Digite el valor de c: ";
	cin >> c;	
	cout << "Digite el valor de d: ";
	cin >> d;
	if((c-d)==0){
		cout<<"Divicion entre cero, no es posible";
	}else{
		resultado = a+(b/(c-d));
		cout.precision(3);
		cout <<"El resultado es: " <<resultado <<endl;
		return 0;
	}
	//resultado = a+(b/(c-d));
	//cout.precision(3);
	//cout <<"El resultado es: " <<resultado <<endl;
	//return 0;
}
