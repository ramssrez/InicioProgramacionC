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
	int numeroPersona, contador, segundos=0, minutos=0,horas=0;
	printf("Ingresa el numero de personas que entran a la tienda: ");
	scanf("%d",&numeroPersona);
	printf("El numero de personas son: %d \n",numeroPersona);
	while(1){
		segundos ++;
		if (segundos==60){
			//printf("Esto es una prueba de cronometro %d \n",segundos);			
			segundos=0;
			minutos++;
			if (minutos ==10){
				minutos =0;
				horas++;	
				break;
			}
			
		}
		//system("cls");
		//printf ("\n\n\n\t\t\t [%.2d:%.2d:%.2d]", horas, minutos, segundos);	
	}
	printf("Minutos: %.2d",minutos);
	

	//printf("Hola mundo\n");
	//printf("Segundo desde 1970: %ld \n" ,time(0));
	//printf(asctime());	
	system("pause");
	return 0;
}
