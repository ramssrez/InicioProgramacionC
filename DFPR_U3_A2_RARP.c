#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Librer�a en donde esta la funci�n srand, en el cual las edades van cambiando conforme vuelva a ejecutar el progrma
#include <time.h>
//Declaraci�n de las variables globales del programa
int numeroEdades = 50, i;
//Declaraci�n de las funciones
void generadorEdades(int edades[]);
float promedioEdades (int edades[]);
void verificarPersonas(int edades[]);
//Inicio de la funci�n principal
int main(){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Invocaci�n de la funci�n srand()
	srand(time(NULL));
	//Declaraci�n de variables locales para el problema a tratar como el vector de edades
	unsigned int edad[numeroEdades];
	printf( "\n\t ********** Bienvenido al programa generador de edades **********\n\n" );
	printf( "\n\t ********** Hacemos uso de la funci�n rand() en C **********\n\n" );
	//Llamado a la funci�n generarEdades()
	generadorEdades(edad);
	//Llamado a la funci�n promedioEdades()
	printf("\tEl promedio de edad es: %.0f a�os \n",promedioEdades (edad));
	//Llamado a la funci�n verificarPersonas()
	verificarPersonas(edad);
    //M�todo que permite que no se cierre la ventana despu�s de su ejecuci�n.
	system("pause");
	//Retorno del valor 0 para dar por terminado el programa
	return 0;  
}
//Definici�n de funciones
void generadorEdades(int edades[]){
	
	for( i=0; i<numeroEdades;i++ ){
		edades[i]= rand()%100;
   }
} 

float promedioEdades (int edades[]){
	//Declaraci�n de variables locales promedioEdades()
	float suma = 0;
	for( i=0; i<numeroEdades; i++ ){
   		suma = suma + edades[i]; 
	}
	return (suma/numeroEdades);
}

void verificarPersonas(int edades[]){
	//Declaraci�n de variables locales verificarPersonas()
	int mayor = 0, menor = 0;
	for( i=0; i<numeroEdades; i++ ){
	    if(edades[i]>18){
		mayor=mayor+1;
		}
	}
	menor = numeroEdades-mayor;
	printf( "\tEl numero de personas mayores de edad son: %d personas\n", mayor);
	printf( "\tEl numero de personas menores de edad son: %d personas\n", menor);
	if(mayor>25) {
		printf( "\tHay %d mayores de edad, por lo tanto hay mas mayores de edad\n",mayor);
	}
 	if(mayor==25){
		printf( "\tHay %d mayores de edad y %d menores de edad,  por lo tanto hay igual mayores de edad que de menores\n",mayor,menor);
	}
	if(mayor<25){
		printf( "\tHay %d menores de edad, por lo tanto hay mas mayores de edad\n",menor);
	}
}
   
   

