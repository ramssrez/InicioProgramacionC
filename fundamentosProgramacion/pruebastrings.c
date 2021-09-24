#include <stdio.h>
#include <ctype.h>
int main(){
	char cadena[100];
	printf("Ingresa la cadena: ");
	//fgets(cadena,100,stdin);
	//gets(cadena);
	scanf("%[^\n]",cadena);
	printf("La cadena es: %s ",cadena);
	return 0;
}
