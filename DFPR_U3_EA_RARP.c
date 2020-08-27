#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <ctype.h>
//#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Declaracipon de variables 
char frase[100];
int i;
int contadorVocalesMinusculas(char frase[]);
int contadorVocalesMayusculas(char frase[]);
int contadorEspacios(char frase[]);
int contadorTabulador(char frase[]);
int contadorEspeciales(char frase[]);
void imprimirInicioOpcion();
//Función que imprime el final de las opciones elegidas
void imprimirFinOpcion();
//Inicio de la función principal
int main (int argc, char const *argv[]){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	int opcion;
	
	printf("Esto es una prueba");
	do{
		printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)Número de vocales.");
        printf("\n\t3)Número de espacios en blanco.");
        printf("\n\t4)Número de tabuladores.");
        printf("\n\t5)Número de caracteres especiales.");
        printf("\n\t6)Salir del programa.");
        printf("\n\tEscribe la opción que deseas escoger: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				imprimirInicioOpcion(opcion);
				printf("Ingresa la cadena a estudiar: ");
				gets(frase);
				fgets(frase,100,stdin);
				printf("La cadena es: %s",frase);
				//scanf("%s",frase);
				imprimirFinOpcion();
				break;
			case 2:
				imprimirInicioOpcion(opcion);
				int vocalesMin = contadorVocalesMinusculas(frase);
				int vocalesMay = contadorVocalesMayusculas(frase);
				printf("El número de vocales minusculas son: %d\n", vocalesMin);
				printf("\tEl número de vocales mayusculas son: %d", vocalesMay);
				imprimirFinOpcion();
				break;
			case 3:
				printf("Caso 3");
				imprimirInicioOpcion(opcion);
				int espacios = contadorEspacios(frase);
				printf("El número de espacios blancos son: %d", espacios);
				imprimirFinOpcion();
				break;
			case 4:
				printf("caso 4");
				imprimirInicioOpcion(opcion);
				int tabulador = contadorTabulador(frase);
				printf("El número de tabuladores son: %d", tabulador);
				imprimirFinOpcion();
				break;
			case 5:
				imprimirInicioOpcion(opcion);
				int especial = contadorEspeciales(frase);
				printf("El número de caracteres especiales son: %d", especial);
				imprimirFinOpcion();
				break;
			case 6:
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
	}while(opcion!=6
	);
	
}
int contadorVocalesMinusculas(char frase[]){
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
	int vocalesMay=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == 'A'||letraActual=='B'||letraActual=='C'||letraActual=='D'||letraActual=='E'){
			vocalesMay++;
		}
	}
	return vocalesMay;
}
int contadorEspacios(char frase[]){
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
	int especial=0;
	for (i=0;frase[i]!='\n';i++){
		char letraActual = frase[i];
		if (letraActual == '%'||letraActual=='&'||letraActual=='#'||letraActual=='$'){
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
