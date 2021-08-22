#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
//Declaración de varaibles globales 
int maximo = 3, mitad;
int sueldoClaudia[3], sueldoJuan[3];
bool banderaSalario = false, banderaBusquedaClaudia = false, banderaBusquedaJuan = false, banderaOrdenamiento = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};

//Declaración de las funciones que se van a utilizar en este programa
//Funciones que crea el arreglo
void ingresarSueldo(int arreglo[], string nombre);
//Función que imprime el arreglo creado
void impresionArreglo(int arreglo[]);
//Métodos de ordenamiento 
void ordenamientoBurbuja(int arreglo[]);
void ordenamientoQuicksort(int A[], int izq, int der);
void ordenamientoInsercion(int arreglo[]);
void ordenamientoSeleccion(int arreglo[]);
//Declaración de las funciones donde se imprimen los menús que se utilizan en el programa
void menuOrdenamiento();
void menuPricipal();
void menuSeleccionPersona();
//Declaración las opciones del menu principal
void opcionUnoPrincipal();
void opcionDosPrincipal();
void opcionTresPrincipal();
void opcionCincoPrincipal();
//Declaración de las opciones del menú secundario de ordenamiento
void opcionUnoOrdenamiento();
void opcionDosOrdenamiento();
void opcionTresOrdenamiento();
void opcionCuatroOrdenamiento();

void opcionUnoPersona();
void opcionDosPersona();

//Declaración de la función que realiza la busqueda por medio de método de busqueda binaria.
void busquedaBinaria(int dato, int arreglo[], string nombre);
//Declaración de la función principal
int main(){
	//Función que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	//Llamado al menú principal del programa
	menuPricipal();
	//Retorno cero para que se de por terminado el programa
    return 0;
}

