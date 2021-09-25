/*
Escribe un programa que lea de la entrada estándar tre números.
Después debe leer un cuarto número e indicar si el número coincide 
con alguno de los introducidos con anterioridad
*/
#include <iostream>
using namespace std;
int main (){
	int a,b,c,d;
	cout <<"Ingresa el primer numero: ";
	cin >> a;
	cout <<"Ingresa el segundo numero: ";
	cin >>b;
	cout <<"Ingresa el tercer numero: ";
	cin >> c;
	cout <<"Ingresa el cuart numero: ";
	cin >>d;
	if((d==a)&&(d==b)&&(d==c)){
		cout <<"Todos los numeros son iguales";
	}else if((d==a)&&(d==b)){
		cout <<"El cuarto numero es igual al primero y al segundo "<<d<<":"<<a<<":"<<b<<endl;
	}else if((d==b)&&(d==c)){
		cout <<"El cuarto numero es igual al segundo y al tercero "<<d<<":"<<b<<":"<<c<<endl;
	}else if((d==a)&&(d==c)){
		cout <<"El cuarto numero es igual al primero y al tercero "<<d<<":"<<a<<":"<<c<<endl;
	}else if(d==a){
		cout <<"El cuarto numero es igual a primero " <<d<<":"<<a<<endl;
	}else if(d==b){
		cout <<"El cuarto numero es igual al segundo "<<d<<":"<<b<<endl;
	}else if(d==c){
		cout <<"El cuarto numero es igual al tercero "<<d<<":"<<c<<endl;
	}else{
		cout <<"Ningun numero es igual";
	}
	return 0;
}
