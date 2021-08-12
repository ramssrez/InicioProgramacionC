#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int maximo = 3, mitad;
int sueldoClaudia[3], sueldoJuan[3];
bool banderaSalario = false, banderaBusqueda = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};


void ingresarSueldoClaudia();
void ingresarSueldoJuan();
void impresionArregloClaudia();
void impresionArregloJuan();
void ingresarSueldo(int arreglo[], string nombre);
void impresionArreglo(int arreglo[]);
void ordenamientoBurbuja(int arreglo[]);
void ordenamientoQuicksort(int A[], int izq, int der);
void ordenamientoInsercion(int arreglo[]);
void ordenamientoSeleccion(int arreglo[]);
void menuOrdenamiento();
void menuPricipal();
void opcionUnoPrincipal();
void opcionDosPrincipal();
void opcionTresPrincipal();
void opcionUnoOrdenamiento();
void opcionDosOrdenamiento();
void opcionTresOrdenamiento();
void opcionCuatroOrdenamiento();
void busquedaBinaria(int dato, int arreglo[]);
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "");
	menuPricipal();
    return 0;
}

void menuPricipal(){
	int opcion;
    bool repetir = true;
    
    do {	
    	system("cls");
        cout << "\n\nMenú principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Ingresar los salarios de Claudia y Juan" << endl;
        cout << "2. Impresión de los salarios de Claudia y Juan" << endl;
        cout << "3. Ordenar vectores con métodos de ordenación" << endl;
        cout << "4. Eliminar sueldos repetidos" << endl;
        cout << "5. Busqueda de un sueldo" << endl;
        cout << "5. Operaciones Complementarias" << endl;
        cout << "5. Salir" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:               
                opcionUnoPrincipal();
                break;                
            case 2:
            	opcionDosPrincipal();
                break;                
            case 3:
            	opcionTresPrincipal();
                break;
            case 4:    
             	busquedaBinaria(1250, sueldoClaudia);
				//opcionTresPrincipal(); 
				if(banderaBusqueda){
					cout<< "Se ha encontrado " << sueldoClaudia[mitad] << " en la posicion " << mitad << endl;
				}else{
					cout<< "No se ha encontrado un valor" << endl;
				}   
				system("pause");                 
                break; 
            case 5:                            
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
               	repetir = false;                           
                break;                        	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");	
            	break;
            			
        }        
    } while (repetir);
}

void menuOrdenamiento(){
	int opcion;
    bool repetir = true;
    do {
    	system("cls");
        cout << "\n\n Menú secundario para ordenar los arreglos por medio de los siguientes métodos" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Método Burbuja" << endl;
        cout << "2. Método por Inserción" << endl;
        cout << "3. Método por Selección" << endl;
        cout << "4. Método QuickSoft" << endl;
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:     
				opcionUnoOrdenamiento();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;
                break;                
            case 2:
            	opcionDosOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;
                break;                
            case 3:
            	opcionTresOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;
                break;
            case 4:
				opcionCuatroOrdenamiento();   
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;                     
                break;                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");	
            	break;
            			
        }        
    } while (repetir);
}

//Seccion de opciones del menú principal del programa
void opcionUnoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1" <<endl;
	cout<<"Salario de Claudia"<<endl;
	ingresarSueldo(sueldoClaudia, claudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"Salario de Juan"<<endl;
	ingresarSueldo(sueldoJuan, juan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	banderaSalario = true;
	cout<< "Se han registrado los salarios correctamente" << endl <<endl;
	system("pause");
}

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

void opcionTresPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3" <<endl;
	if(banderaSalario){
		cout<<"Se dirigira a un menú secundario" << endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		system("pause");
		menuOrdenamiento();
		
	}else{
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");
}
void opcionUnoOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1, ordenamiento por el método de burbuja" <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoBurbuja(sueldoClaudia);
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoBurbuja(sueldoJuan);
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método burbuja" <<endl;
}

void opcionDosOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2, ordenamiento por el método de Insersión" <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoInsercion(sueldoClaudia);
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoInsercion(sueldoJuan);
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Insersión" <<endl;
}

void opcionTresOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3, ordenamiento por el método de Selección" <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoSeleccion(sueldoClaudia);
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoSeleccion(sueldoJuan);
	impresionArreglo(sueldoJuan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Selección" <<endl;
}

void opcionCuatroOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4, ordenamiento por el método de QuickSort" <<endl;
	impresionArreglo(sueldoClaudia);
	ordenamientoQuicksort(sueldoClaudia,0,(maximo-1));
	impresionArreglo(sueldoClaudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	impresionArreglo(sueldoJuan);
	ordenamientoQuicksort(sueldoJuan,0,(maximo-1));
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
void busquedaBinaria(int dato, int arreglo[]){
	int inferior = 0;
	int superior = maximo;
	int iteracion = 1;
	while((inferior <= superior)&&(iteracion<=20)){
		mitad = (inferior+superior)/2;
		iteracion = iteracion + 1;
		if(arreglo[mitad] == dato){
			banderaBusqueda = true;
			//banderaIteracion = true;
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


