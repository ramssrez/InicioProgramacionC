#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
//Declaraci�n de varaibles globales 
int maximo = 5, mitad;
int sueldoClaudia[5], sueldoJuan[5];
bool banderaSalario = false, banderaBusquedaClaudia = false, banderaBusquedaJuan = false, banderaOrdenamiento = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};

//Declaraci�n de las funciones que se van a utilizar en este programa
//Funciones que crea el arreglo
void ingresarSueldo(int arreglo[], string nombre);
//Funci�n que imprime el arreglo creado
void impresionArreglo(int arreglo[]);
//M�todos de ordenamiento 
void ordenamientoBurbuja(int arreglo[]);
void ordenamientoQuicksort(int A[], int izq, int der);
void ordenamientoInsercion(int arreglo[]);
void ordenamientoSeleccion(int arreglo[]);
//Declaraci�n de las funciones donde se imprimen los men�s que se utilizan en el programa
void menuOrdenamiento();
void menuPricipal();
void menuSeleccionPersona();
//Declaraci�n las opciones del menu principal
void opcionUnoPrincipal();
void opcionDosPrincipal();
void opcionTresPrincipal();
void opcioncuatroPrincipal();
void opcionCincoPrincipal();
//Declaraci�n de las opciones del men� secundario de ordenamiento
void opcionUnoOrdenamiento();
void opcionDosOrdenamiento();
void opcionTresOrdenamiento();
void opcionCuatroOrdenamiento();

void opcionUnoPersona();
void opcionDosPersona();

//Declaraci�n de la funci�n que realiza la busqueda por medio de m�todo de busqueda binaria.
void busquedaBinaria(int dato, int arreglo[], string nombre);

void eliminarDuplicado(int arreglo[]);
//Declaraci�n de la funci�n principal
int main(){
	//Funci�n que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	//Llamado al men� principal del programa
	menuPricipal();
	//Retorno cero para que se de por terminado el programa
    return 0;
}

