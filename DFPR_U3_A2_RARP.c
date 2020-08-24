#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   unsigned int i=0,A[60],mayoredad=0;
   float prom,suma=0;

   printf( "Estos son 50 edades de personas ingresados: \n\n" );
   for( i=1; i<51; i++ ){
   	 A[i]= rand()%100;
   }
    for( i=1; i<51; i++ ){
    printf( "%d,", A[i] );
}

   for( i=1; i<51; i++ ){
    suma = suma + A[i]; 
}
printf("\tSu suma es %.2f", suma);

prom=suma/50;

printf("\tEl promedio es %.2f",prom);

for( i=0; i<50; i++ ){
    
    if(A[i]>19){
    mayoredad=mayoredad+1;}
}

 printf( "\nEl numero de personas mayores de edad son: %d", mayoredad );
 printf( "\nEl numero de personas menores de edad son: %d", 50-mayoredad );
 
 if(mayoredad>25)
 {
 	printf( "\nHay %d mayores de edad, por lo tanto hay mas mayores de edad",mayoredad);
 }
 if(mayoredad==25)
 {
 	printf( "\nHay %d mayores de edad y %d menores de edad,  por lo tanto hay igual mayores de edad que de menores",mayoredad,50-mayoredad);
 }
 if(mayoredad<25)
 	printf( "\nHay %d menores de edad, por lo tanto hay mas mayores de edad",50-mayoredad);
 
  return 0;  
}
   
   

