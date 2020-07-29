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
	int base, altura;
	printf("Calcula el area de una circuferencia \n");
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	area = PI * radio * radio;
	areaDos=PI*pow(radio,2);
	printf("Area = %f [Unidaes lineales] \n",area);
	printf ("El area del circulo de radio: %d es %.2f [Unidaes Cuadradas] \n",radioDos, area);	
	printf("El perimetro es %.2f [Unidades lineales] \n",PI*2*radio);
	
	printf("Programa que calcula el area de un rectangulo \n");
	printf("Ingresa los valores de altura y base: ");
	scanf("%d , %d",&altura,&base);
	printf("El area del rectangulo de altura: %d y base: %d es : %d",altura,base,base*altura);
	
	
	
	
	getchar();
	getchar();
}
