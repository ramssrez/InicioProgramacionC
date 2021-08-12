#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int sueldoClaudia[3], sueldoJuan[3];
//bool bandera = false, banderaId = false, banderaAlea = false, banderaIteracion = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};
//Esto es para eliminar
void ingresarSueldoClaudia(){
	int num;
	for(int i = 0; i <3; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de Claudia: ";
    	cin >> num;
        sueldoClaudia[i] = num;
    }
}
//Esto es para eliminar
void ingresarSueldoJuan(){
	int num;
	for(int i = 0; i < 3; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de Juan: ";
    	cin >> num;
        sueldoJuan[i] = num;
    }
}

void impresionArregloClaudia(){
	cout << "[ ";
	for(int i = 0; i < 3; i++)
    {
    	cout << " " << sueldoClaudia[i] << " ";
    }
    cout << "] " <<endl;
}

void impresionArregloJuan(){
	cout << "[ ";
	for(int i = 0; i < 3; i++)
    {
    	cout << " " << sueldoJuan[i] << " ";
    }
    cout << "] " <<endl;
}
//Ingreso de sueldo en general
void ingresarSueldo(int arreglo[], string nombre){
	int num;
	for(int i = 0; i < 3; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de " << nombre <<": ";
    	cin >> num;
        arreglo[i] = num;
    }
}
//Impresión del arreglo en general
void impresionArreglo(int arreglo[]){
	cout << "[ ";
	for(int i = 0; i < 5; i++)
    {
    	cout << " " << arreglo[i] << " ";
    }
    cout << "] " <<endl;
}

//utilización del ordenamiento burbuja
void ordenamientoBurbuja(int arreglo[]){
	int aux;
	for(int i =0 ; i<3; i++){
		for(int j = 0; j<2; j++){
			if(arreglo[j]>arreglo[j+1]){
				aux = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
	}
}

//Ordenamiento por insersion
void ordenamientoInsecion(int arreglo[]){
	//int numeros[] = {1859,8971,1528,2659,2581};
	int pos, aux;
	for(int i = 0; i<3; i++){
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
	//int numeros[] = {1859,8971,1528,2659,2581};
	int min, aux;
	for(int i = 0 ; i < 3; i++){
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
void quicksort(int A[], int izq, int der){
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
    	quicksort( A, izq, j ); 
	}
        
    if( i < der ) {
    	quicksort( A, i, der );
	}
        
}

int main(){
	int opcion;
    bool repetir = true;
    srand(time(NULL));
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMenú de Opciones para el ejercicio de busqueda binaria en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Generación de arreglos para el cliente ID y las transacciones realizadas" << endl;
        cout << "2. Mostrar los arreglos generados" << endl;
        cout << "3. Realizar busqueda de transacciónes" << endl;
        cout << "4. Mostrar número de iteraciones realizadas" << endl;
        cout << "5. Salir" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:     
				ingresarSueldo(sueldoClaudia, claudia);  
				//ingresarSueldoJuan();          
                //opcionUno();
                break;                
            case 2:
            	//impresionArregloClaudia();
            	//ordenamientoBurbuja(sueldoClaudia);
            	
            	//ordenamientoInsecion(sueldoClaudia);
				//impresionArregloJuan();
            	//opcionDos();
            	//ordenamientoSeleccion(sueldoClaudia);
            	impresionArreglo(arreglo);
            	quicksort(arreglo, 0, 4);
            	impresionArreglo(arreglo);
                break;                
            case 3:
            	//opcionTres();
                break;
            case 4:    
				//opcionCuatro();                     
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
            	break;
            			
        }        
    } while (repetir);
    return 0;
}
