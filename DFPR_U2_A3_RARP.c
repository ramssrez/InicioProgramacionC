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
	int poblacion = 6168883;
	int contagio = 23452;
	float porcentaje = (contagio*100)/poblacion;
	int porcentajes = 10;
	porcentaje = 21;
	printf("\tEl estado en estudio es: %s\n", estado);
	printf("\tEl estado de %s tiene una una poblacion de: %d personas.\n", estado, poblacion);
	printf("\tEl estado de %s tiene una total de contadios de: %d personas.\n", estado, contagio);
	printf("\tEl estado de %s tiene un porcentaje de: %.2f %% de casos.\n", estado, porcentaje);

	if(porcentaje<=10){
		printf("En el estado de %s hay pocos contagios. ", estado);
	}else if((porcentaje >= 11)&&(porcentaje<=20)){
		printf("El estado de %s tiene un porcentaje de contagios medio ", estado);
	}else if (porcentaje >20){
		printf("Alerta en el estado de %s, existen muchos contagios. ", estado);
	}
	system("pause");
	return 0;
}
