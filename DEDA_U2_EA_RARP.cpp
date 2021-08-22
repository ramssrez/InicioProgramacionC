#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
//Declaraci�n de varaibles globales 
int maximo = 3, mitad;
int sueldoClaudia[3], sueldoJuan[3];
bool banderaSalario = false, banderaBusquedaClaudia = false, banderaBusquedaJuan = false, banderaOrdenamiento = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};

//Declaraci�n de las funciones que se van a utilizar en este programa
//Funciones que crea el arreglo
void ingresarSueldo(int arreglo[], string nombre);
//Funci�n que imprime el arreglo creado
void impresionArreglo(int arreglo[]);
//M�todos de ordenamiento 
void ordenamientoBurbuja(int arreglo[]);
void ordenamientoQuicksort(int A[], int izq, int der);
void ordenamientoInsercion(int arreglo[]);
void ordenamientoSeleccion(int arreglo[]);
//Declaraci�n de las funciones donde se imprimen los men�s que se utilizan en el programa
void menuOrdenamiento();
void menuPricipal();
void menuSeleccionPersona();
//Declaraci�n las opciones del menu principal
void opcionUnoPrincipal();
void opcionDosPrincipal();
void opcionTresPrincipal();
void opcionCincoPrincipal();
//Declaraci�n de las opciones del men� secundario de ordenamiento
void opcionUnoOrdenamiento();
void opcionDosOrdenamiento();
void opcionTresOrdenamiento();
void opcionCuatroOrdenamiento();

void opcionUnoPersona();
void opcionDosPersona();

//Declaraci�n de la funci�n que realiza la busqueda por medio de m�todo de busqueda binaria.
void busquedaBinaria(int dato, int arreglo[], string nombre);
//Declaraci�n de la funci�n principal
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
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    
    //Inicio del ciclo do while
    do {	
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� principal
        cout << "\n\nMen� principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Ingresar los salarios de Claudia y Juan" << endl;
        cout << "2. Impresi�n de los salarios de Claudia y Juan" << endl;
        cout << "3. Ordenar salarios con m�todos de ordenaci�n" << endl;
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
                //Break que permite termilar la selecci�n de los casos
                break;                
            case 2:
            	//Llamado a la segunda opci�n de men� principal
            	opcionDosPrincipal();
                break;                
            case 3:
            	//Llamada a la funi�n de la tercera opci�n del men� principal
            	opcionTresPrincipal();
                break;
            case 4:  
				                 
                break; 
            case 5: 
				//Llamado a la funci�n de la quinta posici�n del men� principal                           
				opcionCincoPrincipal();                           
                break;
			case 6:                            
                           
                break;
			case 7:  //Opci�n que da por terminado el ciclo y se da por concluido el usu del men�                          
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

//Declaraci�n de la funci�n de men� que muestra el ordenamiento de los elementos de un vector
void menuOrdenamiento(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� de ordenamiento
        cout << "\n\n Men� secundario para ordenar los arreglos por medio de los siguientes m�todos" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. M�todo Burbuja" << endl;
        cout << "2. M�todo por Inserci�n" << endl;
        cout << "3. M�todo por Selecci�n" << endl;
        cout << "4. M�todo QuickSoft" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:    
				//Llamado a la primera opcion del menu de ordenamiento 
				opcionUnoOrdenamiento();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl; //Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false 
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de ordenamiento 
				opcionDosOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 3:
            	//Llamado a la tercera opcion del menu de ordenamiento 
				opcionTresOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;
            case 4:
				//Llamado a la cuarta opcion del menu de ordenamiento 
				opcionCuatroOrdenamiento();   
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false                    
                break;                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;     			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaraci�n de la funci�n de men� de seleccion de una persona pra realizar la busqueda de un salario
void menuSeleccionPersona(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� de selecci�n de la persona
        cout << "\n\n Men� secundario para seleccionar la b�squeda del salario de una persona" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. B�squeda salario Claudia" << endl;
        cout << "2. Busqueda salario Juan" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:
            	//Llamado a la primera opcion del menu de selecci�n de la persona
				opcionUnoPersona();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de selecci�n de la persona
            	opcionDosPersona();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;       			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Seccion de opciones del men� principal del programa
//Funci�n para la primera opci�n del men� principal
void opcionUnoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1" <<endl;
	cout<<"Salario de Claudia"<<endl;
	//llamada a la funci�n para ingresar los sueldos de Claudia
	ingresarSueldo(sueldoClaudia, claudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"Salario de Juan"<<endl;
	//llamada a la funci�n para ingresar los sueldos de Juan
	ingresarSueldo(sueldoJuan, juan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	banderaSalario = true; //Variable que indica que ya se ha llenado los arreglos de los salarios
	cout<< "Se han registrado los salarios correctamente" << endl <<endl; // Mensaje al usuario indicando que se han agregado los salarios
	system("pause");
}

//Funci�n para la segunda opci�n del men� principal
void opcionDosPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2" <<endl;
	if(banderaSalario){
		cout<<"Salario de Claudia"<<endl;
		impresionArreglo(sueldoClaudia);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		cout<<"Salario de Juan"<<endl;
		impresionArreglo(sueldoJuan);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

//Funci�n para la tercera opci�n del men� principal
void opcionTresPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3" <<endl;
	if(banderaSalario){
		cout<<"Se dirigira a un men� secundario" << endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		system("pause");
		menuOrdenamiento();
		banderaOrdenamiento = true;
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

//Funci�n para la quinta opci�n del men� principal
void opcionCincoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 5" <<endl;
	if(banderaSalario){
		if(banderaOrdenamiento){
			cout<<"Se dirigira a un men� secundario" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
			system("pause");
			menuSeleccionPersona();
		}else{
			cout<<"No se ha generado el ordenamiento de los vectores, selecciona la opci�n 3" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		}
		
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}

void opcionUnoPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1, b�squeda salario de Claudia" <<endl;
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
	cout << "Elegiste la opci�n 2, b�squeda salario de Juan" <<endl;
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
	cout << "Elegiste la opci�n 1, ordenamiento por el m�todo de burbuja" <<endl;
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
	cout<< "Se han ordenado los vectores por el m�todo burbuja" <<endl;
}

void opcionDosOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2, ordenamiento por el m�todo de Insersi�n" <<endl;
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
	cout<< "Se han ordenado los vectores por el m�todo de Insersi�n" <<endl;
}

void opcionTresOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3, ordenamiento por el m�todo de Selecci�n" <<endl;
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
	cout<< "Se han ordenado los vectores por el m�todo de Selecci�n" <<endl;
}

void opcionCuatroOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 4, ordenamiento por el m�todo de QuickSort" <<endl;
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
	cout<< "Se han ordenado los vectores por el m�todo de QuickSort" <<endl;
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
//Impresi�n del arreglo en general
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

//Ordenamiento por Selecci�n
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


