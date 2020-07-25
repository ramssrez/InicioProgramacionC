/*
Escribe un programa que defina un vector de números y
calcule la multiplicación de sus elementos.
Video 31
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int vector []={1,2,3,4,5,6,7,8,9,0};
	int multi = 1;
	for (int i = 0; i< 10;i++){
		multi = vector[i]*multi;
		cout << "La multiplicacion es: "<< multi<<endl;
	}
	cout<<"La multiplicacion total es: "<<multi<<endl;



	system("pause");
	return 0;
}
