#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
void imprimirInicioOpcion();
//Función que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la función principal
int main (){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	int opcion;
	printf("ESto es una prueba");
	do{
		printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)Número de vocales.");
        printf("\n\t3)Número de espacios en blanco.");
        printf("\n\t4)Número de tabuladores.");
        printf("\n\t5)Salir del programa.");
        printf("\n\tEscribe la opción que deseas escoger: ");
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
        		printf("\n\t Usted acaba de salir del menú\n");
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
//Declaración de funciones
void imprimirFinOpcion(){
	printf("\n\n **************************** Ha regresado al menú principal ****************************\n\n\t");
	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
}
void imprimirInicioOpcion(int opcion){
	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
	switch(opcion){
		case 1:
			printf("\n\n **************************** Ha ingresado a la primera opción ****************************\n\n\t");
			break;
		case 2:
			printf("\n\n **************************** Ha ingresado a la segunda opción ****************************\n\n\t");
			break;
		case 3:
			printf("\n\n **************************** Ha ingresado a la tercera opción ****************************\n\n\t");
			break;
		case 4:
			printf("\n\n **************************** Ha ingresado a la cuarta opción ****************************\n\n\t");
			break;
		case 5:
			printf("\n\n **************************** Ha ingresado a la quinta opción ****************************\n\n\t");
			break;
		default:
			printf("\n\t Ha elegido una opción invalida, vuelva a escoger una opción\n");
			break;
	}
}