//Declaración de la función de menú principal con los diferentes opciones
void menuPricipal(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    
    //Inicio del ciclo do while
    do {	
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú principal
        cout << "\n\nMenú principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Ingresar los salarios de Claudia y Juan" << endl;
        cout << "2. Impresión de los salarios de Claudia y Juan" << endl;
        cout << "3. Ordenar salarios con métodos de ordenación" << endl;
        cout << "4. Eliminar sueldos repetidos" << endl;
        cout << "5. Busqueda de un sueldo" << endl;
        cout << "6. Operaciones Complementarias" << endl;
        cout << "7. Salir" << endl;
		cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuaio
        switch (opcion) {
            case 1:      
				//Llamado a la primera opcion del menu principal         
                opcionUnoPrincipal();
                //Break que permite termilar la selección de los casos
                break;                
            case 2:
            	//Llamado a la segunda opción de menú principal
            	opcionDosPrincipal();
                break;                
            case 3:
            	//Llamada a la funión de la tercera opción del menú principal
            	opcionTresPrincipal();
                break;
            case 4:  
				                 
                break; 
            case 5: 
				//Llamado a la función de la quinta posición del menú principal                           
				opcionCincoPrincipal();                           
                break;
			case 6:                            
                           
                break;
			case 7:  //Opción que da por terminado el ciclo y se da por concluido el usu del menú                          
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl; //Mensaje en pantalla para mencionar al usuario que se ha terminado el programa
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;   //variable que permite la salida del ciclo asignandole el valor de false                        
                break;                        	
            default://Opción para el caso en donde no se ha agregado las opciones del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje en pantalla, mencionando al usuairo que no ha agregado una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause"); //Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;            			
        }        
    } while (repetir); //Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaración de la función de menú que muestra el ordenamiento de los elementos de un vector
void menuOrdenamiento(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú de ordenamiento
        cout << "\n\n Menú secundario para ordenar los arreglos por medio de los siguientes métodos" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Método Burbuja" << endl;
        cout << "2. Método por Inserción" << endl;
        cout << "3. Método por Selección" << endl;
        cout << "4. Método QuickSoft" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:    
				//Llamado a la primera opcion del menu de ordenamiento 
				opcionUnoOrdenamiento();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl; //Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false 
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de ordenamiento 
				opcionDosOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 3:
            	//Llamado a la tercera opcion del menu de ordenamiento 
				opcionTresOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;
            case 4:
				//Llamado a la cuarta opcion del menu de ordenamiento 
				opcionCuatroOrdenamiento();   
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false                    
                break;                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;     			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaración de la función de menú de seleccion de una persona pra realizar la busqueda de un salario
void menuSeleccionPersona(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú de selección de la persona
        cout << "\n\n Menú secundario para seleccionar la búsqueda del salario de una persona" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Búsqueda salario Claudia" << endl;
        cout << "2. Busqueda salario Juan" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:
            	//Llamado a la primera opcion del menu de selección de la persona
				opcionUnoPersona();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de selección de la persona
            	opcionDosPersona();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;       			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Seccion de opciones del menú principal del programa
//Función para la primera opción del menú principal
void opcionUnoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1" <<endl;
	cout<<"Salario de Claudia"<<endl;
	//llamada a la función para ingresar los sueldos de Claudia
	ingresarSueldo(sueldoClaudia, claudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"Salario de Juan"<<endl;
	//llamada a la función para ingresar los sueldos de Juan
	ingresarSueldo(sueldoJuan, juan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	banderaSalario = true; //Variable que indica que ya se ha llenado los arreglos de los salarios
	cout<< "Se han registrado los salarios correctamente" << endl <<endl; // Mensaje al usuario indicando que se han agregado los salarios
	system("pause");
}

//Función para la segunda opción del menú principal
void opcionDosPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2" <<endl;
	if(banderaSalario){
		cout<<"Salario de Claudia"<<endl;
		impresionArreglo(sueldoClaudia);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		cout<<"Salario de Juan"<<endl;
		impresionArreglo(sueldoJuan);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

//Función para la tercera opción del menú principal
void opcionTresPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3" <<endl;
	if(banderaSalario){
		cout<<"Se dirigira a un menú secundario" << endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		system("pause");
		menuOrdenamiento();
		banderaOrdenamiento = true;
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

//Función para la quinta opción del menú principal
void opcionCincoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 5" <<endl;
	if(banderaSalario){
		if(banderaOrdenamiento){
			cout<<"Se dirigira a un menú secundario" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
			system("pause");
			menuSeleccionPersona();
		}else{
			cout<<"No se ha generado el ordenamiento de los vectores, selecciona la opción 3" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		}
		
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

void opcionUnoPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1, búsqueda salario de Claudia" <<endl;
	int dato;
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;
	busquedaBinaria(dato, sueldoClaudia, claudia);
	if(banderaBusquedaClaudia){
		cout<< "Se ha encontrado " << sueldoClaudia[mitad] << " en la posicion " << mitad << endl;
		banderaBusquedaClaudia = false;
	}else{
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

void opcionDosPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2, búsqueda salario de Juan" <<endl;
	int dato; 
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;
	busquedaBinaria(dato, sueldoJuan, juan);
	if(banderaBusquedaJuan){
		cout<< "Se ha encontrado " << sueldoJuan[mitad] << " en la posicion " << mitad << endl;
		banderaBusquedaJuan = false;
	}else{
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

void opcionUnoOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1, ordenamiento por el método de burbuja" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoBurbuja(sueldoClaudia);
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoBurbuja(sueldoJuan);
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método burbuja" <<endl;
}

void opcionDosOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2, ordenamiento por el método de Insersión" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoInsercion(sueldoClaudia);
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoInsercion(sueldoJuan);
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Insersión" <<endl;
}

void opcionTresOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3, ordenamiento por el método de Selección" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoSeleccion(sueldoClaudia);
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoSeleccion(sueldoJuan);
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Selección" <<endl;
}

void opcionCuatroOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4, ordenamiento por el método de QuickSort" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoQuicksort(sueldoClaudia,0,(maximo-1));
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoQuicksort(sueldoJuan,0,(maximo-1));
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de QuickSort" <<endl;
}
//Ingreso de sueldo en general
void ingresarSueldo(int arreglo[], string nombre){			
	int num;
	for(int i = 0; i < maximo; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de " << nombre <<": ";
    	cin >> num;
        arreglo[i] = num;
    }
}
//Impresión del arreglo en general
void impresionArreglo(int arreglo[]){
	cout << "[ ";
	for(int i = 0; i < maximo; i++)
    {
    	cout << " " << arreglo[i] << " ";
    }
    cout << "] " <<endl;
}

//Ordenamiento burbuja
void ordenamientoBurbuja(int arreglo[]){
	int aux;
	for(int i =0 ; i<maximo; i++){
		for(int j = 0; j<(maximo-1); j++){
			if(arreglo[j]>arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
}

//Ordenamiento por insersion
void ordenamientoInsercion(int arreglo[]){
	int pos, aux;
	for(int i = 0; i<maximo; i++){
		pos = i;
		aux = arreglo[i];
		while((pos > 0) && (arreglo[pos - 1] > aux)){
			arreglo[pos] = arreglo [pos - 1];
			pos--;
		}
		arreglo[pos] = aux;
	}
}

//Ordenamiento por Selección
void ordenamientoSeleccion(int arreglo[]){
	int min, aux;
	for(int i = 0 ; i < maximo; i++){
		min = i;
		for (int j = i+1;j<3;j++){
			if(arreglo[j]<arreglo[min]){
				min = j;
			}
		}
		aux = arreglo[i];
		arreglo[i] = arreglo[min];
		arreglo[min] = aux;
	}
}

//Ordenamiento Quick Sort
void ordenamientoQuicksort(int A[], int izq, int der){
	int i, j, x, aux;
	i=izq;
	j = der;
	x = A[(izq+der)/2];
	do{ 
        while( (A[i] < x) && (j <= der) )
        { 
            i++;
        } 
 
        while( (x < A[j]) && (j > izq) )
        { 
            j--;
        } 
 
        if( i <= j )
        { 
            aux = A[i]; A[i] = A[j]; A[j] = aux; 
            i++;  j--; 
        }
         
    }while( i <= j ); 
 
    if( izq < j ) {
    	ordenamientoQuicksort( A, izq, j ); 
	}
        
    if( i < der ) {
    	ordenamientoQuicksort( A, i, der );
	}       
}

//Busqueda binaria
void busquedaBinaria(int dato, int arreglo[], string nombre){
	int inferior = 0;
	int superior = maximo;
	int iteracion = 1;
	while((inferior <= superior)&&(iteracion<=20)){
		mitad = (inferior+superior)/2;
		iteracion = iteracion + 1;
		if(arreglo[mitad] == dato){
			if(nombre == "Claudia"){
				banderaBusquedaClaudia = true;
			}
			if(nombre == "Juan"){
				banderaBusquedaJuan = true;
			}
			break;
		}
		if(arreglo[mitad] > dato){
			superior = mitad;
			mitad = (inferior+superior)/2;
		}
		if(arreglo[mitad] < dato){
			inferior = mitad;
			mitad = (inferior+superior)/2;
		}
	}
}


