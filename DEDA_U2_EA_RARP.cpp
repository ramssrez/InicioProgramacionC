#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
//Declaración de varaibles globales 
int maximo = 5, mitad;
int sueldoClaudia[5], sueldoJuan[5];
bool banderaSalario = false, banderaBusquedaClaudia = false, banderaBusquedaJuan = false, banderaOrdenamiento = false;
string juan = "Juan", claudia = "Claudia";
int arreglo[] = {1859,8971,1528,2659,2581};

//Declaración de las funciones que se van a utilizar en este programa
//Funciones que crea el arreglo
void ingresarSueldo(int arreglo[], string nombre);
//Función que imprime el arreglo creado
void impresionArreglo(int arreglo[]);
//Métodos de ordenamiento 
void ordenamientoBurbuja(int arreglo[]);
void ordenamientoQuicksort(int A[], int izq, int der);
void ordenamientoInsercion(int arreglo[]);
void ordenamientoSeleccion(int arreglo[]);
//Declaración de las funciones donde se imprimen los menús que se utilizan en el programa
void menuOrdenamiento();
void menuPricipal();
void menuSeleccionPersona();
//Declaración las opciones del menu principal
void opcionUnoPrincipal();
void opcionDosPrincipal();
void opcionTresPrincipal();
void opcioncuatroPrincipal();
void opcionCincoPrincipal();
//Declaración de las opciones del menú secundario de ordenamiento
void opcionUnoOrdenamiento();
void opcionDosOrdenamiento();
void opcionTresOrdenamiento();
void opcionCuatroOrdenamiento();

void opcionUnoPersona();
void opcionDosPersona();

//Declaración de la función que realiza la busqueda por medio de método de busqueda binaria.
void busquedaBinaria(int dato, int arreglo[], string nombre);

void eliminarDuplicado(int arreglo[]);
//Declaración de la función principal
int main(){
	//Función que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	//Llamado al menú principal del programa
	menuPricipal();
	//Retorno cero para que se de por terminado el programa
    return 0;
}

//Declaración de la función de menú principal con los diferentes opciones
void menuPricipal(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    
    //Inicio del ciclo do while
    do {	
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú principal
        cout << "\n\nMenú principal para seleccionar alguna de las siguiente opciones a realizar" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Ingresar los salarios de Claudia y Juan" << endl;
        cout << "2. Impresión de los salarios de Claudia y Juan" << endl;
        cout << "3. Ordenar salarios con métodos de ordenación" << endl;
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
                //Break que permite termilar la selección de los casos
                break;                
            case 2:
            	//Llamado a la segunda opción de menú principal
            	opcionDosPrincipal();
                break;                
            case 3:
            	//Llamada a la funión de la tercera opción del menú principal
            	opcionTresPrincipal();
                break;
            case 4:  
         		opcioncuatroPrincipal();
                break; 
            case 5: 
				//Llamado a la función de la quinta posición del menú principal                           
				opcionCincoPrincipal();                           
                break;
			case 6:                            
                           
                break;
			case 7:  //Opción que da por terminado el ciclo y se da por concluido el usu del menú                          
                cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Gracias por usar este programa." <<endl; //Mensaje en pantalla para mencionar al usuario que se ha terminado el programa
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;   //variable que permite la salida del ciclo asignandole el valor de false                        
                break;                        	
            default://Opción para el caso en donde no se ha agregado las opciones del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje en pantalla, mencionando al usuairo que no ha agregado una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause"); //Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;            			
        }        
    } while (repetir); //Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaración de la función de menú que muestra el ordenamiento de los elementos de un vector
