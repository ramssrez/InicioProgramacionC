/*
biblioteca o directivas del procesador
*/
#include <stdio.h>
//Declaración global
const float PI=3.1416;
//Funcion principal main
main(){
	//Declaración de variables locales de la funcion main
	float radio, area;
	printf("Calcula el área de una circuferencia \n");
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	area = PI * radio * radio;
	printf("Area = %f",area);	
	getchar();
	getchar();
}
