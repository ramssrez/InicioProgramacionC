/*
Realice un programa que calcule la descomposición en factores
primos de un número entero
ejemplo 2*2*5= 20
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int n, x=2;
	cout<<"Digite un numero: ";
	cin >> n;
	if(n<=1){
		cout<<"El numero no tiene factores primos"<<endl;
	}else{
		cout <<n<<" = ";
		while(n!=1){
			if(n%x==0){
				cout<<x;
				n/=x;
				if(n!=1){
					cout<<"*";
				}
			}else{
				x++;
			}
		}
		cout<<endl<<endl;
	}
	system("pause");
	return 0;
}
