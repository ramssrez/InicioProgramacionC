/*
Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un período de 24 horas. Es decir debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja.

*/
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float temp, baja=100, alta=0, med=0;
	for(int i=4;i<=24;i+=4){
		cout<<"La temperatura de "<<i<<" hs es: ";
		cin>>temp;
		med += temp;
		if(temp>alta){
			alta = temp;
		}
		if(temp<baja){
			baja = temp;
		}
	}
	cout<<"La temperatura media es: "<<med/6<<endl;
	cout<<"La temperatura mas baja es: "<<baja<<endl;
	cout<<"La temperatura mas alta es: "<<alta<<endl;
	getch();
	return 0;
}
