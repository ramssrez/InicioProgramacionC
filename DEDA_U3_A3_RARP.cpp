#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

struct Nodo{
	//cout<<"Creación de nodo"<<endl;
	int dato;
	Nodo *der;
	Nodo *izq;
};

Nodo *arbol = NULL;

Nodo *crearNodo(int);

void insertarNodo(Nodo *&, int);
void menu();
void mostrarArbol(Nodo *arbol, int contador);

int main(){
	int var = 20;
	cout<<var<<endl;
	cout<<&var<<endl;
	//Función que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	menu();
	return 0;
}

//Función del menú
void menu(){
	int opcion, dato, contador = 0;
	do{
		cout<<"\t.:MENU: "<<endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Mostrar arbolcompleto" << endl;
        cout << "3. Salir" << endl;
        cout <<"Ingresa una opcion: ";
        cin >> opcion;
        switch(opcion){
        	case 1:
        		cout<<"\tDigita un número: ";
        		cin >> dato;
        		insertarNodo(arbol, dato);
        		cout<<"\n";
        		system("pause");
        		break;
        	case 2:
        		cout<<"Mostrando el arbol completo: ";
        		mostrarArbol(arbol, contador);
        		cout<<"\n";
        		system("pause");
        		break;
        	//default:
        	//	cout<<"No es un valor del menú" << endl;
        		
        		
		}
		system("cls");
	}while (opcion !=2);
}

//Funcion para crear un nodo
Nodo *crearNodo(int n){
	cout<<"Método de crear nodo"<<endl;
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo -> dato = n;
	nuevoNodo -> der = NULL;
	nuevoNodo -> izq = NULL;
	return nuevoNodo;
}

//Funcion para insertar elementos en el arbol.
void insertarNodo(Nodo *&arbol, int n){
	//Si el arbol esta vacion
	if(arbol == NULL){
		//cout<<"El arbol es nulo"<<endl;
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	}else{ //Si el arbol tiene un nodo o mas de un nodo
		//cout<<"El arbol tiene nodo"<<endl;
		int valorRaiz = arbol->dato; //Obtenemos l valor de la raiz
		if(n< valorRaiz){ //Si el elemento es menor a la raiz, insertamos a la izquierda
			insertarNodo(arbol->izq,n);
			//cout<<"El valor es menor a la raiz"<<endl;
		}else{//Si el elemento es mayor a la raiz, insertar del lado derecha
			insertarNodo(arbol->der,n);
			//cout<<"El valor es mayor a la raiz"<<endl;
		}
	}	
}

//funcion para mostrar el arbol completo.
void mostrarArbol(Nodo *arbol, int contador){
	if(arbol == NULL){
		return;	
	}
	else{
		mostrarArbol(arbol->der,contador+1);
		for(int i = 0; i<contador; i++){
			cout<< "   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}