void menuOrdenamiento(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú de ordenamiento
        cout << "\n\n Menú secundario para ordenar los arreglos por medio de los siguientes métodos" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Método Burbuja" << endl;
        cout << "2. Método por Inserción" << endl;
        cout << "3. Método por Selección" << endl;
        cout << "4. Método QuickSoft" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:    
				//Llamado a la primera opcion del menu de ordenamiento 
				opcionUnoOrdenamiento();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl; //Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false 
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de ordenamiento 
				opcionDosOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 3:
            	//Llamado a la tercera opcion del menu de ordenamiento 
				opcionTresOrdenamiento();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;
            case 4:
				//Llamado a la cuarta opcion del menu de ordenamiento 
				opcionCuatroOrdenamiento();   
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false; //variable que permite la salida del ciclo asignandole el valor de false                    
                break;                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;     			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Declaración de la función de menú de seleccion de una persona pra realizar la busqueda de un salario
void menuSeleccionPersona(){
	//Declaración de variable opcion que se necesita para poder realizar el ingreseo de una opción
	int opcion;
	//Dclaracion de la variable repetir para dar por terminao la ejecución del ciclo
    bool repetir = true;
    //Inicio del ciclo do while
    do {
    	//Función que limpia la pantalla de todo lo que se ha hecho anteriormente
    	system("cls");
    	//Impresión de los diferentes opciones que se tiene en el menú de selección de la persona
        cout << "\n\n Menú secundario para seleccionar la búsqueda del salario de una persona" << endl <<endl;
        cout <<"Selecciona alguna de las siguientes opciones que se muestra a continuación " <<endl;
        cout << "1. Búsqueda salario Claudia" << endl;
        cout << "2. Busqueda salario Juan" << endl;
        cout << "\nIngrese una opcion: ";
        //Ingreso de la opcion por medio del teclado que realice el usuario
		cin >> opcion;
        //Bloque switch para las diferentes opciones que ingrese el usuario        
        switch (opcion) {
            case 1:
            	//Llamado a la primera opcion del menu de selección de la persona
				opcionUnoPersona();
				cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                
            case 2:
            	//Llamado a la segunda opcion del menu de selección de la persona
            	opcionDosPersona();
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout << "Regresando al menú principal." <<endl;//Mensaje al usuario para regresar al menú principal
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				repetir = false;//variable que permite la salida del ciclo asignandole el valor de false
                break;                                         	
            default:
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
            	cout <<"Esta no es una opción del menú" <<endl;//Mensaje al usuario para indicarle que no ha escogido una opción del menú
            	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
				system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.	
            	break;       			
        }        
    } while (repetir);//Lectura de la variable repetir para validar que se continue con el ciclo do/while
}

//Seccion de opciones del menú principal del programa
//Función para la primera opción del menú principal
void opcionUnoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1" <<endl;
	cout<<"Salario de Claudia"<<endl;
	//llamada a la función para ingresar los sueldos de Claudia
	ingresarSueldo(sueldoClaudia, claudia);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<<"Salario de Juan"<<endl;
	//llamada a la función para ingresar los sueldos de Juan
	ingresarSueldo(sueldoJuan, juan);
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	banderaSalario = true; //Variable que indica que ya se ha llenado los arreglos de los salarios
	cout<< "Se han registrado los salarios correctamente" << endl <<endl; // Mensaje al usuario indicando que se han agregado los salarios
	system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Función para la segunda opción del menú principal
void opcionDosPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2" <<endl;
	//Validación para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		cout<<"Salario de Claudia"<<endl;
		//Llamado a la función que permite la impresión de sueldo de Claudia
		impresionArreglo(sueldoClaudia);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		cout<<"Salario de Juan"<<endl;
		//Llamado a la función que permite la impresión de sueldo de Juan
		impresionArreglo(sueldoJuan);
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}else{ // En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Función para la tercera opción del menú principal
void opcionTresPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3" <<endl;
	//Validación para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		cout<<"Se dirigira a un menú secundario" << endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
		//Llamado al menpu secundario, donde se muestran los métodos de ordenamiento
		menuOrdenamiento();
		//Bandera que indica que ya se han ordenado los sueldos de Claudia y juan
		banderaOrdenamiento = true;
	}else{// En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Función para la cuarta opción del menú principal
void opcioncuatroPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4" <<endl;
	//Validación para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		//cout<<"Se dirigira a un menú secundario" << endl;
		//cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		//system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
		//Llamado al menpu secundario, donde se muestran los métodos de ordenamiento
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
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Función para la quinta opción del menú principal
void opcionCincoPrincipal(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 5" <<endl;
	//Validación para determinar si el usuario ya ha ingresado los sueldos de Claudia y Juan
	if(banderaSalario){
		//Validación para determinar si el usuario ya ha ordenado los sueldos de Claudia y Juan
		if(banderaOrdenamiento){
			cout<<"Se dirigira a un menú secundario" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
			system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
			//Llamado al menú secundario para poder realizar la busqueda del sueldo de alguna de las personas
			menuSeleccionPersona();
		}else{// En caso de que no hayan ordenado a los arreglos se le notifica al usuario
			cout<<"No se ha generado el ordenamiento de los vectores, selecciona la opción 3" << endl;
			cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
		}
		
	}else{// En caso de que no hayan ingresado sueldos a los arreglos se le notifica al usuario
		cout<<"No se han registrado los salarios de Claudia y Juan, selecciona la opción 1" <<endl;
		cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	}
	system("pause");//Función de C++ que necesita el tecleo de una letra del usuario para poder continuar la ejecucion del programa.
}

//Función para la primera opcion del menú de selección de una persona
void opcionUnoPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1, búsqueda salario de Claudia" <<endl;
	int dato;//Declaración de variable local para ingresar el sueldo a buscar
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;//Lectura del sueldo para realizar la busqueda
	busquedaBinaria(dato, sueldoClaudia, claudia); // LLamado a la función para realizar la busqueda de sueldo
	//Validación para el caso de que se haya encontrado un sueldo
	if(banderaBusquedaClaudia){
		//Mensaje de confirmación para el caso de que se haya encontrado un sueldo
		cout<< "Se ha encontrado " << sueldoClaudia[mitad] << " en la posicion " << mitad << endl;
		//Cambio de estado de bandera para que se vuelva a realizar la busqueda
		banderaBusquedaClaudia = false;
	}else{
		//Mensaje al usuario en caso de que no se haya encotrado un valor de un sueldo
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

//Función para la segunda opcion del menú de selección de una persona
void opcionDosPersona(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2, búsqueda salario de Juan" <<endl;
	int dato; //Declaración de variable local para ingresar el sueldo a buscar
	cout << "Ingresa el salario a buscar: ";
	cin >> dato;//Lectura del sueldo para realizar la busqueda
	busquedaBinaria(dato, sueldoJuan, juan);// LLamado a la función para realizar la busqueda de sueldo
	//Validación para el caso de que se haya encontrado un sueldo
	if(banderaBusquedaJuan){
		//Mensaje de confirmación para el caso de que se haya encontrado un sueldo
		cout<< "Se ha encontrado " << sueldoJuan[mitad] << " en la posicion " << mitad << endl;
		//Cambio de estado de bandera para que se vuelva a realizar la busqueda
		banderaBusquedaJuan = false;
	}else{
		//Mensaje al usuario en caso de que no se haya encotrado un valor de un sueldo
		cout<< "No se ha encontrado el salario ingresado" << endl;
	}       
}

//Función para la primera opcion del menú de ordenamiento
void opcionUnoOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 1, ordenamiento por el método de burbuja" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia); //LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoBurbuja(sueldoClaudia);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoBurbuja(sueldoJuan);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método burbuja" <<endl;
}

//Función para la segunda opcion del menú de ordenamiento
void opcionDosOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 2, ordenamiento por el método de Insersión" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoInsercion(sueldoClaudia);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoInsercion(sueldoJuan);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Insersión" <<endl;
}

