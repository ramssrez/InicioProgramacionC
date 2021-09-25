/*
Hacer ua matriz de tipo entera de 2*2, llenarla de números y luego 
copiar todo su contenido hacia otra matriz
Video 38
*/
#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int matriz [2][2]={{1,2},{3,4}};
	int matrizDos [2][2];
	//Pasando el contenido de numeroa s hacia matriz
	for (int i = 0; i <2;i++){
		for (int j=0;j<2;j++){
			matrizDos[i][j]=matriz[i][j];
		}
	}
	
	cout<<"La matriz es la siguiente: "<<endl;
	for (int i = 0; i<2;i++){
		for (int j =0; j<2;j++){
			cout<<" "<<matrizDos[i][j]<<" ";
		}
		cout <<"\n";
	}
		
	getch();

	return 0;
}
