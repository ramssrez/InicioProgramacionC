#include <conio.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool validarNumeros (char numero[]);

int main (){
	char cadena [20];
	bool valido = false;
	int n;
	do {
		printf("Ingresa un numero:");
		scanf("%s",cadena);
		valido = validarNumeros(cadena);
	}while(valido==false);
	n =atoi(cadena);
	printf("\n El valor de n es: %i",n);
	getch();
	return 1;
}

bool validarNumeros (char numero[]){
	int i;
	for (i = 0; i <strlen(numero);i++){
		if (!(numero[i]>=48 && numero[i]<=58)){
			printf("Solo ingresa numeros \n");
			return false;
		}
	}
	return true;
}
