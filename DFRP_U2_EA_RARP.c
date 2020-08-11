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
int opcion,i,calUno,calDos,calTres, numeroAlumno;
int aprobadoTodos=0, aprobadoUltimo=0, aprobadoUno=0;
int calificacion [3];
int alumnos [100];
int matriz [100][100];
int main(){
	setlocale(LC_ALL, "");

    printf("\n\t ********** Bienvenido al sistema de calificaciones **********\n\n");  
    do{
    	printf("\n\tSeleccione la opci�n de su preferencia \n\t");
        printf("\n\t1)Ingresar las calificaciones.");
        printf("\n\t2)Mostrar los indicadores.");
        printf("\n\t3)Salir del sistema de calificaciones.");
        printf("\n\tEscribe la opci�n que deseas escoger: ");
        scanf("%d",&opcion);
		switch(opcion){
		case 1:
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
			printf("\n\n **************************** Ha ingresado a la primera opci�n ****************************\n\n\t");
			printf("\n\tIngresa el n�mero de alumnos que desea ingresar: ");
            scanf("%d", &numeroAlumno); 
			printf("\tEl numero de alumnos es: %d \n",numeroAlumno);  
			for (i = 1; i<=numeroAlumno;i++){
				printf("\tIngresa las calificaciones del alumno %d: \n",i);
				printf("\tCalificaci�n uno: ");
				scanf("%d", &calUno);
				printf("\tCalificaci�n dos: ");
				scanf("%d", &calDos);
				printf("\tCalificaci�n tres: ");
				scanf("%d", &calTres);
				if (calUno >= 6 && calDos >= 6 && calTres >=6){
 					aprobadoTodos ++;
		 		}else if(calUno<6&&calDos<6&&calTres>=6){
		 			aprobadoUltimo ++;
		 		}else if((calUno>=6&&calDos<6&&calTres<6)||(calUno<6&&calDos>=6&&calTres<6)||(calUno<6&&calDos<6&&calTres>=6)){
		 			aprobadoUno ++;
		 		}
			}
		
			printf("\n\n **************************** Ha regresado al men� principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;

        case 2:
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
        	printf("\n\n **************************** Ha ingresado a la segunda opci�n ****************************\n\n\t");
            printf("\n\tLa siguiente informaci�n de los datos obtenidos en el paso anterior \n");
            if(aprobadoTodos == 0 && aprobadoUltimo ==0 && aprobadoUno == 0){
            	printf("\tNo se han ingresaron calificaciones al sistema, ingreselas en la opci�n 1\n");
	 		    //cout <<"Todos los alumnos reprobaron los tres examenes"<<endl;
			}else{
				printf("\tEl n�mero de alumnos que aprobaron todos los examenes: %d\n", aprobadoTodos);
				printf("\tEl n�mero de alumnos que aprobaron el �ltimo examen: %d\n",aprobadoUltimo);
				printf("\tEl n�mero de alumnos que aprobaron solo un examen: %d\n",aprobadoUno);
			} 
			printf("\n\n **************************** Ha regresado al men� principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;

        case 3: 
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
        	printf("\n\n **************************** Ha ingresado a la tercera opci�n ****************************\n\n\t");
		    printf("\n\t Usted acaba de salir del sistema de calificaciones\n");
        
		    //system("pause");
   		    //return 0;            
            break;                          
        default:
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
      		printf("\n\t Ha elegido una opci�n invalida, vuelva a escoger una opci�n\n");
      		printf("\n\n **************************** Ha regresado al men� principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;
        }
    }while(opcion!=3);
    printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
    system("pause");
    return 0;
}
