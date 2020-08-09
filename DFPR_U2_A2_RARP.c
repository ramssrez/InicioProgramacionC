/*
Programa que permite el control de personas en un día,
para entrar y salir de la tienda departaental en la nueva
normalidad por el COVID 19.
1. Dentro de la tienda solo pueden permanecer 40 personas en lapsos de tiempos.
2. Cuando hay 40 personas en la tienda, cada 10 minutos deben salir 2 personas y permitir el
acceso otras 2 personas.
3. Cada que ingresen o salgan personas de la tienda, se deben enviar mensajes indicando
cuantas personas hay en la tienda y cuantas han ingresado.
4. El acceso a la tienda departamental termina cuando ya no hay persona dentro de la tienda o
bien el ingreso a la tienda fue de un total de 100 personas; en este momento debes enviar un
mensaje indicando que la tienda ya va a cerrar.
*/

//Librerias para la entada y salida de datos 
#include <stdio.h>
//Libreria que permite no cerrar el ejecutable hasta presionar una tecla
#include <stdlib.h>
//Librerias que soportan los caracteres especiales para palabras con acento
#include <wchar.h>
#include <locale.h>
//Inicializacion de la función principal
int main(void){
	//Método que permite el uso de caracteres especiales
	setlocale(LC_ALL, "");
	//Declararion de las variables a utilizar en el cual les asignamos solo ser positivos
	unsigned int numeroPersona=0,personaEntra=0,personaSale=0,personaTotal=0,total=0; 
	//Presetnación de nuestro programa
	printf("********************************* ¡Bienvenidos a nuestra tienda departamental!  ********************************* \n\n\n");
	printf("*********** Por disposición oficial solo podemos ingresar un límite de persona *********** \n\n\n");
	
	//Inicio de nuestro ciclo do while para poder ingresar los datos solicitados
	do {
		//Ingreso de daros como la entrada y salidas de personas que entran a la tienda
		printf("Ingresa el número de personas que entran a la tienda: ");
		scanf("%d",&personaEntra);
		printf("ingresa el número de personas que salen de la tienda ");
		scanf("%d",&personaSale);
		//Procedimiento para aumentar el total de personas2 y contador de personas
		numeroPersona =numeroPersona + personaEntra;
		personaTotal = personaEntra-personaSale;
		total = total + personaTotal;
		
		//Condicional en caso de que se tenga mayor numero de salidas que entradas
		if(total<=0){
			total =0;
		}
		
		//Impresión de los datos que tenemos cargados en el sistema
		printf("En la tienda han ingresado: %d", numeroPersona);
		printf(" personas \n");
		printf("En la tienda hay: %d", total);
		printf(" personas \n\n");
		
		//Condicional que manda un mensaje cuando tenemos un total de personas mayor a 40
		if (total >= 40){
			//Condicional para que al final de tener el máximo de personas no nos vuelva a mandar mensaje
			if(personaTotal<100){
				printf("*********** Solo pueden salir e ingresar de a dos personas cada 10 minutos ***********\n\n\n");
			}
		}
		
		//Condicional para que salga del ciclo iteratico cuando cumpla con ciertas caracteristicas
		if((total==0)||(numeroPersona>=100)){
			break;
		}
		
		
	}while(1); //Fin del ciclo while, se le asigna 1 para que sea true
	
	//Despedida de nuestro programa
	printf("*********** La tienda esta cerrada agradecemos tu compra ***********\n");
	//Uso de este método para que no se cierre la ventana .exe cuando termine el programa
	system("pause");
	return 0;
}
