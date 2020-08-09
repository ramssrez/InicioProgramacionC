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

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main(void){
	int numeroPersona=0,personaEntra=0,personaSale=0, contador, segundos=0, minutos=0,horas=0,personaTotal=0,total=0;
//	printf("Ingresa el numero de personas que entran a la tienda: ");
//	scanf("%d",&personaEntra);
//	printf("ingresa el numero de personas que salen de la tienda ");
//	scanf("%d",&personaSale);
	//printf("El numero de personas son: %d \n",personaSale);
	
	do {
		printf("Ingresa el numero de personas que entran a la tienda: ");
		scanf("%d",&personaEntra);
		printf("ingresa el numero de personas que salen de la tienda ");
		scanf("%d",&personaSale);
		numeroPersona =numeroPersona + personaEntra;
		//totalEntra = totalEntra +personaEntra;
		personaTotal = personaEntra-personaSale;
		total = total + personaTotal;
		printf("En la tienda hay: %.2d\n", total);
		printf("En la tienda han ingresado: %.2d\n", numeroPersona);
		
		if(numeroPersona==4){
			printf("El limite es excedido \n");
		}

		
		
	}while(numeroPersona<=10);
	
	
	
//	while(1){
//		segundos++;
//		printf("%.2d \n",segundos);
//		Sleep(1000);
//		if (segundos==60){
//			break;
//		}
//	}
	//printf("Los segundos son %.2d \n ",segundos);
	system("pause");
	return 0;
}
