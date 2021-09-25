/*
*Escribe un programa que calcule el valor de 1-2+3-4+5-6....n
*Video numero 28
*/
#include <iostream>}
#include <stdlib.h>
using namespace std;

int main (){
	int n, resultado = 0;
	cout << "Dame un numero:";
	cin >> n;
	for(int i = 1; i<=n;i++){
		if(i%2==1){
			resultado  +=i;
		}else{
			resultado -=i;
		}
	}
	cout << "El resultado de la expresion es: " << resultado<<endl;
	system("pause");
	return 0;
}
