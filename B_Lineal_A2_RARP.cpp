#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>

using namespace std;
int arreglo[9], aleatorio, valorArreglo=-1;

void numeroAleatorio(){
	srand(time(NULL));
	aleatorio = 1 + rand() % (101-0);
}

void impresionArreglo(){
	if(valorArreglo == -1){
		cout<<"El arreglo esta vac�o, selecciona la opci�n 1";
	}else{
		cout << "[ ";
		for(int i = 0; i<10; i++){
			cout <<arreglo[i] << " ";
		}
		cout << "] " <<endl;
	}
}

void arregloAleatorio(){
	int num; 
	srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        num = 1 + rand() % (101 - 0);
        arreglo[i] = num;
        cout <<arreglo[i] << " ";
    }
    valorArreglo = 9;
}

int main(){
	int opcion;
    bool repetir = true;
    
    
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMen� de Opciones para el ejercicio de busqueda l�neal en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Generaci�n de arreglo con n�meros aleatorios del 0 al 100" << endl;
        cout << "2. Generaci�n de n�mero aleatorio del 0 al 100" << endl;
        cout << "3. Mostrar arreglo y n�mero a buscar" << endl;
        cout << "4. Salir" << endl;
        cout << "5. Mostrar los elementos de la Pila" << endl;
        cout << "6. Medir el tama�o de la Pila" <<endl;
        cout << "7. Generar un Pila con n�meros aleatorios" <<endl;
        cout << "8. SALIR" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                
                arregloAleatorio();
                break;
                
            case 2:
            	//validacionLlena();
            	numeroAleatorio();
            	cout<<aleatorio;
                break;
                
            case 3:
            	impresionArreglo();
                break;
                
            case 4:                            
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
               	repetir = false;                           
                break;
            
            case 5:
                //mostrarPila();
            	break;
            	
            case 6:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				//cout<< "La Pila solo se pueden ingresar 10 elementos, en este momento el tama�o de la Pila es: " <<(tope + 1) <<endl;
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	break;
            	
            case 7:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Se ha creado una Pila con n�meros aleatorios entre el 0 al 100, selecciona la opci�n 5 para observar la Pila." <<endl;
            	//pilaAleatorio();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	break;
            	
            case 8:
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

