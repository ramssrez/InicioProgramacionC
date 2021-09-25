#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>

using namespace std;
int arreglo[9], aleatorio=-1, valorArreglo=-1, iteraciones=0;
bool bandera = false;

void numeroAleatorio(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2" <<endl;
	aleatorio = 1 + rand() % (100 - 0);
	cout<< "Se ha creado un n�mero aleatorio entre el 0 al 100" <<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void busquedaSecuencial(){
	for(int i = 0; i<10; i++){
		if(arreglo[i] == aleatorio){
			iteraciones = (i+1);
			bandera = true;
			break;
			}
		}		
}	

void impresionArreglo(){
	cout << "[ ";
	for(int i = 0; i<10; i++){
		cout <<arreglo[i] << " ";
	}
	cout << "] " <<endl;	
}

void arregloAleatorio(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1" <<endl;
	int num; 
    for(int i = 0; i < 10; i++)
    {
        num = 1 + rand() % (100 - 0);
        arreglo[i] = num;
    }
    valorArreglo = 9;
    cout<< "Se ha creado un arreglo con n�meros aleatorios del 0 al 100" <<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void validacionBusqueda(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3" <<endl <<endl;
	if(valorArreglo == -1){
		cout <<"No se han generado n�meros en el arreglo, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else if(aleatorio == -1){
		cout<<"No se ha generado un n�mero aleatorio, selecciona la opci�n 2" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else{
		cout <<"El arreglo es: " <<endl;
		impresionArreglo();
		cout<< " " <<endl;
		cout << "El n�mero aleatorio es: "  <<aleatorio <<endl;
		busquedaSecuencial();
		if(bandera){
			cout << "Se ha encontrado el n�mero " <<aleatorio <<" con un n�mero de iteraciones igual: " << iteraciones <<endl;
			bandera = false; 
			iteraciones = 0;
		}else{
			cout <<"No se encuentra el n�mero " << aleatorio << " dentro del arreglo" << endl;;
		}
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	
}

int main(){
	int opcion;
    bool repetir = true;
    srand(time(NULL));
    
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMen� de Opciones para el ejercicio de busqueda l�neal en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Generaci�n de arreglo con n�meros aleatorios del 0 al 100" << endl;
        cout << "2. Generaci�n de n�mero aleatorio del 0 al 100" << endl;
        cout << "3. Mostrar arreglo y n�mero a buscar" << endl;
        cout << "4. Salir" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                
                arregloAleatorio();
                break;
                
            case 2:
            	numeroAleatorio();
                break;
                
            case 3:
            	validacionBusqueda();
                break;
                
            case 4:                            
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
               	repetir = false;                           
                break;
                        	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;	
            	break;
            			
        }        
    } while (repetir);
	return 0;
}

