/*
Dise�ar un programa en C que contenga un men� principal (con estructura condicional
switch case) para manipular un arreglo bidimensional de tipo Int definido de forma global
(Matriz). Las opciones del men� a definir son:
a. Registrar datos en Matriz
b. Imprimir los datos guardados en la matriz
c. Obtener el valor mayor guardado en la Matriz
d. Opci�n para salir del programa
Registrar datos en Matriz, debe ser declarada como funci�n sin par�metros y sin devolver
un valor (void).
Imprimir los datos guardados en la matriz, debe ser declarada como funci�n sin par�metros
y sin devolver un valor (void).
Obtener el valor mayor guardado en la Matriz, debe ser declarada como funci�n sin
par�metros y que devuelve un valor de tipo int para ser impreso por la variable que atrape
dicho valor en el men� principal.
Definir una opci�n para salir del programa, al seleccionar esta opci�n autom�ticamente el
programa dejara de ejecutarse.
*/
#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Declaraci�n de las variables globales del programa, tanto los contadores como la dimensi�n de la matriz
int i,j;
int orden=0, opcion;
int matriz [100][100];
//Funci�n que registra la matriz, donde se puede leer el orden de la matriz y la registra.
void registrarMatriz();
//Funci�n que imprime la matriz que previamente se ingreso.
void imprimirMatriz();
//Funci�n que valida el orden para la opci�n 2 del men�
void validarOrden();
//Funci�n que regresa el valor m�ximo de una matriz
int valorMaximoMatriz();
//Funci�n que imprime las cabeceras de las opciones que se han escogido
void imprimirInicioOpcion();
//Funci�n que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la funci�n principal
int main(){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaraci�n de variables locales.
	int valorMayor;
	//Presentaci�n del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t ********** Bienvenido al sitema de areglos bidimensionales **********\n\n");  
    //Inicio del ciclo while para nuestro men�.
   
	do{
		//Impresi�n de las opciones que se tienen en el men�
    	printf("\n\tSeleccione la opci�n de su preferencia \n\t");
        printf("\n\t1)Registrar los datos en Matriz.");
        printf("\n\t2)Imprimir los datos guardados en la matriz.");
        printf("\n\t3)Obtener el valor mayor guardados en la matriz.");
        printf("\n\t4)Opci�n para salir del programa");
        printf("\n\tEscribe la opci�n que deseas escoger: ");
        //Lectura de la opci�n a elegir
        scanf("%d",&opcion);
        //Uso de switch en el cual se agrega las opciones
        switch(opcion){
        	case 1:
        		//Llamado de las funciones a utilizar
        		imprimirInicioOpcion(opcion);
        		registrarMatriz();
        	    imprimirFinOpcion();
        		break;
        	case 2:
        		//Llamado de las funciones a utilizar
        		imprimirInicioOpcion(opcion);
        		validarOrden();
        		imprimirFinOpcion();
        		break;
        	case 3:
        		//Llamado de las funciones a utilizar
        		imprimirInicioOpcion(opcion);
        		valorMayor = valorMaximoMatriz();
        		printf("\tEl valor m�ximo de la matriz es: %d",valorMayor);
        		imprimirFinOpcion();
				break;
        	case 4:
        		//Llamado de las funciones a utilizar
        		imprimirInicioOpcion(opcion);
        		printf("\n\t Usted acaba de salir del men�\n");
        		printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
				system("pause");
				return 0;
        		break;
        	default:
        		//Llamado de las funciones a utilizar
        		imprimirInicioOpcion(opcion);
        		imprimirFinOpcion();
        		break;
        	
        	
		}
		
	}while(opcion!=4);
} //Fin del program principal
//Definici�n de funciones a utilizar
void registrarMatriz(){
	printf("Ingresa el orden de la matriz: ");
	scanf("%d",&orden);
	if (orden<=1){
		printf("\tEl orden no es el adecuado, debe ser mayor a 2");
	}else{
		for (i = 0; i<orden;i++){
			for (j =0; j<orden;j++){
				printf("\t");
				printf("Ingresa elemento (%d,%d): ", i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
	}

}
void imprimirMatriz(){
	printf("La matriz es la siguiente: \n");
	for (i = 0; i<orden;i++){
		for (j =0; j<orden;j++){
			printf("\t");
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
}
void validarOrden(){
	if(orden<=1){
		printf("No se han registrado valores, vuelve al men� principal y elige la primera opci�n \n");
	}else{
		imprimirMatriz();
	}
}
int valorMaximoMatriz(){
	//Declaraci�n de variables locales
	int mayor=0;
	if(orden<=1){
		printf("No se han ingresado valores, el n�mero mayor de la matriz es cero.\n");
	}
	for (i = 0; i<orden;i++){
		for (j =0; j<orden;j++){
			int valor = matriz[i][j];
			if (valor>mayor){
				mayor=valor;
			}
		}
	}
	return mayor;
}
void imprimirFinOpcion(){
	printf("\n\n **************************** Ha regresado al men� principal ****************************\n\n\t");
	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
}
void imprimirInicioOpcion(int opcion){
	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
	switch(opcion){
		case 1:
			printf("\n\n **************************** Ha ingresado a la primera opci�n ****************************\n\n\t");
			break;
		case 2:
			printf("\n\n **************************** Ha ingresado a la segunda opci�n ****************************\n\n\t");
			break;
		case 3:
			printf("\n\n **************************** Ha ingresado a la tercera opci�n ****************************\n\n\t");
			break;
		case 4:
			printf("\n\n **************************** Ha ingresado a la cuarta opci�n ****************************\n\n\t");
			break;
		default:
			printf("\n\t Ha elegido una opci�n invalida, vuelva a escoger una opci�n\n");
			break;
	}
}
