#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    
    do {
        //system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Verificar si la Pila está vacía" << endl;
        cout << "2. Verificar si la Pila esta llena" << endl;
        cout << "3. Insertar un elemento en la Pila" << endl;
        cout << "4. Quitar un elemento de la Pila" << endl;
        cout << "5. Mostrar los elementos de la Pila" << endl;
        cout << "6. Medir el tamaño de la Pila" <<endl;
        cout << "7. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1                
                cout << "Elegiste la opción 1";
                //system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                cout << "Elegiste la opción 2";
                //system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opción 3                
                cout << "Elegiste la opción 3";
                //system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opción 4                
                cout << "Elegiste la opción 4";
                //system("pause>nul"); // Pausa                
                break;
            
            case 5:
                cout << "Elegiste la opción 5";
            	break;
            	
            case 6:
				cout << "Elegiste la opción 6";
            	break;
            	
            case 7:
            	cout << "Gracias por usar este programa.";
            	repetir = false;
            	break;
            	
            default:
            	cout <<"Esta no es una opción del menú";
            	break;
            			
        }        
    } while (repetir);
	 
    return 0;
}
