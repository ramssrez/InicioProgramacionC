#include <stdio.h>
#include <stdlib.h>
int main (){
	int opcion;
	printf("ESto es una prueba");
	do{
		printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Cadena de entrada.");
        printf("\n\t2)Número de vocales.");
        printf("\n\t3)Número de espacios en blanco.");
        printf("\n\t4)Número de tabuladores");
        printf("\n\t5)Salir del programa");
        printf("\n\tEscribe la opción que deseas escoger: ");
		scanf("%d",&opcion);
		switch(opcion){
			case 1:
				printf("Caso1");
				break;
			case 2:
				printf("caso 2");
				break;
			case 3:
				printf("Caso 3");
				break;
			case 4:
				printf("caso 4");
				break;
			case 5:
				printf("caso 5 ");
				//system("pause");
				return 0;
				break;
			default:
				printf("Caso default");
				break;
		}
	}while(opcion!=5);
	
}
