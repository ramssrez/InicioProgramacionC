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
#include <wchar.h>
#include <locale.h>
int main(void){
	//int contador, segundos=0, minutos=0,horas=0,personaTotal=0,total=0;
	setlocale(LC_ALL, "");
	unsigned int numeroPersona=0,personaEntra=0,personaSale=0,personaTotal=0,total=0; 
	printf("********************************* ¡Bienvenidos a nuestra tienda departamental!  ********************************* \n\n\n");
	printf("*********** Por disposición oficial solo podemos ingresar un límite de persona *********** \n\n\n");
	
	do {
		printf("Ingresa el número de personas que entran a la tienda: ");
		scanf("%d",&personaEntra);
		printf("ingresa el número de personas que salen de la tienda ");
		scanf("%d",&personaSale);
		numeroPersona =numeroPersona + personaEntra;
		personaTotal = personaEntra-personaSale;
		total = total + personaTotal;
		
		if(total<=0){
			total =0;
		}
		
		printf("En la tienda han ingresado: %d", numeroPersona);
		printf(" personas \n");
		printf("En la tienda hay: %d", total);
		printf(" personas \n\n");
		
		if (total >= 40){
			if(personaTotal<100){
				printf("*********** Solo pueden salir e ingresar de a dos personas cada 10 minutos ***********\n\n\n");
			}
		}
		
		if((total==0)||(numeroPersona>=100)){
			break;
		}
		
	}while(1);
	printf("*********** La tienda esta cerrada agradecemos tu compra ***********\n");
	system("pause");
	return 0;
}
