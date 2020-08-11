/*
Una Universidad debido a la pandemia actual del COVID-19 ha decido que sus profesores
registren las calificaciones de sus alumnos que realizaron examen extraordinario por medio
de un sistema informático, debido a las circunstancias se requiere elabora un programa en
C que contenga un menú con 3 opciones:
1. Capturar Exámenes
2. Mostrar Indicadores
3. Salir.

El programa deberá continuar hasta que el profesor proporcione la opción 3. Salir.
Descripción:
3.1. La opción 1. Capturar Exámenes
3.1.1. El profesor evaluó N alumnos que realizaron 3 exámenes y para determinar su
aprovechamiento académico requiere capturar las calificaciones de los 3 exámenes
de los alumnos evaluados.
3.2. Opción 2. Mostrar Indicadores
3.2.1. A partir de las calificaciones capturadas en la Opción 1, se deberá mostrar en
pantalla los siguientes indicadores:
? Número de alumnos que aprobaron todos los exámenes
? Número de alumnos que aprobaron por lo menos un examen.
? Número de alumnos que aprobaron únicamente el último examen.
3.3. Opción 3. Salir
*/
#include <stdio.h>
#include <stdlib.h>
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>

#include <locale.h>
int opcion,i,calUno,calDos,calTres, numeroAlumno;
int aprobadoTodos=0, aprobadoUltimo=0, aprobadoUno=0;
int calificacion [3];
int alumnos [100];
int matriz [100][100];
int main(){
	setlocale(LC_ALL, "");

    printf("\n\t\tBienvenido al sistema de calificaciones\n\n");  
    do{
    	printf("\n\tSeleccione la opción de su preferencia \n\n\t");
        printf("\n\t1)Ingresar las calificaciones \n\t2)Mostrar los indicadores \n\t3)Salir del sistema de calificaciones.\n\t");
        scanf("%i",&opcion);
		switch(opcion){
		case 1:
			printf("Ingresa el número de alumnos que desea ingresar: \n");
            scanf("%d", &numeroAlumno); 
			printf("El numero de alumnos es: %d \n",numeroAlumno);  
			for (i = 1; i<=numeroAlumno;i++){
				printf("Ingresa las calificaciones del alumno %d: \n",i);
				printf("Calificación uno: \n");
				scanf("%d", &calUno);
				printf("Calificación dos: \n");
				scanf("%d", &calDos);
				printf("Calificación tres: \n");
				scanf("%d", &calTres);
				if (calUno >= 6 && calDos >= 6 && calTres >=6){
 					aprobadoTodos ++;
		 		}else if(calUno<6&&calDos<6&&calTres>=6){
		 			aprobadoUltimo ++;
		 		}else if((calUno>=6&&calDos<6&&calTres<6)||(calUno<6&&calDos>=6&&calTres<6)||(calUno<6&&calDos<6&&calTres>=6)){
		 			aprobadoUno ++;
		 		}
			}
			/*      			  
 			for(i=1;i<4;i++) {
				printf("\n Escriba la calificacion numero %d :\n",i);
				scanf("%d", &calificacion[i]);
			}
			printf("\n\n Las calificaciones se han guardado \n\n",i);
     		for (i=1;i<4;i++){
				printf("Calificación %d :  %d \n",i, calificacion[i]);
			}
			*/
			
			/*
			for (m = 1; m<=numeroAlumno;m++){
				printf("Ingresa las calificaciones del alumno %d: \n",m);
				for (n=0;n<3;n++){
					printf("Calificación %d: ",(n+1));
					scanf("%d",&matriz[m][n]);	
				}
			}
			printf("\n");
			for (m = 1; m<=numeroAlumno;m++){
				printf(" el alumno %d \n",m);
				for (n=0;n<3;n++){
					printf(" %d  \n",matriz[m][n]);	
					suma = suma + matriz[m][n];
				}
			}
			*/
				 
			//printf("La suma es: %d ",suma );
			printf("\n\n Ha regresado al Menu \n\n\t",i);
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n",i);
            break;

        case 2:
            printf("La siguiente información de los datos obtenidos \n");
            if(aprobadoTodos == 0 && aprobadoUltimo ==0 && aprobadoUno == 0){
            	printf("No se ingresaron calificaciones al sistema\n");
	 		    //cout <<"Todos los alumnos reprobaron los tres examenes"<<endl;
			}else{
				printf("El número de alumnos que aprobaron todos los examenes: %d\n", aprobadoTodos);
				printf("El numero que aprobaron el ultimo: %d\n",aprobadoUltimo);
				printf("El numero que aprobaron solo uno: %d\n",aprobadoUno);
			}       
            break;

        case 3: 
		    printf("\nUsted acaba de salir del sistema de calificaciones\n");
		    system("pause");
   		    return 0;            
            break;                          
        default:
      		printf("\nNo eligió ninguna opción valida\n",162,162);
            break;
        }
    }while(1);
    //printf("\n\tAcaba de salir del programa de compra de Videojuegos\n\t");
    system("pause");
    return 0;
}
