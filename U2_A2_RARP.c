/*
Programa que permite el control de personas en un día,
para entrar y salir de la tienda departaental en la nueva
normalidad por el COVID 19
*/
#include <stdio.h>
#include<conio.h>
#include <time.h>
int main(void){
	float radio, area;
	printf("Hola mundo\n");
	printf("Segundo desde 1970: %ld",time(0));
	long int i=0;
   time_t comienzo, final;
   struct tm *tiempoComienzoPtr, *tiempoFinalPtr;

   comienzo = time( NULL );
   for( i=0; i<10000; i++ )   printf( "-" );
   final = time( NULL );

   printf( "Comienzo: %u s\n", comienzo );
   printf( "Final: %u s\n", final );
   printf( "Número de segundos transcurridos desde el comienzo del programa: %f s\n", difftime(final, comienzo) );

   tiempoComienzoPtr = gmtime( &amp;comienzo );
   tiempoFinalPtr = gmtime( &amp;final );
   printf( "Comienzo: %s\n", asctime(tiempoComienzoPtr) );
   printf( "Final: %s\n", asctime(tiempoFinalPtr) );

	
	
	getch();
	return 0;
}