//Función para la tercera opcion del menú de ordenamiento
void opcionTresOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 3, ordenamiento por el método de Selección" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoSeleccion(sueldoClaudia);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoSeleccion(sueldoJuan);//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de Selección" <<endl;
}

//Función para la cuarta opcion del menú de ordenamiento
void opcionCuatroOrdenamiento(){
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Elegiste la opción 4, ordenamiento por el método de QuickSort" <<endl;
	cout << "Arreglo de Claudia antes de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoQuicksort(sueldoClaudia,0,(maximo-1));//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Claudia despues de ordenar " <<endl;
	impresionArreglo(sueldoClaudia);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout << "Arreglo de Juan antes de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos antes de ordenar
	ordenamientoQuicksort(sueldoJuan,0,(maximo-1));//LLamado a la función para realizar el ordenamiento correspondiente
	cout << "Arreglo de Juan despues de ordenar " <<endl;
	impresionArreglo(sueldoJuan);//LLamada a la función para impresión del arreglos despues de ordenar
	cout<<"--------------------------------------------------------------------------------------------------------------------" <<endl;
	cout<< "Se han ordenado los vectores por el método de QuickSort" <<endl;
}

//Función que ingreso de sueldo en general, se solicita la entrada del vector y el nombre de la persona
void ingresarSueldo(int arreglo[], string nombre){			
	//Variable de apoyo para ingresar los valores por medio de teclado
	int num;
	//Ciclo for en donde se realiza el ingreso de los datos en función del tamaño del arreglo
	for(int i = 0; i < maximo; i++)
    {
    	//Inreso de los datos por medio del teclado
    	cout << "Ingresa el sueldo " << (i+1) << " de " << nombre <<": ";
    	//Lectura de los valores que ingresan por medio del teclado
    	cin >> num;
    	//Asignación del valor ingresado en el teclado a la posición del arreglo
        arreglo[i] = num;
    }
}

