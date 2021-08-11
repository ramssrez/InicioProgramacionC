#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int arregloID[20], arregloAleatorio[20], aleatorio=-1, valorArreglo=-1, iteraciones=0;
bool bandera = false;

void generarIdArreglo(){
	int num = 1;
	for (int i = 0 ; i<20 ;i++){
		arregloID[i] = 1000 + num;
		num = num + 1;
		cout<< arregloID[i] <<endl;
	}
}

void arregloAlea(){
	//cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	//cout << "Elegiste la opción 1" <<endl;
	int num; 
    for(int i = 0; i < 20; i++)
    {
        num = rand() % (1000 - 1);
        arregloAleatorio[i] = num;
        cout<< " " << arregloAleatorio[i] <<endl;
    }
    //valorArreglo = 9;
    //cout<< "Se ha creado un arreglo con números aleatorios del 0 al 100" <<endl;
    //cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

int main(){
	int opcion;
    bool repetir = true;
    srand(time(NULL));
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMenú de Opciones para el ejercicio de busqueda binaria en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Generación de arreglo con números aleatorios del 0 al 100" << endl;
        cout << "2. Generación de número aleatorio del 0 al 100" << endl;
        cout << "3. Mostrar arreglo y número a buscar" << endl;
        cout << "4. Salir" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                
                //arregloAleatorio();
                generarIdArreglo();
                break;
                
            case 2:
            	//numeroAleatorio();
            	arregloAlea();
                break;
                
            case 3:
            	//validacionBusqueda();
                break;
                
            case 4:                            
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
