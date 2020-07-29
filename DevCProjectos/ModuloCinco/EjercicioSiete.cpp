/*
Realiza un programa que defina dos vectores de caracteres
y despues almacene el contenido de ambos vectores en un 
vector nuevo, situado en primer lugar los elementos del primer
vector seguido por lo elementos del segundo vector.
mostrar el contenido del nuevo vector
Video 34
*/
#include<iostream>
#include <conio.h>
using namespace std;
int main (){
	char caracterUno[]={'a','b','c','d','e'} ;
	char caracterDos[]={'f','g','h','i','j'};
	char caracterTres[10];
	//Copiando los elementos de letras 1 a letras 3
	for(int i = 0;i<5;i++){
		caracterTres[i]=caracterUno[i];
	}
	//Copiar los elementos de letra 2 a letras 3
	for (int i = 5; i<10;i++){
		caracterTres[i]=caracterDos[i-5];
	}
	cout<<caracterTres<<endl;
	//Imprimiendo los vectores
	for (int i = 0; i<10;i++){
		cout<<1+i<<" vector: " << caracterTres[i]<<endl;
	}
	
	getch();
	return 0;
}
