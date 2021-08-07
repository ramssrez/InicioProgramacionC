#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>

using namespace std;
int cola[9], final = -1;

bool colaVacia(){
	if(final == -1){
		return true;
	}else{
		return false;
	}	
}

bool  colaLlena(){
	if(final >= 9){
		return true;
	}else{
		return false;
	}	
}

void validacionVacia(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1" <<endl;
	if(colaVacia()){
		cout<<"La Cola esta vacía" <<endl;
	}else{
		cout<<"La Cola no esta vacía, hay " <<(final+1) <<" elemento(s)" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");	
}

void validacionLlena(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2" <<endl;
	if(colaLlena()){
		cout<<"La Cola esta Llena"<<endl;
	}else{
		cout<<"La Cola no esta llena, hay " <<(10-(final+1)) <<" espacio(s) disponible(s)" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");				
}

void mostrarCola(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 5" <<endl;
	if(!colaVacia()){
		cout <<" La Cola es la siguiente: " <<endl;
		cout << "Fin Cola [ ";
		for(int i =0; i < (final+1); i++){
			cout <<cola[(final-1)-i+1] << " ";
		}
		cout << "] Inicio Cola" <<endl;
	}else{
		cout<<"La Cola esta vacía, no se pueden mostrar los datos"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");
}

void insertarCola(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3" <<endl;
	if(!colaLlena()){
		cout <<"Ingresa un número para la Cola: ";
		int dato;
		cin>> dato;
		cola[final+1]=dato;
		final = final + 1;
		cout << "Se ha ingresado " <<dato <<" a la Cola" <<endl;
	}else{
		cout<<"La Cola esta llena, no se puede ingresar datos"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void eliminarCola(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4" <<endl;
	if(!colaVacia()){
		int eliminado = cola[0];
				cout<<"Se ha eliminado el elemento " <<eliminado <<" de la Cola" <<endl;
		
		for(int i = 0; i < (final); i++){
        cola[i] = cola[i+1];
    	}
    	final = final -1;
	}else{
		cout<<"La Cola esta vacía, no se puede eliminar elementos" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");
}

void colaAleatorio(){
	int num; 
	srand(time(NULL));
    for(int i = 0; i < 10; i++){
        num = 1 + rand() % (51 - 1);
        cola[i] = num;
    }
    final=9;
}

int main(){
    int opcion;
    bool repetir = true;
    
    
    do {
    	setlocale(LC_ALL, "");

        cout << "\n\nMenú de Opciones para el ejercicio sobre las Colas en un programa en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Verificar si la Cola esta vacía" << endl;
        cout << "2. Verificar si la Cola esta llena" << endl;
        cout << "3. Insertar un elemento en la Cola" << endl;
        cout << "4. Quitar un elemento de la Cola" << endl;
        cout << "5. Mostrar los elementos de la Cola" << endl;
        cout << "6. Medir el tamaño de la Cola" <<endl;
        cout << "7. Generar un Cola con números aleatorios" <<endl;
        cout << "8. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:                
                validacionVacia();
                break;
                
            case 2:
            	validacionLlena();
                break;
                
            case 3:
            	insertarCola();
                break;
                
            case 4:                            
                eliminarCola();                               
                break;
            
            case 5:
                mostrarCola();
            	break;
            	
            case 6:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				cout<< "La Cola solo se pueden ingresar 10 elementos, en este momento el tamaño de la Cola es: " <<(final + 1) <<endl;
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	break;
            	
            case 7:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Se ha creado una Cola con números aleatorios entre el 1 al 50, selecciona la opción 5 para observar la Cola." <<endl;
            	colaAleatorio();
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

