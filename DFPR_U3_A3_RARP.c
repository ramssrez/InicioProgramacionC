#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//https://es.wikibooks.org/wiki/Programaci%C3%B3n_en_C/Algoritmos_y_Estructuras_de_Datos

int main()
{
   srand(time(NULL));
   unsigned int i=0,j=0,variable,A[12];
  
   printf( "Estos son 10 numeros aleatorios: \n\n" );
   for( i=0; i<10; i++ ){
   	 A[i]= rand()%20;
   }
    for( i=0; i<10; i++ ){
    printf( "%d,", A[i] );
	}
	
	for(i=0; i<10; i++ ){
		for( j=0; j<10; j++ ){
			if(A[j]>A[j+1])
			{
				variable=A[j];
				A[j]=A[j+1];
				A[j+1]=variable;
				
			}
		}
	}
	printf( "\nLos numeros ordenados son:" );
			
	for( i=0; i<10; i++ ){
    printf( "\%d,", A[i] );
	}
	
	printf( "\nEl numero maximo es:%d", A[9]);
		
	
  
  return 0;  
}
   
   

