#include <iostream>
#include <cstdlib>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
using namespace std;

//Estructura donde se declara un nodo
struct Nodo{
	string dato;
	Nodo *der;
	Nodo *izq;
};

Nodo *arbol = NULL;
Nodo *crearNodo(char);
void insertarNodo(Nodo *&, char);
//void menu();
void mostrarArbol(Nodo *arbol, int contador);
//bool busqueda(Nodo *arbol, int n);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void posOrden(Nodo *arbol);
int main(){
	//Funci�n que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	struct Nodo *raiz = crearNodo('+');
    insertarNodo(raiz, '1');
    insertarNodo(raiz, '*');
    insertarNodo(raiz, '+');
    insertarNodo(raiz, '0');
    insertarNodo(raiz, '7');
    insertarNodo(raiz, '8');
    //insertarNodo(raiz, 6);
    //insertarNodo(raiz, 97);
    //insertarNodo(raiz, 1);
    //insertarNodo(raiz, 30);
    //insertarNodo(raiz, 10);
    //insertarNodo(raiz, 2);
    int contador =1;
    mostrarArbol(raiz,contador);
	//menu();
	return 0;
}

//Funci�n del men�
void menu(){
	int opcion, dato, contador = 1;
	do{
		cout<<"\t.:MENU: "<<endl;
		cout << "1. Insertar un nuevo nodo" << endl;
		cout << "2. Mostrar arbol completo" << endl;
		cout << "3. Buscar un elemento del arbol" << endl;
		cout << "4. Recorrer el arbol en PreOrden" << endl;
		cout << "5. Recorrer el arbol en InOrden" << endl;
		cout << "6. Recorrer el arbol en PosOrden" << endl;
        cout << "7. Salir" << endl;
        cout <<"Ingresa una opcion: ";
        cin >> opcion;
        switch(opcion){
        	case 1:
        		cout<<"\tDigita un n�mero: ";
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
        	//	cout<<"No es un valor del men�" << endl;
        	case 3:
				cout<<"Digite el elemento a buscar: ";
				cin >>dato;
				//if(busqueda(arbol, dato)){
				//	cout<<"Elemento "<<dato<< " ha sido encontrado en el arbol"<<endl;
				//}else{
				//	cout<<"Elemento no encontrado"<<endl;
				}	
        		break;
        	case 4:
        		cout<<"Recorrido PreOrden: ";
				preOrden(arbol);
				cout<<endl;
				break;
			case 5:
        		cout<<"Recorrido InOrden: ";
				inOrden(arbol);
				cout<<endl;
				break;
			case 6:
        		cout<<"Recorrido PosOrden: ";
				posOrden(arbol);
				cout<<endl;
				break;
		}
		//system("cls");
	}while (opcion !=7);
}

//Funcion para crear un nodo
Nodo *crearNodo(char n){
	//cout<<"M�todo de crear nodo"<<endl;
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo -> dato = n;
	nuevoNodo -> der = NULL;
	nuevoNodo -> izq = NULL;
	return nuevoNodo;
}

//Funcion para insertar elementos en el arbol.
void insertarNodo(Nodo *&arbol, char n, string valor){
	//cout<<"M�todo insertar un nodo"<<endl;
	//Si el arbol esta vacio
	if(arbol == NULL){
		//cout<<"El arbol es nulo"<<endl<<endl;
		Nodo *nuevoNodo = crearNodo(n);
		arbol = nuevoNodo;
	}else{ //Si el arbol tiene un nodo o mas de un nodo
		//cout<<"El arbol tiene nodo"<<endl<<endl;
		//int valorRaiz = arbol->dato; //Obtenemos el valor de la raiz
		//cout<<"valorRaiz "<<valorRaiz<<endl<<endl;
		if(valor == "izquierda"){ //Si el elemento es menor a la raiz, insertamos a la izquierda
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
	//cout<<"M�todo para mostrar un arbol"<<endl;
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

//Funici�n para buscar un elemento en el arbol
//bool busqueda(Nodo *arbol, int n){
	//cout<<"M�todo para buscar un nodo"<<endl;
	//Caso de que el arbol esta vacio
//	if(arbol == NULL){
//		return false;
//	}else if(arbol->dato == n){//Si el nodo es igual al elemento
//		return true;
//	}else if(n < arbol->dato){//En caso de que no sea igual y el menor al valor se busca por la izquierda
//		return busqueda(arbol->izq, n);
//	}else{ // El caso de que no sea igual y mayor al valor del nodo, se busza por la derecha
//		return busqueda(arbol->der, n);
//	}
//}

//Funcion para realizar el recorrido de profundidad preOrden
void preOrden(Nodo *arbol){
	//Caso si el arbol esta vacio
	if(arbol == NULL){
		return;
	}else{
		cout<<arbol->dato<<" ";
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
		cout<<arbol->dato<<" ";
		inOrden(arbol->der);
	}
}

//Funcion para realiza el recorrido posOrden
void posOrden(Nodo *arbol){
	if(arbol == NULL){
		return;
	}else{
		posOrden(arbol->izq);
		posOrden(arbol->der);
		cout<<arbol->dato<<" ";	
	}
}
	
