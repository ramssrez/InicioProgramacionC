/*
Un estudiante de ingeniería decide crear un programa que realiza lo siguiente:

a. Lea las edades de 50 personas.
b. Calcule y presente el promedio de edades
c. Calcule y presente cuántas personas hay mayores de 18 años y cuántas
menores de edad.
d. Calcule y presente si hay más personas mayores de edad, más menores de
edad o si hay misma cantidad
*/
#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Librería en donde esta la función srand, en el cual las edades van cambiando conforme vuelva a ejecutar el progrma
#include <time.h>
//Declaración de las variables globales del programa
int numeroEdades = 50, i;
//Declaración de las funciones
//Función que lee las edades de las personas
void leerEdades(int edades[]);
//Función que genera las edades con la función srand()
void generadorEdades(int edades[]);
//Función que calcula el promedio de edades
float promedioEdades (int edades[]);
//Función que verifica el número de personas
void verificarPersonas(int edades[]);
//Inicio de la función principal
int main(){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Invocación de la función srand()
	srand(time(NULL));
	//Declaración de variables locales para el problema a tratar como el vector de edades
	unsigned int edad[numeroEdades];
	printf( "\n\t ********** Bienvenido al programa generador de edades **********\n\n" );
	printf( "\n\t ********** Hacemos uso de la función rand() en C **********\n\n" );
	//leerEdades(edad);
	//Llamado a la función generarEdades()
	generadorEdades(edad);
	//Llamado a la función promedioEdades()
	printf("\tEl promedio de edad es: %.0f años \n",promedioEdades (edad));
	//Llamado a la función verificarPersonas()
	verificarPersonas(edad);
    //Método que permite que no se cierre la ventana después de su ejecución.
	system("pause");
	//Retorno del valor 0 para dar por terminado el programa
	return 0;  
}
//Definición de funciones
void generadorEdades(int edades[]){
	for( i=0; i<numeroEdades;i++ ){
		edades[i]= rand()%100;
   }
} 

float promedioEdades (int edades[]){
	//Declaración de variables locales promedioEdades()
	float suma = 0;
	for( i=0; i<numeroEdades; i++ ){
   		suma = suma + edades[i]; 
	}
	return (suma/numeroEdades);
}

void verificarPersonas(int edades[]){
	//Declaración de variables locales verificarPersonas()
	int mayor = 0, menor = 0;
	for( i=0; i<numeroEdades; i++ ){
	    if(edades[i]>18){
		mayor=mayor+1;
		}
	}
	//Impresión de las personas mayores y menores
	menor = numeroEdades-mayor;
	printf( "\tEl numero de personas mayores de edad son: %d personas\n", mayor);
	printf( "\tEl numero de personas menores de edad son: %d personas\n", menor);
	//Estructuras en donde se compara las edades
	if(mayor>(numeroEdades/2)) {
		printf( "\tHay %d mayores de edad, por lo tanto hay mas mayores de edad\n",mayor);
	}
 	if(mayor==(numeroEdades/2)){
		printf( "\tHay %d mayores de edad y %d menores de edad,  por lo tanto hay igual mayores de edad que de menores\n",mayor,menor);
	}
	if(mayor<(numeroEdades/2)){
		printf( "\tHay %d menores de edad, por lo tanto hay mas mayores de edad\n",menor);
	}
}

void leerEdades(int edades[]){
	for (i = 0; i<numeroEdades;i++){
		printf("\n Ingresa la edad de las personas %d: \n" ,(i+1));
		scanf("%d", &edades[i]);
	}
}

   
   

