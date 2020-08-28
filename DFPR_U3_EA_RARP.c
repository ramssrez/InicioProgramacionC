#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <ctype.h>
//#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Declaracipon de variables globales
char frase[100];
int i;
//Función que realiza el contero de vocales minusculas
int contadorVocalesMinusculas(char frase[]);
//Función que realiza el conteo de vocales mayusculas
int contadorVocalesMayusculas(char frase[]);
//Función que realiza el conteo de espacios vacíos
int contadorEspacios(char frase[]);
//Función que realiza el conteo de tabuladores
int contadorTabulador(char frase[]);
//Función que realiza el conteo de caracteres especiales
int contadorEspeciales(char frase[]);
//Función que imprime el inicio de las opciones elegidas
void imprimirInicioOpcion();
//Función que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la función principal
int main (){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaración de variables locales.
	int opcion,vocalesMay, vocalesMin,espacios,tabulador, especial;
		//Presentación del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t **** Bienvenido al sitema de conteo de vocales, espacios, tabuladores y caracteres especiales(#$%&!¡?¿*) ****\n\n");  
    //Inicio del ciclo while para nuestro menú.
	do{
		//Impresión de las opciones que se tienen en el menú
		printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)Número de vocales.");
        printf("\n\t3)Número de espacios en blanco.");
        printf("\n\t4)Número de tabuladores.");
        printf("\n\t5)Número de caracteres especiales.");
        printf("\n\t6)Salir del programa.");
        printf("\n\tEscribe la opción que deseas escoger: ");
        //Lectura de la opción a elegir
		scanf("%d",&opcion);
		//Uso de switch en el cual se agrega las opciones
		switch(opcion){
			case 1:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				printf("Ingresa la frase que deseas ingresar: ");
				gets(frase);
				fgets(frase,100,stdin);
				printf("La cadena es: %s",frase);
				imprimirFinOpcion();
				break;
			case 2:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				vocalesMin = contadorVocalesMinusculas(frase);
				vocalesMay = contadorVocalesMayusculas(frase);
				printf("El número de vocales minúsculas son: %d\n", vocalesMin);
				printf("\tEl número de vocales mayúsculas son: %d", vocalesMay);
				imprimirFinOpcion();
				break;
			case 3:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				espacios = contadorEspacios(frase);
				printf("El número de espacios blancos son: %d", espacios);
				imprimirFinOpcion();
				break;
			case 4:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				tabulador = contadorTabulador(frase);
				printf("El número de tabuladores son: %d", tabulador);
				imprimirFinOpcion();
				break;
			case 5:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				especial = contadorEspeciales(frase);
				printf("El número de caracteres especiales son: %d", especial);
				imprimirFinOpcion();
				break;
			case 6:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
        		printf("\n\t Usted acaba de salir del menú\n");
        		printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
				system("pause");
				return 0;
				break;
			default:
				//Llamado de las funciones a utilizar
				printf("Caso default");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
		}
	}while(opcion!=6);	
}//Fin de la función principal
//Definición de funciones a utilizar
int contadorVocalesMinusculas(char frase[]){
	//Declaración de variables locales
	int vocalesMin=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == 'a'||letraActual=='e'||letraActual=='i'||letraActual=='o'||letraActual=='u'){
			vocalesMin++;
		}
	}
	return vocalesMin;
}
int contadorVocalesMayusculas(char frase[]){
	//Declaración de variables locales
	int vocalesMay=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == 'A'||letraActual=='E'||letraActual=='I'||letraActual=='O'||letraActual=='U'){
			vocalesMay++;
		}
	}
	return vocalesMay;
}
int contadorEspacios(char frase[]){
	//Declaración de variables locales
	int espacios=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == ' '){
			espacios++;
		}
	}
	return espacios;
}

int contadorTabulador(char frase[]){
	//Declaración de variables locales
	int tabulador=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == '	'){
			tabulador++;
		}
	}
	return tabulador;
}
int contadorEspeciales(char frase[]){
	//Declaración de variables locales
	int especial=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == '%'||letraActual=='&'||letraActual=='#'||letraActual=='$'
		||letraActual=='?'||letraActual=='¿'||letraActual=='*'||letraActual=='!'||letraActual=='¡'){
			especial++;
		}
	}
	return especial;
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
		case 5:
			printf("\n\n **************************** Ha ingresado a la quinta opción ****************************\n\n\t");
			break;
		case 6:
			printf("\n\n **************************** Ha ingresado a la sexta opción ****************************\n\n\t");
			break;
		default:
			printf("\n\t Ha elegido una opción invalida, vuelva a escoger una opción\n");
			break;
	}
}
