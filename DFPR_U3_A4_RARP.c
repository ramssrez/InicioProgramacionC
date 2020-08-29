#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define maxArray 30
//Declaración de la pila con la palabra reservada struct
typedef struct {
	//char nombre[20];
	//int id;
	//char apellido[20];
	int tope; //Ultimo elemento que entra
	int vector [maxArray];
		
}stack; //nombre de la estructura

//Con esta función se crea la pila pasando estructura llamada pila
void crearPila(stack *pila){
	pila->tope = -1;
}

//Dice si esta vacia una pila
int vacia(stack *pila){
	//Esto es para ver si esta vacía o no
	if (pila->tope == -1){
		return true;
	}else{
		return false;
	}
}
//Dice si esta llena la pila
int llena(stack *pila){
	if(pila->tope ==(maxArray-1)){
		return true;		
	}else{
		return false;
	}
}

//Función que agrega una pila cuando no este llena
void add(stack *pila, int n){
	if(!llena(pila)){
		pila->tope++;
		pila->vector[pila->tope]=n;
		printf("Se ha ingresado: %d \n",pila->vector[pila->tope]);		
		
	}else{
		printf("¡¡¡La pila esta llena!!!\n");
	}
}
//Función que elimina una pila cuando no este vacia
void del(stack *pila){
	if(!vacia(pila)){
		int temporal = pila->tope;
		pila->tope--;
		printf("Si se extrajo elemento \n",pila->vector[temporal]);
	}else{
		printf("La pila estaba vacia \n");
	}
}

//Funcion para obtener el ultimo valor
int ultimo(stack *pila){
	if(vacia(pila)){
		return pila->vector[pila->tope];
	}else{
		printf("ERROR la pila estaba vacia \n");
		return false;
	}
	
}

int main(){
	stack pila;
	crearPila(&pila);
	/*
	add(&pila,5);
	add(&pila,22);
	add(&pila,4);
	add(&pila,9);
	add(&pila,50);
	*/
	printf("El ultimo valor de la pila es: %d \n",pila.tope);
	printf("El ultimo valor de la pila es: %d \n",pila.vector[pila.tope]);
	printf("El ultimo valor con función de la pila es: %d \n",ultimo(&pila));
	del(&pila);
	printf("El ultimo valor con función de la pila es: %d \n",ultimo(&pila));

	printf("Hola mundo desde C");
	
	return true;
}
