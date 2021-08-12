#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int sueldoClaudia[3], sueldoJuan[3], inferior, superior, mitad, dato, iteracion;
//bool bandera = false, banderaId = false, banderaAlea = false, banderaIteracion = false;
string juan = "Juan", claudia = "Claudia";

void ingresarSueldoClaudia(){
	int num;
	for(int i = 0; i <3; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de Claudia: ";
    	cin >> num;
        sueldoClaudia[i] = num;
    }
}

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
//Esto es general
void ingresarSueldo(int arreglo[], string nombre){
	int num;
	for(int i = 0; i < 3; i++)
    {
    	cout << "Ingresa el sueldo " << (i+1) << " de " << nombre <<": ";
    	cin >> num;
        arreglo[i] = num;
    }
}
//esto es general
void impresionArreglo(int arreglo[]){
	cout << "[ ";
	for(int i = 0; i < 3; i++)
    {
    	cout << " " << arreglo[i] << " ";
    }
    cout << "] " <<endl;
}

void ordenamientoBurbuja(int arreglo[]){
	int aux;
	for(int i =0 ; i<3; i++){
		for(int j = 0; j<2; j++){
			if(arreglo[j]>arreglo[j+1]){
				aux = arreglo[j];
				cout << aux << endl;
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = aux;
			}
		}
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
            	impresionArregloClaudia();
            	ordenamientoBurbuja(sueldoClaudia);
            	impresionArreglo(sueldoClaudia);
				//impresionArregloJuan();
            	//opcionDos();
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
