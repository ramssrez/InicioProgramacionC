#include <iostream>
#include <cstdlib>
#include <locale.h>
#include<stdlib.h>
#include <time.h>
using namespace std;
int main(){
	//Funci�n que toma el idioma del sistema para poder imprimir los acentos
	setlocale(LC_ALL, "");
	//Llamado al men� principal del programa
	//menuPricipal();
	cout << "Hola mundo desde C++" << endl;
	//Retorno cero para que se de por terminado el programa
    return 0;
}