//Declaraci�n de la funci�n de men� principal con los diferentes opciones
void menuPricipal(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    
    //Inicio del ciclo do while
    do {	
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� principal
        cout << "\n\nMen� principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. Ingresar los salarios de Claudia y Juan" << endl;
        cout << "2. Impresi�n de los salarios de Claudia y Juan" << endl;
        cout << "3. Ordenar salarios con m�todos de ordenaci�n" << endl;
        cout << "4. Eliminar sueldos repetidos" << endl;
        cout << "5. Busqueda de un sueldo" << endl;
        cout << "6. Operaciones Complementarias" << endl;
        cout << "7. Salir" << endl;
		cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuaio
        switch (opcion) {
            case 1:      
				//Llamado a la primera opcion del menu principal         
                opcionUnoPrincipal();
                //Break que permite termilar la selecci�n de los casos
                break;                
            case 2:
            	//Llamado a la segunda opci�n de men� principal
            	opcionDosPrincipal();
                break;                
            case 3:
            	//Llamada a la funi�n de la tercera opci�n del men� principal
            	opcionTresPrincipal();
                break;
            case 4:  
         		opcioncuatroPrincipal();
                break; 
            case 5: 
				//Llamado a la funci�n de la quinta posici�n del men� principal                           
				opcionCincoPrincipal();                           
                break;
			case 6:                            
                           
                break;
			case 7:  //Opci�n que da por terminado el ciclo y se da por concluido el usu del men�                          
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl; //Mensaje en pantalla para mencionar al usuario que se ha terminado el programa
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;   //variable que permite la salida del ciclo asignandole el valor de false                        
                break;                        	
            default://Opci�n para el caso en donde no se ha agregado las opciones del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje en pantalla, mencionando al usuairo que no ha agregado una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause"); //Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;            			
        }        
    } while (repetir); //Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaraci�n de la funci�n de men� que muestra el ordenamiento de los elementos de un vector
void menuOrdenamiento(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� de ordenamiento
        cout << "\n\n Men� secundario para ordenar los arreglos por medio de los siguientes m�todos" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. M�todo Burbuja" << endl;
        cout << "2. M�todo por Inserci�n" << endl;
        cout << "3. M�todo por Selecci�n" << endl;
        cout << "4. M�todo QuickSoft" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:    
				//Llamado a la primera opcion del menu de ordenamiento 
				opcionUnoOrdenamiento();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl; //Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false 
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de ordenamiento 
				opcionDosOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 3:
            	//Llamado a la tercera opcion del menu de ordenamiento 
				opcionTresOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;
            case 4:
				//Llamado a la cuarta opcion del menu de ordenamiento 
				opcionCuatroOrdenamiento();   
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false                    
                break;                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;     			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaraci�n de la funci�n de men� de seleccion de una persona pra realizar la busqueda de un salario
void menuSeleccionPersona(){
	//Declaraci�n de variable opcion que se necesita para poder realizar el ingreseo de una opci�n
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecuci�n del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Funci�n que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresi�n de los diferentes opciones que se tiene en el men� de selecci�n de la persona
        cout << "\n\n Men� secundario para seleccionar la b�squeda del salario de una persona" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuaci�n " <<endl;
        cout << "1. B�squeda salario Claudia" << endl;
        cout << "2. Busqueda salario Juan" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:
            	//Llamado a la primera opcion del menu de selecci�n de la persona
				opcionUnoPersona();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de selecci�n de la persona
            	opcionDosPersona();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al men� principal." <<endl;//Mensaje al usuario para regresar al men� principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opci�n del men�" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opci�n del men�
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;       			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Seccion de opciones del men� principal del programa
//Funci�n para la primera opci�n del men� principal
void opcionUnoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1" <<endl;
	cout<<"Salario de Claudia"<<endl;
	//llamada a la funci�n para ingresar los sueldos de Claudia
	ingresarSueldo(sueldoClaudia, claudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"Salario de Juan"<<endl;
	//llamada a la funci�n para ingresar los sueldos de Juan
	ingresarSueldo(sueldoJuan, juan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	banderaSalario = true; //Variable que indica que ya se ha llenado los arreglos de los salarios
	cout<< "Se han registrado los salarios correctamente" << endl <<endl; // Mensaje al usuario indicando que se han agregado los salarios
	system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Funci�n para la segunda opci�n del men� principal
void opcionDosPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2" <<endl;
	//Validaci�n para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		cout<<"Salario de Claudia"<<endl;
		//Llamado a la funci�n que permite la impresi�n de sueldo de Claudia
		impresionArreglo(sueldoClaudia);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		cout<<"Salario de Juan"<<endl;
		//Llamado a la funci�n que permite la impresi�n de sueldo de Juan
		impresionArreglo(sueldoJuan);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else{ // En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Funci�n para la tercera opci�n del men� principal
void opcionTresPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3" <<endl;
	//Validaci�n para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		cout<<"Se dirigira a un men� secundario" << endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
		//Llamado al menpu secundario, donde se muestran los m�todos de ordenamiento
		menuOrdenamiento();
		//Bandera que indica que ya se han ordenado los sueldos de Claudia y juan
		banderaOrdenamiento = true;
	}else{// En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Funci�n para la cuarta opci�n del men� principal
void opcioncuatroPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 4" <<endl;
	//Validaci�n para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		//cout<<"Se dirigira a un men� secundario" << endl;
		//cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		//system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
		//Llamado al menpu secundario, donde se muestran los m�todos de ordenamiento
		//menuOrdenamiento();
		//Bandera que indica que ya se han ordenado los sueldos de Claudia y juan
		//banderaOrdenamiento = true;
		impresionArreglo(sueldoClaudia); 
		eliminarDuplicado(sueldoClaudia);
		impresionArreglo(sueldoClaudia); 
		maximo = 5;   
		impresionArreglo(sueldoJuan); 
		eliminarDuplicado(sueldoJuan);
		impresionArreglo(sueldoJuan);
		maximo = 5;
	}else{// En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Funci�n para la quinta opci�n del men� principal
void opcionCincoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 5" <<endl;
	//Validaci�n para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		//Validaci�n para determinar si el usuario ya ha ordenado los sueldos de Claudia y Juan
		if(banderaOrdenamiento){
			cout<<"Se dirigira a un men� secundario" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
			system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
			//Llamado al men� secundario para poder realizar la busqueda del sueldo de alguna de las personas
			menuSeleccionPersona();
		}else{// En caso de que no hayan ordenado a los arreglos se le notifica al usuario
			cout<<"No se ha generado el ordenamiento de los vectores, selecciona la opci�n 3" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		}
		
	}else{// En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opci�n 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Funci�n de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Funci�n para la primera opcion del men� de selecci�n de una persona
void opcionUnoPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1, b�squeda salario de Claudia" <<endl;
	int dato;//Declaraci�n de variable local para ingresar el sueldo a buscar
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;//Lectura del sueldo para realizar la busqueda
	busquedaBinaria(dato, sueldoClaudia, claudia); // LLamado a la funci�n para realizar la busqueda de sueldo
	//Validaci�n para el caso de que se haya encontrado un sueldo
	if(banderaBusquedaClaudia){
		//Mensaje de confirmaci�n para el caso de que se haya encontrado un sueldo
		cout<< "Se ha encontrado " << sueldoClaudia[mitad] << " en la posicion " << mitad << endl;
		//Cambio de estado de bandera para que se vuelva a realizar la busqueda
		banderaBusquedaClaudia = false;
	}else{
		//Mensaje al usuario en caso de que no se haya encotrado un valor de un sueldo
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

//Funci�n para la segunda opcion del men� de selecci�n de una persona
void opcionDosPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2, b�squeda salario de Juan" <<endl;
	int dato; //Declaraci�n de variable local para ingresar el sueldo a buscar
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;//Lectura del sueldo para realizar la busqueda
	busquedaBinaria(dato, sueldoJuan, juan);// LLamado a la funci�n para realizar la busqueda de sueldo
	//Validaci�n para el caso de que se haya encontrado un sueldo
	if(banderaBusquedaJuan){
		//Mensaje de confirmaci�n para el caso de que se haya encontrado un sueldo
		cout<< "Se ha encontrado " << sueldoJuan[mitad] << " en la posicion " << mitad << endl;
		//Cambio de estado de bandera para que se vuelva a realizar la busqueda
		banderaBusquedaJuan = false;
	}else{
		//Mensaje al usuario en caso de que no se haya encotrado un valor de un sueldo
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

//Funci�n para la primera opcion del men� de ordenamiento
void opcionUnoOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 1, ordenamiento por el m�todo de burbuja" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia); //LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoBurbuja(sueldoClaudia);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoBurbuja(sueldoJuan);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el m�todo burbuja" <<endl;
}

//Funci�n para la segunda opcion del men� de ordenamiento
void opcionDosOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 2, ordenamiento por el m�todo de Insersi�n" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoInsercion(sueldoClaudia);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoInsercion(sueldoJuan);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el m�todo de Insersi�n" <<endl;
}

//Funci�n para la tercera opcion del men� de ordenamiento
void opcionTresOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 3, ordenamiento por el m�todo de Selecci�n" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoSeleccion(sueldoClaudia);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoSeleccion(sueldoJuan);//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el m�todo de Selecci�n" <<endl;
}

//Funci�n para la cuarta opcion del men� de ordenamiento
void opcionCuatroOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opci�n 4, ordenamiento por el m�todo de QuickSort" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoQuicksort(sueldoClaudia,0,(maximo-1));//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos antes de ordenar
	ordenamientoQuicksort(sueldoJuan,0,(maximo-1));//LLamado a la funci�n para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la funci�n para impresi�n del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el m�todo de QuickSort" <<endl;
}

//Funci�n que ingreso de sueldo en general, se solicita la entrada del vector y el nombre de la persona
void ingresarSueldo(int arreglo[], string nombre){			
	//Variable de apoyo para ingresar los valores por medio de teclado
	int num;
	//Ciclo for en donde se realiza el ingreso de los datos en funci�n del tama�o del arreglo
	for(int i = 0; i < maximo; i++)
    {
    	//Inreso de los datos por medio del teclado
    	cout << "Ingresa el sueldo " << (i+1) << " de " << nombre <<": ";
    	//Lectura de los valores que ingresan por medio del teclado
    	cin >> num;
    	//Asignaci�n del valor ingresado en el teclado a la posici�n del arreglo
        arreglo[i] = num;
    }
}

//Funci�n para la impresi�n del arreglo en general
void impresionArreglo(int arreglo[]){
	cout << "[ ";
	//Ciclo for en donde se realiza la impresi�n de los datos en funci�n del tama�o del arreglo
	for(int i = 0; i < maximo; i++)
    {
    	//Impresion en pantalla de los elementos del arreglos
    	cout << " " << arreglo[i] << " ";
    }
    cout << "] " <<endl;
}

//Funci�n para el ordenamiento burbuja, se necesita el ingreso del arreglo a ordenar
void ordenamientoBurbuja(int arreglo[]){
	//Declaraci�n de la variable auxiliar
	int aux;
	//Ciclo for que recorre las posiciones del arreglo
	for(int i =0 ; i<maximo; i++){
		//Ciclo for en donde se va a realizar la validaci�n del ordenamiento
		for(int j = 0; j<(maximo-1); j++){
			//Estructura if para el caso de que se haya encontrado un valor mayor a la posici�n que se esta evaluando
			if(arreglo[j]>arreglo[j+1]){
				//Se hace uso del auxiliar para asignar la posici�n mayor
				aux = arreglo[j];
				//Se asigna la posicion actual el valor de la posici�n (actual+1)
				arreglo[j] = arreglo[j+1];
				//Se asigna la posici�n (actual +1 ) en valor del auxiliar
				arreglo[j+1] = aux;
			}
		}
	}
}

//Fucni�n par el ordenamiento por insersion, se necesita el ingreso del arreglo a ordenar
void ordenamientoInsercion(int arreglo[]){
	//Declaraci�n de variables de apoyo
	int pos, aux;
	//Ciclo for que realiza el recorrido de las posiciones del arreglo
	for(int i = 0; i<maximo; i++){
		//Asignaci�n de la variable de apoyo el valor del recorrido i
		pos = i;
		//Asignaci�n de la variable de apoyo el valor que se encuentre en el arreglo
		aux = arreglo[i];
		//Ciclo while donde se necesita cumplir la sentencia para poder realizar el cambio, en donde la posicion tiene que ser mayor a cero
		//y el valor del arreglo en posi�n -1 tiene que ser mayor al auxiliar
		while((pos > 0) && (arreglo[pos - 1] > aux)){
			//En caso de se cumpla se insertara el valor mayor en la posici�n actual 
			arreglo[pos] = arreglo [pos - 1];
			//Se reduce el valor de la posici�n
			pos--;
		}
		//Asignai�n del arreglo en la posici�n el valor del auxiliar
		arreglo[pos] = aux;
	}
}

//Funci�n ordenamiento por Selecci�n, se neesita el ingreso del arreglo a ordenar
void ordenamientoSeleccion(int arreglo[]){
	//Declaraci�n de variables de apoyo
	int min, aux;
	//Ciclo for que realiza el recorrido de las posiciones del arreglo
	for(int i = 0 ; i < maximo; i++){
		//Asignaci�n de la variable de apoyo el valor de i
		min = i;
		//Recorrido del arreglo desde una posicion i+1
		for (int j = i+1;j<maximo;j++){
			//Verificacion de que el valor del arreglo en j sea menor el valor del arreglo en min 
			if(arreglo[j]<arreglo[min]){
				//Si se cumple se le asigna el valor de j a min
				min = j;
			}
		}
		//Asignaci�n del valor del arreglo en i al auxiliar
		aux = arreglo[i];
		//Asignaci�n del valor del arreglo en min a la posicion del arreglo en i
		arreglo[i] = arreglo[min];
		//Asiganci�n del valor del arreglo en min el valor del auxiliar
		arreglo[min] = aux;
	}
}

//Func�n para el ordenamiento Quick Sort
void ordenamientoQuicksort(int arreglo[], int izq, int der){
	//Declaraci�n de variable auxiliares
	int i, j, x, aux;
	//Asignaci�n de los limites del arreglo
	i=izq;
	j = der;
	//Divici�n a la mitad del arreglo
	x = arreglo[(izq+der)/2];
	//Declaraci�n del ciclo do/while
	do{ 
		//While que recorre las posiciones del lado izquierdo del arreglo
        while( (arreglo[i] < x) && (j <= der) )
        { 
        	//Incremento de la posici�n del lado izquierdo
            i++;
        } 
        
		//while que recorre las posiciones del lado derecho del arreglo 
        while( (x < arreglo[j]) && (j > izq) )
        { 
        	//Decremento del lado derecho
            j--;
        } 
 		//Verificaci�n del las varibles auxiliares
        if( i <= j )
        { 
        	//Asignacion del auxiliar el valor del arreglo en i
            aux = arreglo[i]; 
            //Asignaci�n la posicion del arrglo en i el valor del arreglo en j
			arreglo[i] = arreglo[j]; 
			//asginaci�n el valor del arreglo en j el valor del auxiliar
			arreglo[j] = aux; 
			//Incremento de lado izquierdo del arreglo
            i++;  
            //Decremento del lado derecho del arreglo
			j--; 
        }
         
    }while( i <= j ); //Sentencia para detener el cicli do/while 
 
 	//Sentencia que verifica los limite con el auxiliar
    if( izq < j ) {
    	//Vuelta al llamado de la funci�n de ordenamiento
    	ordenamientoQuicksort( arreglo, izq, j ); 
	}
	      
    //Sentencia que verifica los limites del auxiliar    
    if( i < der ) {
    	//Vuelta al llamado de la funci�n de ordenamiento
    	ordenamientoQuicksort( arreglo, i, der );
	}       
}

//Funci�n para la b�usqueda binaria
void busquedaBinaria(int dato, int arreglo[], string nombre){
	//Declaraci�n de variables de apoyo
	int inferior = 0;
	int superior = maximo;
	int iteracion = 1;
	//ciclo while que realiza el recorrido del arreglo
	while((inferior <= superior)&&(iteracion<=20)){
		//Divici�n de la posici�n para realizar la busqueda
		mitad = (inferior+superior)/2;
		//Variable que realiza el termino de la iteraci�n en caso de no encontrar un valor
		iteracion = iteracion + 1;
		//Validacion para el caso en donde el dato a buscar se encuentre en la mitad calculada
		if(arreglo[mitad] == dato){
			//Cambio de bandera para la busqueda exitosa en el vector de Claudia
			if(nombre == "Claudia"){
				banderaBusquedaClaudia = true;
			}
			//Cambio de bander para la busqueda eitosa en el vector de Juan
			if(nombre == "Juan"){
				banderaBusquedaJuan = true;
			}
			break; //Se concluye el ciclo de busqueda
		}
		//Validaci�n del valor de la posici�n a la mitad del arreglo sea mayor
		if(arreglo[mitad] > dato){
			//Asignaci�n de superior la mitad
			superior = mitad;
			//Se vulve a realizar el calculo de la media de la busqueda
			mitad = (inferior+superior)/2;
		}
		//Validaci�n del valor de la posiscio a la mitd del arreglo sea menor
		if(arreglo[mitad] < dato){
			//Asignaci�n el valor de inferior el valor de la mitad
			inferior = mitad;
			//Se vuleve a realizar el calculo de mitas para la busqueda
			mitad = (inferior+superior)/2;
		}
	}
}

//Funci�n para la eliminaci�n de sueldos duplicados
void eliminarDuplicado(int arreglo[]){
	for(int i=0; i<(maximo-1); i++)
        for(int j=i+1; j<maximo; j++) {
            //Sentencia par el caso de que se encuentre un duplicado
            if(arreglo[i] == arreglo[j]) {

                //Se intercambia para quede hasta el final
                for(int k=j;k<(maximo-1);k++)
					swap(arreglo[k], arreglo[k+1]); //Funci�n que permite el intercambio de valores de un arreglo
				
                   

                ///Disminuimos la longitud en 1, lo que significa
                ///que se elimina un elemento
                //Reducci�n del maximo menos 1
                maximo--;

                ///Disminuimos a j para que se quede en el mismo
                ///lugar (vease que el elemento que estaba en esa
                ///posicion fue eliminado, si no disminuimos j en 1
                ///nos saltamos un valor por analizar).
                j--;
            }
      }
      //maximo = 5;
}


