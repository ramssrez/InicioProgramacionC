/*
El siguiente programa da soluci�n a la siguiente problemamtica
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
#include <stdio.h>////Librer�a est�ndar de C para la entrada y salida del informaci�n
#include <stdlib.h>//Librer�a que nos permite dar sentencias al sistema
//Librer�as que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Inicio de la funci�n principal
int main(){
	//m�todo que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaraci�n de variables para el problema a tratar, en este caso el numero de alumnos, las tres calificaciones y el contador
	int opcion,i,calUno,calDos,calTres, numeroAlumno;
	int aprobadoTodos=0, aprobadoUltimo=0, aprobadoUno=0;
	//Presentaci�n del programa
	printf(" ----------------------------------------------------------------------------------------------------------------- ");
    printf("\n\t ********** Bienvenido al sistema de calificaciones **********\n\n");  
    //Inicio del ciclo while para nuestro men�.
    do{
    	//Impresi�n de las opciones que se tienen en el men�
    	printf("\n\tSeleccione la opci�n de su preferencia \n\t");
        printf("\n\t1)Ingresar las calificaciones.");
        printf("\n\t2)Mostrar los indicadores.");
        printf("\n\t3)Salir del sistema de calificaciones.");
        printf("\n\tEscribe la opci�n que deseas escoger: ");
        //Lectura de la opci�n a elegir
        scanf("%d",&opcion);
        //Uso de switch en el cual se agrega las opciones
		switch(opcion){
		case 1:
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
			printf("\n\n **************************** Ha ingresado a la primera opci�n ****************************\n\n\t");
			//Lectura del n�mero de alumnos a registrar
			printf("\n\tIngresa el n�mero de alumnos que desea ingresar: ");
            scanf("%d", &numeroAlumno); 
			printf("\tEl numero de alumnos es: %d \n",numeroAlumno);  
			//Ciclo for que pide las notas de todos los alumnos
			for (i = 1; i<=numeroAlumno;i++){
				printf("\tIngresa las calificaciones del alumno %d: \n",i);
				printf("\tCalificaci�n uno: ");
				scanf("%d", &calUno);
				printf("\tCalificaci�n dos: ");
				scanf("%d", &calDos);
				printf("\tCalificaci�n tres: ");
				scanf("%d", &calTres);
				//Sentencia if-else que se encarga de disernir la informaci�n obtenida
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
        	//Presentaci�n de la informaci�n del punto anterior
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
        //Caso de la salida del sistema
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
        	printf("\n\n **************************** Ha ingresado a la tercera opci�n ****************************\n\n\t");
		    printf("\n\t Usted acaba de salir del sistema de calificaciones\n");            
            break;                          
        default:
        	//Caso en caso del que usuario haya escogido otra opci�n
        	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
      		printf("\n\t Ha elegido una opci�n invalida, vuelva a escoger una opci�n\n");
      		printf("\n\n **************************** Ha regresado al men� principal ****************************\n\n\t");
			printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
            break;
        }
        //Fin del while en el cual sale del ciclo cuando la opci�n es 3
    }while(opcion!=3);
    printf("\n\n **************************** Agradecemos si visita, vuelva pronto ****************************\n\n\t");
    printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
    //m�todo que permite que no se cierre la ventana despu�s de su ejecuci�n.
    system("pause");
   	//Retorno del valor 0 para dar por terminado el programa
    return 0;
}
