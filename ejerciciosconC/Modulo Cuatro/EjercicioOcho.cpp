/*
Escriba un programa que calcule el
 valor de : 1+2+3+..+n(factorial)
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int n, suma=0;
	cout <<"Digite un valor: ";
	cin >> n;
	for (int i = 1; i<=n; i++){
		suma = suma +((2*i)-1);
		//suma +=(2*i-1);
	}
	cout <<"La suma es: " << suma;
	return 0;
}
