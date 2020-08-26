#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
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
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaraci�n de variables locales.
	int valorMayor;
	//int opcion;
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
        		printf("El valor m�ximo de la matriz es: %d",valorMayor);
        		imprimirFinOpcion();
				break;
        	case 4:
        		imprimirInicioOpcion(opcion);
        		printf("\n\t Usted acaba de salir del men�\n");
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
		printf("No se han registrado valores, vuelve al men� principal y elige la primera opci�n \n");
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
