#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
void imprimirInicioOpcion();
//Funci�n que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la funci�n principal
int main (){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	int opcion;
	printf("ESto es una prueba");
	do{
		printf("\n\tSeleccione la opci�n de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)N�mero de vocales.");
        printf("\n\t3)N�mero de espacios en blanco.");
        printf("\n\t4)N�mero de tabuladores.");
        printf("\n\t5)Salir del programa.");
        printf("\n\tEscribe la opci�n que deseas escoger: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				printf("Caso1");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
			case 2:
				printf("caso 2");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
			case 3:
				printf("Caso 3");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
			case 4:
				printf("caso 4");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
			case 5:
				//printf("caso 5 ");
				imprimirInicioOpcion(opcion);
        		printf("\n\t Usted acaba de salir del men�\n");
        		printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
				system("pause");
				return 0;
				break;
			default:
				printf("Caso default");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
		}
	}while(opcion!=5);
	
}
//Declaraci�n de funciones
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
		case 5:
			printf("\n\n **************************** Ha ingresado a la quinta opci�n ****************************\n\n\t");
			break;
		default:
			printf("\n\t Ha elegido una opci�n invalida, vuelva a escoger una opci�n\n");
			break;
	}
}
