/*
Hacer un programa para rellenar una matriz pidiendo al 
usuario el número de filas y columna,
Posteriormente mostrar la matrix en pantalla
Video 37
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main (){
	int n,m;  //n es fila    m es columna
	int matriz [100][100];
	/*
	matriz de muestra
	3x3
	1 2 3
	4 5 6 
	7 8 9
	
	*/
	cout<<"Ingresa el valor de n: ";
	cin >> n;
	cout<<"Ingrese el valor de m: ";
	cin >> m;
	//Almacenado elementos en la matriz
	for (int i = 0; i<n;i++){
		for (int j =0; j<m;j++){
			cout<<"["<<i<<"]["<<j <<"] ";
			cin >>matriz[i][j];
		}
	}
	//Mostrando la matriz
	cout<<"La matriz es la siguiente: "<<endl;
	for (int i = 0; i<n;i++){
		for (int j =0; j<m;j++){
			cout<<i<<","<<j <<" "<<matriz[i][j]<<endl;
		}
	}
	
	cout<<"La matriz es la siguiente: "<<endl;
	for (int i = 0; i<n;i++){
		for (int j =0; j<m;j++){
			cout<<" "<<matriz[i][j]<<" ";
		}
		cout <<"\n";
	}
	system("pause");
	return 0;
}
