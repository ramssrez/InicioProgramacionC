#include <stdio.h>////Librería estándar de C para la entrada y salida del información
#include <stdlib.h>//Librería que nos permite dar sentencias al sistema
//Librerías que nos permiten agregar caracteres especiales al texto de salida
#include <wchar.h>
#include <locale.h>
//Definición de las variables constantes
#define TRUE 1
#define FALSE 0
#define MAXIMOARRAY 100
//Declaración de la pila con la palabra reservada struct
struct stack{
	int tope; //Ultimo elemento del la estructura
	int vector [MAXIMOARRAY]; //Vector que contabilliza las posiciones
		
}; //nombre de la estructura

//Función que crea una pila, asgnandole el número -1 para su creación
void crearPila(struct stack *pila){
	pila->tope = -1;
}

//Función que nos dice si una pila esta vacia
int pilaVacia(struct stack *pila){
	//Esto es para ver si esta vacía o no
	if (pila->tope == -1){
		return TRUE;
	}else{
		return FALSE;
	}
}
//Función que nos dice si una pila esta llena
int pilaLlena(struct stack *pila){
	if(pila->tope ==(MAXIMOARRAY-1)){
		return TRUE;		
	}else{
		return FALSE;
	}
}

//Función que agrega una pila cuando no este llena
void agregarPila(struct stack *pila, int numero){
	if(!pilaLlena(pila)){
		pila->tope++;
		pila->vector[pila->tope] = numero;
		//printf("Se ha eliminado un elemento : %i \n",pila->vector[pila->tope]);	
		printf("Se ha agregado el elemento : %i \n",pila->vector[pila->tope]);					
	}else{
		printf("¡¡¡La pila esta llena!!!\n");
	}
}
//Función que elimina una pila cuando no este vacia
void eliminarPila(struct stack *pila){
	if(!pilaVacia(pila)){
		int temporal = pila->tope;
		pila->tope--;
		printf("Se extrajo el  elemento: %d \n",pila->vector[temporal]);
	}else{
		printf("La pila ya estaba vacia \n");
	}
}

//Funcion para obtener el ultimo valor
int ultimoPila(struct stack *pila){
	if(!pilaVacia(pila)){
		return pila->vector[pila->tope];
	}else{
		printf("ERROR la pila ya estaba vacia, se regresa 0 \n");
		return FALSE;
	}
	
}

int main(){
	//Método que nos permite el ingreso de caracteres especiales como los acentos
	setlocale(LC_ALL, "");
	//Declaración de pila a usar
	struct stack pila;
	//Creación de la pila
	crearPila(&pila);
	//Agregado el valor de la pila
	printf( "\n\t ********** Bienvenido al programa que usa una pila en C, crear, agregar y eliminar **********\n\n" );
	printf("Agregando valor a la pila \n");
	agregarPila(&pila,5);
	agregarPila(&pila,10);
	
	printf("El ultimo valor de la pila es: %d \n",ultimoPila(&pila));
	eliminarPila(&pila);
	printf("El ultimo valor de la pila es: %d \n",ultimoPila(&pila));
	eliminarPila(&pila);
	printf("El ultimo valor de la pila es: %d \n",ultimoPila(&pila)); 
	printf("\n\n ------------------------------------------------------------------------------------------------------ \n\n");
	system("pause");
	return FALSE;
}
