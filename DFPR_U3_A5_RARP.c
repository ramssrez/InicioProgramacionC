#include <stdio.h>
#include <stdlib.h>
int main (){
	int estadoMexico[]={749,690,573,585,218,193,652,562,630,514};
	int poblacion = 17427790;
	int i;
	float promedio,varianza;
	char estado[20] ="Estado de México"; 
	printf("El estado es estudio es: %s\n", estado);
	printf("La población total del %s es: %d personas\n",estado, poblacion);
	printf("Total de infectados: \n");
	for (i=0; i<10;i++){
		printf("%d de julio: %d infectados.\n",(i+21),estadoMexico[i]);
	}
	
	printf("Hola mundo desde C");
	system("pause");
	return 0;
}
