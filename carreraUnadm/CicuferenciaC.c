/*
biblioteca o directivas del procesador
*/
#include <stdio.h>
#include<math.h>
//Declaración global
const float PI=3.1416;
//Funcion principal main
main(){
	//Declaración de variables locales de la funcion main
	float radio, area, areaDos;
	int radioDos = 3;
	printf("Calcula el area de una circuferencia \n");
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	area = PI * radio * radio;
	areaDos=PI*pow(radio,2);
	printf("Area = %f \n",area);
	printf ("El area del circulo de radio: %d es %.2f \n",radioDos, area);	
	getchar();
	getchar();
}
