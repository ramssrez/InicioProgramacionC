#include <stdio.h>
#include <conio.h>


int main ()
{
   
	int dia,mes,anio; 
	unsigned int diaDos;
	
    do{   
		printf("\n\nEscribe tu día de nacimiento: ");
    	scanf("%d",&dia);
    
	    if (dia>=1 && dia<=31)
   	   	{
    	 
    	}			
			else{
				printf("\n\n Tu dato es incorrecto vuelve a ingresarlo ");

			}
    }
    
	while(dia>=31 || dia<1);
	do
	{
		
	    printf("\n\nEscribe tu mes de nacimiento: ");
    	scanf("%d",&mes);
    	
    	if (mes>=1 && mes<=12)
   	   	{
    	 
    	}			
			else{
				printf("\n\n Tu dato es incorrecto vuelve a ingresarlo ");

			}
		}
	while(mes>=12 || mes<1);
	
	
	printf("\n\nEscribe tu año de nacimiento: ");
    scanf("%d",&anio);
        
	while(anio<1900 || anio>2020){
		
		printf("\n\nEscribe tu año de nacimiento de nuevo: ");
        scanf("%d",&anio);
	}
	
	
	

	
	getch ();
	return 0; 
}
