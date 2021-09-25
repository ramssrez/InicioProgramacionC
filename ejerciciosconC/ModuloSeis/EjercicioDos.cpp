/*
Hacer un programa que defina una matriz de 3x3 y escriba una
y escriba un cicli para que muetre la diagonal principal de 
la matriz.
Video 37
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int filas, columnas;
	int matriz [100][100];
	cout<<"Ingresa el valor de filas: ";
	cin >> filas;
	cout<<"Ingrese el valor de columnas: ";
	cin >> columnas;
	if ((filas == 3)&&(columnas == 3)){
		for (int i = 0; i<filas;i++){
			for (int j =0; j<columnas;j++){
				cout<<"["<<i<<"]["<<j <<"] ";
				cin >>matriz[i][j];
			}
		}
		cout<<"La matriz es la siguiente: "<<endl;
		for (int i = 0; i<filas;i++){
			for (int j =0; j<columnas;j++){
				cout<<" "<<matriz[i][j]<<" ";
			}
			cout <<"\n";
		}
		
		
		cout<<"La matriz principal es: "<<endl;
		for (int i = 0; i<filas;i++){
			for (int j =0; j<columnas;j++){
				if(i==j){
					cout<<" "<<matriz[i][j]<<" ";
				}else{
					//cout<<" 0 ";
					cout<<"   ";

				}
			}
			cout <<"\n";
		}
	}else{
		cout<<"No son iguales, vuelve a compilar el programa";
	}
	
	return 0;
}
