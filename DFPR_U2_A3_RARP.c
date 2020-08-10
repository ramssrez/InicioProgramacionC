/*
Se tienen que elaborar dos programas utilizando las sentencias de control que nos
muestre lo siguiente:
a. Nombre del estado.
b. Total de la población.
c. Total de personas contagiadas.
d. Porcentaje de contagiados respecto a la población.
Una vez determinado el porcentaje de contagios, el programa deberá de arrojar la siguiente
leyenda según corresponda:
? Si el porcentaje es menor o igual al 10%: “En este estado hay pocos contagios”;
? si el porcentaje se encuentra entre el 11% y 20%:“El estado tiene un porcentaje de
contagios medio”
? si supera el 20% que imprima “Alerta en el estado, existen muchos contagios”.

*/
#include <stdio.h>
#include <stdlib.h>
int main(){
	//string nombre = "pepepicas";
	char estado [20] ="Puebla";
	int poblacion = 120000;
	int contagio = 10000;
	float porcentaje = (contagio*100)/poblacion;
	int porcentajes = 10;
	porcentaje = 21;
	
	/*
	
	printf("El estado de %s",estado);
	printf(" cuenta con %d", poblacion);
	printf (" de población y con un total de %d", contagio);
	printf (" el cual representa el %f ", porcentaje);
	printf(" de la población contagiada");
	
	*/
	
	if(porcentaje<=10){
		printf("En el estado de %s hay pocos contagios. ", estado);
	}else if((porcentaje >= 11)&&(porcentaje<=20)){
		printf("El estado de %s tiene un porcentaje de contagios medio ", estado);
	}else if (porcentaje >20){
		printf("Alerta en el estado de %s, existen muchos contagios. ", estado);
	}
	/*
	switch (porcentajes){
		case 10 :
			printf("En el estado: %s hay pocos casos.", estado);
			break;
		default:
			printf("ninguna de las anteriores");
			break;
	}
	*/
	
	system("pause");
	return 0;
}
