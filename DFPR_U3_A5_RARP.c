#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
#include <math.h>
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Declaracipon de variables globales
int i;
//Función que nos imprime el el número de contagios en el estado de México
void imprimirTotal(int estado[]);
//Función que nos permite calcular el promedio
float promedioInfectados(int estado[]);
//Función que nos permite calcular la varianza de la muestra
float varianzaMuestra(int estado[]);
//Inicio de la función principal
int main (){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaración de variables locales obtenido de https://coronavirus.gob.mx/datos/#DownZCSV
	int estadoMexico[10]={749,690,573,585,218,193,652,562,630,514};
	int poblacion = 17427790;
	int i;
	float promedio,varianza;
	char estado[20] ="Estado de México"; 
	//Impresión de los datos obtenidos de la pagina web mencionada
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\nBienvenido al sistema que muestra el promedio y varianza de una población de infectados(COVID-19) en el %s \n\n",estado);
	printf("\t\tEl estado es estudio es: %s\n\n", estado);
	printf("\t\tLa población total del %s es: %d personas\n\n",estado, poblacion);
	//Llamado de las funciones a utilizr
	imprimirTotal(estadoMexico);
	promedio= promedioInfectados(estadoMexico);
	varianza=varianzaMuestra(estadoMexico);
	printf("\n\t\tPromedio de infectados es: %.2f personas por día \n", promedio);
	printf("\t\tVarianza de la muestra es: %.1f\n", varianza);
	printf("\t\tLa desviación estandar es: %.1f\n\n",sqrt(varianza));
	printf(" ----------------------------------------------------------------------------------------------------------------- \n\n");
	system("pause");
	return 0;
}
//Declaración de las funciones a utilizar
void imprimirTotal(int estado[]){
	printf("\t\tTotal de infectados de infectados por COVID-19: \n");
	for (i=0; i<10;i++){
		printf("\t\t\t%d de julio: %d infectados.\n",(i+21),estado[i]);
	}
}
float promedioInfectados(int estado[]){
	float suma=0;
	for (i=0; i<10;i++){
		suma =suma+estado[i];
	}
	return suma/10;
}
float varianzaMuestra(int estado[]){
	float promedio = promedioInfectados(estado);
	float total, suma=0,cuadrado,varianza;
	for (i=0; i<10;i++){
		total=estado[i]-promedio;
		cuadrado=total*total;
		suma=suma+cuadrado;
	}
	varianza=suma/9;
	return varianza;
}
