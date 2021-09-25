#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>

using namespace std;
int pila[9], tope = -1;

bool pilaVacia(){
	if(tope == -1){
		return true;
	}else{
		return false;
	}	
}

bool  pilaLlena(){
	if(tope >= 9){
		return true;
	}else{
		return false;
	}	
}

void validacionVacia(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1" <<endl;
	if(pilaVacia()){
		cout<<"La Pila esta vac�a" <<endl;
	}else{
		cout<<"La Pila no esta vac�a, hay " <<(tope+1) <<" elemento(s)" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");	
}

void validacionLlena(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2" <<endl;
	if(pilaLlena()){
		cout<<"La Pila esta Llena"<<endl;
	}else{
		cout<<"La Pila no esta llena, hay " <<(10-(tope+1)) <<" espacio(s) disponible(s)" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");				
}

void insertarPila(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3" <<endl;
	if(!pilaLlena()){
		cout <<"Ingresa un n�mero para la Pila: ";
		int dato;
		cin>> dato;
		pila[tope+1]=dato;
		tope = tope + 1;
		cout << "Se ha ingresado " <<dato <<" a la Pila" <<endl;
	}else{
		cout<<"La Pila esta llena, no se puede ingresar datos"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
}

void eliminarPila(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 4" <<endl;
	if(!pilaVacia()){
		int eliminado = pila[tope];
		tope = tope -1;
		cout<<"Se ha eliminado el elemento " <<eliminado <<" de la Pila" <<endl;
	}else{
		cout<<"La Pila esta vac�a, no se puede eliminar elementos" <<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");
}

void mostrarPila(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 5" <<endl;
	if(!pilaVacia()){
		cout <<" La Pila es la siguiente: " <<endl;
		cout << "Fin Pila [ ";
		for(int i =0; i < (tope+1); i++){
			cout <<pila[(tope-1)-i+1] << " ";
		}
		cout << "] Inicio Pila" <<endl;
	}else{
		cout<<"La Pila esta vac�a, no se pueden mostrar los datos"<<endl;
	}
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	system("pause");
}

void pilaAleatorio(){
	int num; 
	srand(time(NULL));
    for(int i = 0; i < 10; i++)
    {
        num = 1 + rand() % (51 - 1);
        pila[i] = num;
    }
    tope=9;
}

int main()
{
    int opcion;
    bool repetir = true;
    
    
    do {
    	setlocale(LC_ALL, "");
    	
        cout << "\n\nMen� de Opciones para el ejercicio sobre las Pilas en un programa en C++" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Verificar si la Pila esta vac�a" << endl;
        cout << "2. Verificar si la Pila esta llena" << endl;
        cout << "3. Insertar un elemento en la Pila" << endl;
        cout << "4. Quitar un elemento de la Pila" << endl;
        cout << "5. Mostrar los elementos de la Pila" << endl;
        cout << "6. Medir el tama�o de la Pila" <<endl;
        cout << "7. Generar un Pila con n�meros aleatorios" <<endl;
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
            	insertarPila();
                break;
                
            case 4:                            
                eliminarPila();                               
                break;
            
            case 5:
                mostrarPila();
            	break;
            	
            case 6:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				cout<< "La Pila solo se pueden ingresar 10 elementos, en este momento el tama�o de la Pila es: " <<(tope + 1) <<endl;
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	break;
            	
            case 7:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Se ha creado una Pila con n�meros aleatorios entre el 1 al 5, selecciona la opci�n 50 para observar la Pila." <<endl;
            	pilaAleatorio();
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


