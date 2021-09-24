#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int arregloID[20], arregloAleatorio[20], inferior, superior, mitad, dato, iteracion;
bool bandera = false, banderaId = false, banderaAlea = false, banderaIteracion = false;

void generarIdArreglo(){
	int num = 1;
	for (int i = 0 ; i<20 ;i++){
		arregloID[i] = 1000 + num;
		num = num + 1;
	}
	banderaId = true;
}

void impresionIdArreglo(){
	cout<<"Arreglo id Clientes: " << endl;
	cout << "[ ";
	for (int i = 0 ; i<20 ;i++){
		cout <<arregloID[i] << " ";
	}
	cout << "] " <<endl;
}

void arregloAlea(){
	int num; 
    for(int i = 0; i < 20; i++)
    {
        num = rand() % (1000 - 1);
        arregloAleatorio[i] = num;
    }
    banderaAlea = true;
}

void impresionarregloAlea(){
	cout<<"Arreglo transacciones: " << endl;
	cout << "[ ";
    for(int i = 0; i < 20; i++)
    {
        cout<< " " << arregloAleatorio[i] << " ";
    }
    cout << "] " <<endl;
}

void busquedaBinaria(int dato){
	inferior = 0;
	superior = 20;
	iteracion = 1;
	while((inferior <= superior)&&(iteracion<=20)){
		mitad = (inferior+superior)/2;
		iteracion = iteracion + 1;
		if(arregloID[mitad] == dato){
			bandera = true;
			banderaIteracion = true;
			break;
		}
		if(arregloID[mitad] > dato){
			superior = mitad;
			mitad = (inferior+superior)/2;
		}
		if(arregloID[mitad] < dato){
			inferior = mitad;
			mitad = (inferior+superior)/2;
		}
	}
}

void opcionUno(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1" <<endl;	
	generarIdArreglo();
	arregloAlea();
	cout<< "Se ha creado un arreglo para el Id de los clientes y un arreglo de transacciones" <<endl;
    cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void opcionDos(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2" <<endl;
	if((banderaId) && (banderaAlea)){
		cout<<"Los arreglos son los siguientes" <<endl;
		impresionIdArreglo();
		impresionarregloAlea();
	}else{
		cout<<"No se han generado los arreglos, selecciona la opción 1" <<endl;
	}	
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void opcionTres(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3" <<endl;
	if((banderaId) && (banderaAlea)){
		int dato;
		cout << "Ingresa el Id del cliente para buscar la transacción: ";
		cin >> dato;
		busquedaBinaria(dato);
		if(bandera){
			cout <<"Se ha encontrado para el ID " << dato << " la transacción "<< arregloAleatorio[mitad] << endl;
			bandera = false;
		}else{
			cout<<"La transacción no ha sido encontrada, verifica el ID del cliente" <<endl;
		}
	}else{
		cout<<"No se han generado los arreglos, selecciona la opción 1" <<endl;	
	}
	
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void opcionCuatro(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4" <<endl;
	if(banderaIteracion){
		cout<<"Las iteraciones realizadas fueron: " <<iteracion << " iteraciones" <<endl;
		banderaIteracion = false;
	}else{
		cout<<"No se tienen información de las iteraciones realizadas" << endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;

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
                opcionUno();
                break;                
            case 2:
            	opcionDos();
                break;                
            case 3:
            	opcionTres();
                break;
            case 4:    
				opcionCuatro();                     
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
