#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Librer�a en donde esta la funci�n srand, en el cual las edades van cambiando conforme vuelva a ejecutar el progrma
#include <time.h>
//Declaraci�n de las variables globales del programa
int  dimensionVector= 10,i,j;
void generadorVector(int vector[]);
void imprimirVector(int vector[]);
int main(){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	srand(time(NULL));
	unsigned int i=0,j=0,variable,A[12],vector[10];
	generadorVector(vector);
	imprimirVector(vector);
	for( i=0; i<dimensionVector; i++ ){
		printf( "%d,", vector[i] );
	}
	printf( "Estos son 10 numeros aleatorios: \n\n" );
	for( i=0; i<10; i++ ){
		A[i]= rand()%20;
	}
	for( i=0; i<10; i++ ){
		printf( "%d,", A[i] );
	}
	
	for(i=0; i<10; i++ ){
		for( j=0; j<10; j++ ){
			if(A[j]>A[j+1]){
				variable=A[j];
				A[j]=A[j+1];
				A[j+1]=variable;
			}
		}
	}
	printf( "\nLos numeros ordenados son:" );
			
	for( i=0; i<10; i++ ){
    printf( "\%d,", A[i] );
	}
	
	printf( "\nEl numero maximo es:%d", A[9]);
	system("pause");
	return 0;  
}
//Definici�n de funciones
void generadorVector(int vector[]){
	for( i=0; i<dimensionVector;i++){
		vector[i]= rand()%20;
   }
}
void imprimirVector(int vector[]){
	for( i=0; i<dimensionVector; i++ ){
		printf( "%d\n", vector[i] );
	}
}

