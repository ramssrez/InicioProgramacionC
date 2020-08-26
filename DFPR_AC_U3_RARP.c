#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
int unsigned i,j;
int orden=0, opcion;
int matriz [100][100];
void registrarMatriz();
void imprimirMatriz();
void validarOrden();
int valorMaximoMatriz();
void imprimirFinOpcion();
void imprimirInicioOpcion();
int main(){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaración de variables locales.
	int valorMayor;
	//int opcion;
	//Presentación del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t ********** Bienvenido al sitema de areglos bidimensionales **********\n\n");  
    //Inicio del ciclo while para nuestro menú.
	do{
		//Impresión de las opciones que se tienen en el menú
    	printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Registrar los datos en Matriz.");
        printf("\n\t2)Imprimir los datos guardados en la matriz.");
        printf("\n\t3)Obtener el valor mayor guardados en la matriz.");
        printf("\n\t4)Opción para salir del programa");
        printf("\n\tEscribe la opción que deseas escoger: ");
        //Lectura de la opción a elegir
        scanf("%d",&opcion);
        //Uso de switch en el cual se agrega las opciones
        switch(opcion){
        	case 1:
        		imprimirInicioOpcion(opcion);
        		registrarMatriz();
        	    imprimirFinOpcion();
        		break;
        	case 2:
        		imprimirInicioOpcion(opcion);
        		validarOrden();
        		imprimirFinOpcion();
        		break;
        	case 3:
        		imprimirInicioOpcion(opcion);
        		valorMayor = valorMaximoMatriz();
        		printf("El valor máximo de la matriz es: %d",valorMayor);
        		imprimirFinOpcion();
				break;
        	case 4:
        		imprimirInicioOpcion(opcion);
        		printf("\n\t Usted acaba de salir del menú\n");
        		printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
				system("pause");
				return 0;
        		break;
        	default:
        		imprimirInicioOpcion(opcion);
        		printf("Caso distinto");
        		imprimirFinOpcion();
        		break;
        	
        	
		}
		
	}while(opcion!=4);
}
void registrarMatriz(){
	printf("Ingresa el orden de la matriz: ");
	scanf("%d",&orden);
	if (orden<=1){
		printf("\tEl orden no es el adecuado, debe ser mayor a 2");
	}else{
		for (i = 0; i<orden;i++){
			for (j =0; j<orden;j++){
				printf("\t");
				printf("Elemento [%d,%d]: ", i,j);
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
		printf("No se han registrado valores, vuelve al menú principal y elige la primera opción \n");
	}else{
		imprimirMatriz();
	}
}
int valorMaximoMatriz(){
	int mayor;
	mayor = 5;
	return mayor;
}
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
		default:
			printf("\n\t Ha elegido una opción invalida, vuelva a escoger una opción\n");
			break;
	}
}