//Función para la impresión del arreglo en general
void impresionArreglo(int arreglo[]){
	cout << "[ ";
	//Ciclo for en donde se realiza la impresión de los datos en función del tamaño del arreglo
	for(int i = 0; i < maximo; i++)
    {
    	//Impresion en pantalla de los elementos del arreglos
    	cout << " " << arreglo[i] << " ";
    }
    cout << "] " <<endl;
}

//Función para el ordenamiento burbuja, se necesita el ingreso del arreglo a ordenar
void ordenamientoBurbuja(int arreglo[]){
	//Declaración de la variable auxiliar
	int aux;
	//Ciclo for que recorre las posiciones del arreglo
	for(int i =0 ; i<maximo; i++){
		//Ciclo for en donde se va a realizar la validación del ordenamiento
		for(int j = 0; j<(maximo-1); j++){
			//Estructura if para el caso de que se haya encontrado un valor mayor a la posición que se esta evaluando
			if(arreglo[j]>arreglo[j+1]){
				//Se hace uso del auxiliar para asignar la posición mayor
				aux = arreglo[j];
				//Se asigna la posicion actual el valor de la posición (actual+1)
				arreglo[j] = arreglo[j+1];
				//Se asigna la posición (actual +1 ) en valor del auxiliar
				arreglo[j+1] = aux;
			}
		}
	}
}

//Fucnión par el ordenamiento por insersion, se necesita el ingreso del arreglo a ordenar
void ordenamientoInsercion(int arreglo[]){
	//Declaración de variables de apoyo
	int pos, aux;
	//Ciclo for que realiza el recorrido de las posiciones del arreglo
	for(int i = 0; i<maximo; i++){
		//Asignación de la variable de apoyo el valor del recorrido i
		pos = i;
		//Asignación de la variable de apoyo el valor que se encuentre en el arreglo
		aux = arreglo[i];
		//Ciclo while donde se necesita cumplir la sentencia para poder realizar el cambio, en donde la posicion tiene que ser mayor a cero
		//y el valor del arreglo en posión -1 tiene que ser mayor al auxiliar
		while((pos > 0) && (arreglo[pos - 1] > aux)){
			//En caso de se cumpla se insertara el valor mayor en la posición actual 
			arreglo[pos] = arreglo [pos - 1];
			//Se reduce el valor de la posición
			pos--;
		}
		//Asignaión del arreglo en la posición el valor del auxiliar
		arreglo[pos] = aux;
	}
}

//Función ordenamiento por Selección, se neesita el ingreso del arreglo a ordenar
void ordenamientoSeleccion(int arreglo[]){
	//Declaración de variables de apoyo
	int min, aux;
	//Ciclo for que realiza el recorrido de las posiciones del arreglo
	for(int i = 0 ; i < maximo; i++){
		//Asignación de la variable de apoyo el valor de i
		min = i;
		//Recorrido del arreglo desde una posicion i+1
		for (int j = i+1;j<maximo;j++){
			//Verificacion de que el valor del arreglo en j sea menor el valor del arreglo en min 
			if(arreglo[j]<arreglo[min]){
				//Si se cumple se le asigna el valor de j a min
				min = j;
			}
		}
		//Asignación del valor del arreglo en i al auxiliar
		aux = arreglo[i];
		//Asignación del valor del arreglo en min a la posicion del arreglo en i
		arreglo[i] = arreglo[min];
		//Asiganción del valor del arreglo en min el valor del auxiliar
		arreglo[min] = aux;
	}
}

