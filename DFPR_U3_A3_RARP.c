#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Librería en donde esta la función srand, en el cual las edades van cambiando conforme vuelva a ejecutar el progrma
#include <time.h>
//Declaración de las variables globales del programa, tanto los contadores como la dimensión del vector
int  dimensionVector= 10,i,j;
//Función que genera las números con la función srand()
void generadorVector(int vector[]);
//Función que imprime el vector que estamos anañizando
void imprimirVector(int vector[]);
//Función que desarrolla el metodo de ordenamiento de burbuja.
void burbuja(int vector []);
int main(){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Invocación de la función srand()
	srand(time(NULL));
	//Declaración de variables locales para el problema a tratar como el vector a generar
	unsigned int vector[dimensionVector];
	printf( "\n\t ********** Bienvenido al programa generador de números en un vector **********\n\n" );
	printf( "\n\t ********** Hacemos uso de la función srand() en C **********\n\n" );
	//Llamado a la función generadorVector()
	generadorVector(vector);
	printf( "Estos son %d números aleatorios a partir de srand: \n",dimensionVector );
	//Llamado a la función imprimirVector()
	imprimirVector(vector);
	//LLamado a la función burbuja()
	burbuja(vector);
	printf( "Los números ordenados son: \n" );
	//Se vuelve a llamar a la función imprimirVector() ahora ordenados
	imprimirVector(vector);
	printf( "El número máximo es: %d \n\n", vector[dimensionVector-1]);
	//Método que permite que no se cierre la ventana después de su ejecución.
	system("pause");
	//Retorno del valor 0 para dar por terminado el programa
	return 0;  
}
//Definición de funciones
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
	//Declaración de variables locales burbuja()
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

