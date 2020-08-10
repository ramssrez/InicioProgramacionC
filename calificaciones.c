#include <stdio.h>
#include <conio.h>
#include <stdio.h>
int op,op1,op2,i=0,calif,suma;
int main()

{
    printf("\n\t\tBienvenido al sistema de calificaciones\n\n\t");
 
    do
    {
    	printf("\n\tSeleccione la opcion de su preferencia \n\n\t");
        printf("\n\t1)Ingresar las calificaciones \n\t2)Mostrar los indicadores \n\t3)Salir del sistema de calificaciones.\n\t");
        scanf("%i",&op);

                switch(op)
                {
                    case 1:
                                            			  
  							for(i=1;i<4;i++)
							  {
							    printf("\n Escriba la calificacion numero %d \n",i);
							    printf("\t");
								scanf("%d,%d,%d",&calif);
							   }
							 printf("\n\n Las calificaciones se han guardado \n\n\t",i);
							 printf("\n\n Ha regresado al Menu \n\n\t",i);
							 
							 printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n",i);
							
                  
                    break;

                    case 2:
                      printf("Cual desea comprar, elige una opcion");
                      
                    break;


                     case 3: 
					  printf("\nUsted acaba de salir del sistema de calificaciones");
					  getch();
   					  return 0;
                      
                    break;

                                                
                    default:
                    printf("\nNo eligió ninguna opción valida\n",162,162);
                    break;
                }
              }


    while(op!=4);
    printf("\n\tAcaba de salir del programa de compra de Videojuegos\n\t");


    getch();
    return 0;
}
