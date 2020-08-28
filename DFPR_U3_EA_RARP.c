#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <ctype.h>
//#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Declaracipon de variables globales
char frase[100];
int i;
//Funci�n que realiza el contero de vocales minusculas
int contadorVocalesMinusculas(char frase[]);
//Funci�n que realiza el conteo de vocales mayusculas
int contadorVocalesMayusculas(char frase[]);
//Funci�n que realiza el conteo de espacios vac�os
int contadorEspacios(char frase[]);
//Funci�n que realiza el conteo de tabuladores
int contadorTabulador(char frase[]);
//Funci�n que realiza el conteo de caracteres especiales
int contadorEspeciales(char frase[]);
//Funci�n que imprime el inicio de las opciones elegidas
void imprimirInicioOpcion();
//Funci�n que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la funci�n principal
int main (){
	//M�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaraci�n de variables locales.
	int opcion,vocalesMay, vocalesMin,espacios,tabulador, especial;
		//Presentaci�n del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t **** Bienvenido al sitema de conteo de vocales, espacios, tabuladores y caracteres especiales(#$%&!�?�*) ****\n\n");  
    //Inicio del ciclo while para nuestro men�.
	do{
		//Impresi�n de las opciones que se tienen en el men�
		printf("\n\tSeleccione la opci�n de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)N�mero de vocales.");
        printf("\n\t3)N�mero de espacios en blanco.");
        printf("\n\t4)N�mero de tabuladores.");
        printf("\n\t5)N�mero de caracteres especiales.");
        printf("\n\t6)Salir del programa.");
        printf("\n\tEscribe la opci�n que deseas escoger: ");
        //Lectura de la opci�n a elegir
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
				printf("El n�mero de vocales min�sculas son: %d\n", vocalesMin);
				printf("\tEl n�mero de vocales may�sculas son: %d", vocalesMay);
				imprimirFinOpcion();
				break;
			case 3:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				espacios = contadorEspacios(frase);
				printf("El n�mero de espacios blancos son: %d", espacios);
				imprimirFinOpcion();
				break;
			case 4:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				tabulador = contadorTabulador(frase);
				printf("El n�mero de tabuladores son: %d", tabulador);
				imprimirFinOpcion();
				break;
			case 5:
				//Llamado de las funciones a utilizar
				imprimirInicioOpcion(opcion);
				especial = contadorEspeciales(frase);
				printf("El n�mero de caracteres especiales son: %d", especial);
				imprimirFinOpcion();
				break;
			case 6:
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
				printf("Caso default");
				imprimirInicioOpcion(opcion);
				imprimirFinOpcion();
				break;
		}
	}while(opcion!=6);	
}//Fin de la funci�n principal
//Definici�n de funciones a utilizar
int contadorVocalesMinusculas(char frase[]){
	//Declaraci�n de variables locales
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
	//Declaraci�n de variables locales
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
	//Declaraci�n de variables locales
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
	//Declaraci�n de variables locales
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
	//Declaraci�n de variables locales
	int especial=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == '%'||letraActual=='&'||letraActual=='#'||letraActual=='$'
		||letraActual=='?'||letraActual=='�'||letraActual=='*'||letraActual=='!'||letraActual=='�'){
			especial++;
		}
	}
	return especial;
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
		case 5:
			printf("\n\n **************************** Ha ingresado a la quinta opci�n ****************************\n\n\t");
			break;
		case 6:
			printf("\n\n **************************** Ha ingresado a la sexta opci�n ****************************\n\n\t");
			break;
		default:
			printf("\n\t Ha elegido una opci�n invalida, vuelva a escoger una opci�n\n");
			break;
	}
}
