#include <stdio.h>
#include <ctype.h>

// Definici�n
int contarVocales(char *cadena);

int main(int argc, char const *argv[])
{
	// Un arreglo de longitud de 1000
	// porque no podemos tener arreglos de longitud din�mica ni strings
	char entrada[1000];
	printf("Escribe una cadena:\n");
	gets(entrada);
	printf("Esto es la entrada: %s\n",entrada);
	int vocales = contarVocales(entrada);
	printf("El numero de vocales que tiene la cadena es: %d\n", vocales);
	return 0;
}


//Cuerpo de la funci�n
int contarVocales(char *cadena){
	int vocales = 0;
	int indice=0;

	// Recorrer toda la cadena
	for ( indice = 0; cadena[indice] != '\0'; indice++){

		// Obtener el char de la posici�n en donde est� el �ndice
		// y por otro lado convertirla a min�scula

		// As� no importa si ponen 'A' o 'a', ambas letras ser�n convertidas a 'a'
		char letraActual = tolower(cadena[indice]);


		if (
			letraActual == 'a' || 
			letraActual == 'e' || 
			letraActual == 'i' || 
			letraActual == 'o' || 
			letraActual == 'u' ||
			letraActual == ' ' ||
			letraActual == '#'
			)
		{
			vocales++;
		}
	}
	return vocales;
}