//Funcón para el ordenamiento Quick Sort
void ordenamientoQuicksort(int arreglo[], int izq, int der){
	//Declaración de variable auxiliares
	int i, j, x, aux;
	//Asignación de los limites del arreglo
	i=izq;
	j = der;
	//Divición a la mitad del arreglo
	x = arreglo[(izq+der)/2];
	//Declaración del ciclo do/while
	do{ 
		//While que recorre las posiciones del lado izquierdo del arreglo
        while( (arreglo[i] < x) && (j <= der) )
        { 
        	//Incremento de la posición del lado izquierdo
            i++;
        } 
        
		//while que recorre las posiciones del lado derecho del arreglo 
        while( (x < arreglo[j]) && (j > izq) )
        { 
        	//Decremento del lado derecho
            j--;
        } 
 		//Verificación del las varibles auxiliares
        if( i <= j )
        { 
        	//Asignacion del auxiliar el valor del arreglo en i
            aux = arreglo[i]; 
            //Asignación la posicion del arrglo en i el valor del arreglo en j
			arreglo[i] = arreglo[j]; 
			//asginación el valor del arreglo en j el valor del auxiliar
			arreglo[j] = aux; 
			//Incremento de lado izquierdo del arreglo
            i++;  
            //Decremento del lado derecho del arreglo
			j--; 
        }
         
    }while( i <= j ); //Sentencia para detener el cicli do/while 
 
 	//Sentencia que verifica los limite con el auxiliar
    if( izq < j ) {
    	//Vuelta al llamado de la función de ordenamiento
    	ordenamientoQuicksort( arreglo, izq, j ); 
	}
	      
    //Sentencia que verifica los limites del auxiliar    
    if( i < der ) {
    	//Vuelta al llamado de la función de ordenamiento
    	ordenamientoQuicksort( arreglo, i, der );
	}       
}

//Función para la búusqueda binaria
void busquedaBinaria(int dato, int arreglo[], string nombre){
	//Declaración de variables de apoyo
	int inferior = 0;
	int superior = maximo;
	int iteracion = 1;
	//ciclo while que realiza el recorrido del arreglo
	while((inferior <= superior)&&(iteracion<=20)){
		//Divición de la posición para realizar la busqueda
		mitad = (inferior+superior)/2;
		//Variable que realiza el termino de la iteración en caso de no encontrar un valor
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
		//Validación del valor de la posición a la mitad del arreglo sea mayor
		if(arreglo[mitad] > dato){
			//Asignación de superior la mitad
			superior = mitad;
			//Se vulve a realizar el calculo de la media de la busqueda
			mitad = (inferior+superior)/2;
		}
		//Validación del valor de la posiscio a la mitd del arreglo sea menor
		if(arreglo[mitad] < dato){
			//Asignación el valor de inferior el valor de la mitad
			inferior = mitad;
			//Se vuleve a realizar el calculo de mitas para la busqueda
			mitad = (inferior+superior)/2;
		}
	}
}

//Función para la eliminación de sueldos duplicados
void eliminarDuplicado(int arreglo[]){
	for(int i=0; i<(maximo-1); i++)
        for(int j=i+1; j<maximo; j++) {
            //Sentencia par el caso de que se encuentre un duplicado
            if(arreglo[i] == arreglo[j]) {

                //Se intercambia para quede hasta el final
                for(int k=j;k<(maximo-1);k++)
					swap(arreglo[k], arreglo[k+1]); //Función que permite el intercambio de valores de un arreglo
				
                   

                ///Disminuimos la longitud en 1, lo que significa
                ///que se elimina un elemento
                //Reducción del maximo menos 1
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


