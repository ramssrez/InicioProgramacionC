/*
Una Universidad debido a la pandemia actual del COVID-19 ha decido que sus profesores
registren las calificaciones de sus alumnos que realizaron examen extraordinario por medio
de un sistema inform�tico, debido a las circunstancias se requiere elabora un programa en
C que contenga un men� con 3 opciones:
1. Capturar Ex�menes
2. Mostrar Indicadores
3. Salir.

El programa deber� continuar hasta que el profesor proporcione la opci�n 3. Salir.
Descripci�n:
3.1. La opci�n 1. Capturar Ex�menes
3.1.1. El profesor evalu� N alumnos que realizaron 3 ex�menes y para determinar su
aprovechamiento acad�mico requiere capturar las calificaciones de los 3 ex�menes
de los alumnos evaluados.
3.2. Opci�n 2. Mostrar Indicadores
3.2.1. A partir de las calificaciones capturadas en la Opci�n 1, se deber� mostrar en
pantalla los siguientes indicadores:
? N�mero de alumnos que aprobaron todos los ex�menes
? N�mero de alumnos que aprobaron por lo menos un examen.
? N�mero de alumnos que aprobaron �nicamente el �ltimo examen.
3.3. Opci�n 3. Salir
*/
#include <stdio.h>
#include <stdlib.h>
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
int op,i,calif,calif1,calif2,suma;
int calificacion [10];
int main(){
	setlocale(LC_ALL, "");

    printf("\n\t\tBienvenido al sistema de calificaciones\n\n\t");
 
    do
    {
    	printf("\n\tSeleccione la opci�n de su preferencia \n\n\t");
        printf("\n\t1)Ingresar las calificaciones \n\t2)Mostrar los indicadores \n\t3)Salir del sistema de calificaciones.\n\t");
        scanf("%i",&op);

                switch(op)
                {
                    case 1:
                                            			  
  							for(i=1;i<4;i++)
							  {
							    printf("\n Escriba la calificacion numero %d :\n",i);
							//	scanf("%d,%d,%d",&calif,&calif1,&calif2);
								scanf("%d", &calificacion[i]);
							   }
							 printf("\n\n Las calificaciones se han guardado \n\n",i);
							 
							
							 for (i=1;i<4;i++){
							 	printf("Calificaci�n %d :  %d \n",i, calificacion[i]);
							 }
							 
							 printf("\n\n Ha regresado al Menu \n\n\t",i);
							 

							 printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n",i);
							
                  
                    break;

                    case 2:
                      printf("Cual desea comprar, elige una opcion");
                      
                    break;


                     case 3: 
					  printf("\nUsted acaba de salir del sistema de calificaciones");
					  getch();
   					  return 0;
                      
                    break;

                                                
                    default:
                    printf("\nNo eligi� ninguna opci�n valida\n",162,162);
                    break;
                }
              }


    while(op!=4);
    printf("\n\tAcaba de salir del programa de compra de Videojuegos\n\t");




    system("pause");
    return 0;
}
