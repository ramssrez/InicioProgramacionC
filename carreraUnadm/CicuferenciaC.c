/*
biblioteca o directivas del procesador
*/
#include <stdio.h>
//Declaraci�n global
const float PI=3.1416;
//Funcion principal main
main(){
	//Declaraci�n de variables locales de la funcion main
	float radio, area;
	printf("Calcula el �rea de una circuferencia \n");
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	area = PI * radio * radio;
	printf("Area = %f",area);	
	getchar();
	getchar();
}
