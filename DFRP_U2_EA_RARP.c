/*
El siguiente programa da solución a la siguiente problemamtica
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
#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Inicio de la función principal
int main(){
	//método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaración de variables para el problema a tratar, en este caso el numero de alumnos, las tres calificaciones y el contador
	int opcion,i,calUno,calDos,calTres, numeroAlumno;
	int aprobadoTodos=0, aprobadoUltimo=0, aprobadoUno=0;
	//Presentación del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t ********** Bienvenido al sistema de calificaciones **********\n\n");  
    //Inicio del ciclo while para nuestro menú.
    do{
    	//Impresión de las opciones que se tienen en el menú
    	printf("\n\tSeleccione la opción de su preferencia \n\t");
        printf("\n\t1)Ingresar las calificaciones.");
        printf("\n\t2)Mostrar los indicadores.");
        printf("\n\t3)Salir del sistema de calificaciones.");
        printf("\n\tEscribe la opción que deseas escoger: ");
        //Lectura de la opción a elegir
        scanf("%d",&opcion);
        //Uso de switch en el cual se agrega las opciones
		switch(opcion){
		case 1:
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
			printf("\n\n **************************** Ha ingresado a la primera opción ****************************\n\n\t");
			//Lectura del número de alumnos a registrar
			printf("\n\tIngresa el número de alumnos que desea ingresar: ");
            scanf("%d", &numeroAlumno); 
			printf("\tEl numero de alumnos es: %d \n",numeroAlumno);  
			//Ciclo for que pide las notas de todos los alumnos
			for (i = 1; i<=numeroAlumno;i++){
				printf("\tIngresa las calificaciones del alumno %d: \n",i);
				printf("\tCalificación uno: ");
				scanf("%d", &calUno);
				printf("\tCalificación dos: ");
				scanf("%d", &calDos);
				printf("\tCalificación tres: ");
				scanf("%d", &calTres);
				//Sentencia if-else que se encarga de disernir la información obtenida
				if (calUno >= 6 && calDos >= 6 && calTres >=6){
 					aprobadoTodos ++;
		 		}else if(calUno<6&&calDos<6&&calTres>=6){
		 			aprobadoUltimo ++;
		 		}else if((calUno>=6&&calDos<6&&calTres<6)||(calUno<6&&calDos>=6&&calTres<6)||(calUno<6&&calDos<6&&calTres>=6)){
		 			aprobadoUno ++;
		 		}
			}
		
			printf("\n\n **************************** Ha regresado al menú principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;

        case 2:
        	//Presentación de la información del punto anterior
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
        	printf("\n\n **************************** Ha ingresado a la segunda opción ****************************\n\n\t");
            printf("\n\tLa siguiente información de los datos obtenidos en el paso anterior \n");
            if(aprobadoTodos == 0 && aprobadoUltimo ==0 && aprobadoUno == 0){
            	printf("\tNo se han ingresaron calificaciones al sistema, ingreselas en la opción 1\n");
	 		    //cout <<"Todos los alumnos reprobaron los tres examenes"<<endl;
			}else{
				printf("\tEl número de alumnos que aprobaron todos los examenes: %d\n", aprobadoTodos);
				printf("\tEl número de alumnos que aprobaron el último examen: %d\n",aprobadoUltimo);
				printf("\tEl número de alumnos que aprobaron solo un examen: %d\n",aprobadoUno);
			} 
			printf("\n\n **************************** Ha regresado al menú principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;

        case 3: 
        //Caso de la salida del sistema
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
        	printf("\n\n **************************** Ha ingresado a la tercera opción ****************************\n\n\t");
		    printf("\n\t Usted acaba de salir del sistema de calificaciones\n");            
            break;                          
        default:
        	//Caso en caso del que usuario haya escogido otra opción
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
      		printf("\n\t Ha elegido una opción invalida, vuelva a escoger una opción\n");
      		printf("\n\n **************************** Ha regresado al menú principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;
        }
        //Fin del while en el cual sale del ciclo cuando la opción es 3
    }while(opcion!=3);
    printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
    //método que permite que no se cierre la ventana después de su ejecución.
    system("pause");
   	//Retorno del valor 0 para dar por terminado el programa
    return 0;
}
