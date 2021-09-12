#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
//Declaraci�n de varaibles globales 
//Estructura donde se declara un nodo
struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;
};
Nodo *arbol = NULL;

//Declaraci�n de los funciones que se van a utilizar
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
void preOrden(Nodo *arbol);
void inOrden(Nodo *arbol);
void posOrden(Nodo *arbol);
void eliminar(Nodo*, int);
void eliminarNodo(Nodo*);
Nodo* minimo(Nodo*);
void reemplazar(Nodo*, Nodo*);
void destruirNodo(Nodo*);
void menuPricipal();

int main(){
	//Funci�n que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	//Llamado al men� principal del programa
	menuPricipal();
	//Retorno cero para que se de por terminado el programa
    return 0;
}

//Declaraci�n de la funci�n de men� principal con los diferentes opciones
void menuPricipal(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreso de una opci�n
	int opcion, dato, contador=1;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    
    //Inicio del ciclo do while
    do {	
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� principal
        cout << "\n\nMen� principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Insertar un nuevo nodo" << endl;
        cout << "2. Eliminar nodo" << endl;
        cout << "3. Impresi�n de contenido PreOrden, InOrden, PosOrden" << endl;
        cout << "4. Salir" << endl;
		cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuaio
        switch (opcion) {
            case 1:      
				//Llamado a la primera opcion del menu principal         
                //opcionUnoPrincipal();
                //Break que permite termilar la selecci�n de los casos
                cout << "Digite un numero: ";
            	cin >> dato;
            	insertarNodo(arbol, dato,NULL);
            	cout << "\n";
            	system("pause");
                break;                
            case 2:
            	//Llamado a la segunda opci�n de men� principal
            	//opcionDosPrincipal();
            	cout << "\nDigite el numero que desea eliminar:";
            	cin >> dato;
            	eliminar(arbol, dato);
            	cout << "\n";
            	system("pause");
                break;                
            case 3:
            	//Llamada a la funi�n de la tercera opci�n del men� principal
            	//opcionTresPrincipal();
            	cout<<"Mostrando el arbol completo: "<<endl;
        		mostrarArbol(arbol, contador);
        		cout<<"\n";
            	cout<<"Recorrido PreOrden: ";
				preOrden(arbol);
				cout<<endl;
				cout<<"Recorrido InOrden: ";
				inOrden(arbol);
				cout<<endl;
				cout<<"Recorrido PosOrden: ";
				posOrden(arbol);
				cout<<endl;
				system("pause");
                break;
			case 4:  //Opci�n que da por terminado el ciclo y se da por concluido el usu del men�                          
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl; //Mensaje en pantalla para mencionar al usuario que se ha terminado el programa
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;   //variable que permite la salida del ciclo asignandole el valor de false                        
                break;                        	
            default://Opci�n para el caso en donde no se ha agregado las opciones del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje en pantalla, mencionando al usuairo que no ha agregado una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause"); //Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;            			
        }        
    } while (repetir); //Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Funcion para crear un nodo
Nodo *crearNodo(int n, Nodo *padre){
	//cout<<"M�todo de crear nodo"<<endl;
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo -> dato = n;
	nuevoNodo -> der = NULL;
	nuevoNodo -> izq = NULL;
	nuevoNodo -> padre = padre; 
	return nuevoNodo;
}

//Funcion para insertar elementos en el arbol.
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){
	//Verifica si el arbol esta vacio para crear un nuevo nodo
	if(arbol == NULL){
		Nodo *nuevoNodo = crearNodo(n,padre);
		arbol = nuevoNodo;
	}else{ //Si el arbol tiene un nodo o mas de un nodo realiza lo siguiente
		int valorRaiz = arbol->dato; //Obtenemos el valor de la raiz
		if(n< valorRaiz){ //Si el elemento es menor a la raiz, insertamos a la izquierda de la raiz
			insertarNodo(arbol->izq,n,arbol);
		}else{//Si el elemento es mayor a la raiz, insertar del a la derecha de la raiz
			insertarNodo(arbol->der,n,arbol);
		}
	}	
}

//Funcion para mostrar el arbol completo.
void mostrarArbol(Nodo *arbol, int contador){
	//Verifica si el arbol esta vacio
	if(arbol == NULL){
		return;	
	}
	else{
		//Muestra primero el arbol del lado derecho
		mostrarArbol(arbol->der,contador+1);
		for(int i = 0; i<contador; i++){
			cout<< "   ";
		}
		//Muesra el lado izquierdo
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq, contador+1);
	}
}

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

// Funcion para eliminar un nodo del arbol
void eliminar(Nodo* arbol, int n) {
    if (arbol == NULL) {
        return;
    }
    else if (n < arbol->dato) { //Si el valor es menor a la raiz
        eliminar(arbol->izq, n); // Busca por la izquierda
    }
    else if (n > arbol->dato) { // Si el valor es mayor a la raiz
        eliminar(arbol->der, n); //Busca por la derecha
    }
    else {
    	//Llamado a la funci�n de eliminar nodo
        eliminarNodo(arbol);
    }
}

//Funcion para eliminar el nodo encontrado dentro del arbol
void eliminarNodo(Nodo* nodoEliminar) {
	//Verificaci�n para observar si el nodo tiene rama izquierda y derecha
    if (nodoEliminar->izq && nodoEliminar->der) {
        Nodo* menor = minimo(nodoEliminar->der); 
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    }
    //Si el nodo tiene un hijo izquierdo 
    else if (nodoEliminar->izq) {
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }
    //Si el nodo tiene un hijo derecho
    else if (nodoEliminar->der) {
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }
    // Si el nodo no tiene hijos y es una hoja
    else { 
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}

//Funci�n para determinar el nodo mas izquierdo posible dentro de un arbol
Nodo* minimo(Nodo* arbol) {
	//Verificaci�n para el caso de que el arbol este vac�o
    if (arbol == NULL) {
        return NULL;
    }
    if (arbol->izq) { // Si tiene hijo izquierdo
        return minimo(arbol->izq); // retorna el hijo izquierdo
    }
    else { // Si no tiene hijo izquierdo (significa que �l es el m�s izquierdo)
        return arbol; // Se retorna as� mismo
    }
}

// Funci�n para reemplazar dos nodos
void reemplazar(Nodo* arbol, Nodo* nuevoNodo) {
    if (arbol->padre) {
        //Nodo padre hay que asignarle un nuevo hijo ya sea por la izquierda o por la derecha
        if (arbol->dato == arbol->padre->izq->dato) {
            arbol->padre->izq = nuevoNodo;
        }
        else if (arbol->dato == arbol->padre->der->dato) {
            arbol->padre->der = nuevoNodo;
        }
    }
    if (nuevoNodo) {
        //Procedemos a asignarle su nuevo padre al nodo
        nuevoNodo->padre = arbol->padre;
    }
}

// Funci�n para destruir un nodo
void destruirNodo(Nodo* nodo) {
	//Asignaci�n de nulos del lado de los nodos
    nodo->izq = NULL;
    nodo->der = NULL;
    //Eliminaci�n de los nodos
    delete nodo;
}
