#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Librer�a en donde esta la funci�n srand, en el cual las edades van cambiando conforme vuelva a ejecutar el progrma
#include <time.h>
//Declaraci�n de las variables globales del programa, tanto los contadores como la dimensi�n del vector
int  dimensionVector= 10,i,j;
//Funci�n que genera las n�meros con la funci�n srand()
void generadorVector(int vector[]);
//Funci�n que imprime el vector que estamos ana�izando
void imprimirVector(int vector[]);
//Funci�n que desarrolla el metodo de ordenamiento de burbuja.
void burbuja(int vector []);
int main(){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Invocaci�n de la funci�n srand()
	srand(time(NULL));
	//Declaraci�n de variables locales para el problema a tratar como el vector a generar
	unsigned int vector[dimensionVector];
	printf( "\n\t ********** Bienvenido al programa generador de n�meros en un vector **********\n\n" );
	printf( "\n\t ********** Hacemos uso de la funci�n srand() en C **********\n\n" );
	//Llamado a la funci�n generadorVector()
	generadorVector(vector);
	printf( "Estos son %d n�meros aleatorios a partir de srand: \n",dimensionVector );
	//Llamado a la funci�n imprimirVector()
	imprimirVector(vector);
	//LLamado a la funci�n burbuja()
	burbuja(vector);
	printf( "Los n�meros ordenados son: \n" );
	//Se vuelve a llamar a la funci�n imprimirVector() ahora ordenados
	imprimirVector(vector);
	printf( "El n�mero m�ximo es: %d \n\n", vector[dimensionVector-1]);
	//M�todo que permite que no se cierre la ventana despu�s de su ejecuci�n.
	system("pause");
	//Retorno del valor 0 para dar por terminado el programa
	return 0;  
}
//Definici�n de funciones
void generadorVector(int vector[]){
	for( i=0; i<dimensionVector;i++){
		vector[i]= rand()%50;
   }
}
void imprimirVector(int vector[]){
	printf( "\t" );
	for( i=0; i<dimensionVector; i++ ){
		printf( "%d ", vector[i] );
	}
		printf( "\n\n" );
}
void burbuja(int vector[]){
	//Declaraci�n de variables locales burbuja()
	int variable;
	for(i=0; i<dimensionVector; i++ ){
		for( j=0; j<dimensionVector; j++ ){
			if(vector[j]>vector[j+1]){
				variable=vector[j];
				vector[j]=vector[j+1];
				vector[j+1]=variable;
			}
		}
	}	
}

