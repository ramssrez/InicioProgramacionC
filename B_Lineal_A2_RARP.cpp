#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>

using namespace std;
int main(){
	int opcion;
    bool repetir = true;
    
    
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMenú de Opciones para el ejercicio sobre las Pilas en un programa en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Verificar si la Pila esta vacía" << endl;
        cout << "2. Verificar si la Pila esta llena" << endl;
        cout << "3. Insertar un elemento en la Pila" << endl;
        cout << "4. Quitar un elemento de la Pila" << endl;
        cout << "5. Mostrar los elementos de la Pila" << endl;
        cout << "6. Medir el tamaño de la Pila" <<endl;
        cout << "7. Generar un Pila con números aleatorios" <<endl;
        cout << "8. SALIR" << endl;
         cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                
                //validacionVacia();
                break;
                
            case 2:
            	//validacionLlena();
                break;
                
            case 3:
            	//insertarPila();
                break;
                
            case 4:                            
                //eliminarPila();                               
                break;
            
            case 5:
                //mostrarPila();
            	break;
            	
            case 6:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				//cout<< "La Pila solo se pueden ingresar 10 elementos, en este momento el tamaño de la Pila es: " <<(tope + 1) <<endl;
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	break;
            	
            case 7:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Se ha creado una Pila con números aleatorios entre el 1 al 5, selecciona la opción 50 para observar la Pila." <<endl;
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
            	cout <<"Esta no es una opción del menú" <<endl;
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;	
            	break;
            			
        }        
    } while (repetir);
	return 0;
}

