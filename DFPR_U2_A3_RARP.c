/*
Se tienen que elaborar dos programas utilizando las sentencias de control que nos
muestre lo siguiente:
a. Nombre del estado.
b. Total de la poblaci�n.
c. Total de personas contagiadas.
d. Porcentaje de contagiados respecto a la poblaci�n.
Una vez determinado el porcentaje de contagios, el programa deber� de arrojar la siguiente
leyenda seg�n corresponda:
? Si el porcentaje es menor o igual al 10%: �En este estado hay pocos contagios�;
? si el porcentaje se encuentra entre el 11% y 20%:�El estado tiene un porcentaje de
contagios medio�
? si supera el 20% que imprima �Alerta en el estado, existen muchos contagios�.

*/
//Libreria standares de C para la entrada y salida del informaci�n
#include <stdio.h>
//Libreria que nos permite dar sentencias al sistema
#include <stdlib.h>
//Librerias que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Inicio de la funci�n principal
int main(){
	//m�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaraci�n de variables con el nombre del estado, el cual se escog�o Puebla
	char estado [10] ="Puebla";
	/*
	Declaracipon del n�mero de habitantes como de contagios
	La informaci�n de poblaci�n es hasta el 2015 segpun INEGI http://cuentame.inegi.org.mx/monografias/informacion/Pue/Poblacion/default.aspx?tema=ME
	como de casos confirmados hasta el 06 de agosto http://plataformageo.puebla.gob.mx/covid-19/#
	Las variables se dejaron en tipo flotante para el calculo del porcentaje
	*/
	float poblacion = 6168883.0;
	float contagio = 23452.0;
	float porcentaje = (contagio*100)/poblacion;
	//Salida de texto estandar para el estado seleccionado
	printf("\t ******** Bienvendo al siguiente programa ******** \n\n");
	printf("** Los siguientes datos que se presentan son hasta el 6 de agosto del a�o 2020 **\n\n");
	printf("\tEl estado en estudio es: %s\n", estado);
	printf("\tEl estado de %s tiene una una poblaci�n de: %.1f personas.\n", estado, poblacion);
	printf("\tEl estado de %s tiene una total de contagios de: %.1f personas.\n", estado, contagio);
	printf("\tEl estado de %s tiene un porcentaje de: %.3f %% de casos.\n\n", estado, porcentaje);
    
    //Sentencia de control if-else para determinar el tipo de mensaje de salida
	if(porcentaje<=10){
		printf("******** En el estado de %s hay pocos contagios. ******** \n\n", estado);
	}else if((porcentaje >= 11)&&(porcentaje<=20)){
		printf("******** El estado de %s tiene un porcentaje de contagios medio ********\n\n", estado);
	}else if (porcentaje >20){
		printf("********Alerta en el estado de %s, existen muchos contagios.********\n\n ", estado);
	}
	//m�todo que permite que no se cierre la ventana despu�s de su ejecuci�n.
	system("pause");
	//Retorno del valor 0 para dar por terminado el programa
	return 0;
}
