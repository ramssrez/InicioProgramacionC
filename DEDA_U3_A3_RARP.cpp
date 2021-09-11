#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

//Estructura donde se declara un nodo
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
bool busqueda(Nodo *arbol, int n);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);

int main(){
	//Función que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	menu();
	return 0;
}

//Función del menú
void menu(){
	int opcion, dato, contador = 1;
	do{
		cout<<"\t.:MENU: "<<endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Mostrar arbol completo" << endl;
		cout << "3. Buscar un elemento del arbol" << endl;
		cout << "4. Recorrer el arbol en PreOrden" << endl;
		cout << "5. Recorrer el arbol en InOrden" << endl;
        cout << "6. Salir" << endl;
        cout <<"Ingresa una opcion: ";
        cin >> opcion;
        switch(opcion){
        	case 1:
        		cout<<"\tDigita un número: ";
        		cin >> dato;
        		insertarNodo(arbol, dato);
        		cout<<"\n";
        		//system("pause");
        		break;
        	case 2:
        		cout<<"Mostrando el arbol completo: "<<endl;
        		mostrarArbol(arbol, contador);
        		cout<<"\n";
        		//system("pause");
        		break;
        	//default:
        	//	cout<<"No es un valor del menú" << endl;
        	case 3:
				cout<<"Digite el elemento a buscar: ";
				cin >>dato;
				if(busqueda(arbol, dato)){
					cout<<"Elemento "<<dato<< " ha sido encontrado en el arbol"<<endl;
				}else{
					cout<<"Elemento no encontrado"<<endl;
				}	
        		break;
        	case 4:
        		cout<<"Recorrido PreOrden: ";
				preOrden(arbol);
				break;
			case 5:
        		cout<<"Recorrido InOrden: ";
				inOrden(arbol);
				break;
		}
		//system("cls");
	}while (opcion !=6);
}

//Funcion para crear un nodo
Nodo *crearNodo(int n){
	//cout<<"Método de crear nodo"<<endl;
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo -> dato = n;
	nuevoNodo -> der = NULL;
	nuevoNodo -> izq = NULL;
	return nuevoNodo;
}

//Funcion para insertar elementos en el arbol.
void insertarNodo(Nodo *&arbol, int n){
	//cout<<"Método insertar un nodo"<<endl;
	//Si el arbol esta vacio
	if(arbol == NULL){
		//cout<<"El arbol es nulo"<<endl<<endl;
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	}else{ //Si el arbol tiene un nodo o mas de un nodo
		//cout<<"El arbol tiene nodo"<<endl<<endl;
		int valorRaiz = arbol->dato; //Obtenemos l valor de la raiz
		//cout<<"valorRaiz "<<valorRaiz<<endl<<endl;
		if(n< valorRaiz){ //Si el elemento es menor a la raiz, insertamos a la izquierda
			insertarNodo(arbol->izq,n);
			//cout<<"El valor es menor a la raiz"<<endl<<endl;
		}else{//Si el elemento es mayor a la raiz, insertar del lado derecha
			insertarNodo(arbol->der,n);
			//cout<<"El valor es mayor a la raiz"<<endl<<endl;
		}
	}	
}

//funcion para mostrar el arbol completo.
void mostrarArbol(Nodo *arbol, int contador){
	//cout<<"Método para mostrar un arbol"<<endl;
	if(arbol == NULL){
		//cout<<" "<<endl<<endl;
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

//Funición para buscar un elemento en el arbol
bool busqueda(Nodo *arbol, int n){
	//cout<<"Método para buscar un nodo"<<endl;
	//Caso de que el arbol esta vacio
	if(arbol == NULL){
		return false;
	}else if(arbol->dato == n){//Si el nodo es igual al elemento
		return true;
	}else if(n < arbol->dato){//En caso de que no sea igual y el menor al valor se busca por la izquierda
		return busqueda(arbol->izq, n);
	}else{ // El caso de que no sea igual y mayor al valor del nodo, se busza por la derecha
		return busqueda(arbol->der, n);
	}
}

//Funcion para realizar el recorrido de profundidad preOrden
void preOrden(Nodo *arbol){
	//Caso si el arbol esta vacio
	if(arbol == NULL){
		return;
	}else{
		cout<<arbol->dato<<" "<<endl;
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

//Funcion para realizar el recorrido de profundidad OnOrden
void inOrden(Nodo *arbol){
	//Caso si el arbol esta vacio
	if(arbol == NULL){
		return;
	}else{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" " <<endl;
		inOrden(arbol->der);
	}
}
