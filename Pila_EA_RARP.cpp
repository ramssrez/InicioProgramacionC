#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int opcion;
    bool repetir = true;
    
    do {
        //system("cls");
        
        // Texto del men� que se ver� cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Verificar si la Pila est� vac�a" << endl;
        cout << "2. Verificar si la Pila esta llena" << endl;
        cout << "3. Insertar un elemento en la Pila" << endl;
        cout << "4. Quitar un elemento de la Pila" << endl;
        cout << "5. Mostrar los elementos de la Pila" << endl;
        cout << "6. Medir el tama�o de la Pila" <<endl;
        cout << "7. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opci�n 1                
                cout << "Elegiste la opci�n 1";
                //system("pause>nul"); // Pausa
                break;
                
            case 2:
                // Lista de instrucciones de la opci�n 2                
                cout << "Elegiste la opci�n 2";
                //system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opci�n 3                
                cout << "Elegiste la opci�n 3";
                //system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opci�n 4                
                cout << "Elegiste la opci�n 4";
                //system("pause>nul"); // Pausa                
                break;
            
            case 5:
                cout << "Elegiste la opci�n 5";
            	break;
            	
            case 6:
				cout << "Elegiste la opci�n 6";
            	break;
            	
            case 7:
            	cout << "Gracias por usar este programa.";
            	repetir = false;
            	break;
            	
            default:
            	cout <<"Esta no es una opci�n del men�";
            	break;
            			
        }        
    } while (repetir);
	 
    return 0;
}
