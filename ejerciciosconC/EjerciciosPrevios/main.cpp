#include <iostream>
using namespace std;

int main()
{
   cout <<"Hola mundo";
   cout << "\nEsto es una prueba con los nuevos comandos \n";
   int age = 25;
   int num =1;
   int total =0;
   int number;


n6   
   //Uso del ciclo while en donde se observa el funcionamiento del mismo
   while (num <= 5){
       //De esta forma hacemos que el usuario ingrese un numero por cierto numero de intentos
       //Para este caso fue solo 5 intentos
       cin >> number;
       cout << "Numero ingresado: " <<number <<endl;
       total = total + number;  // Esta se puede expresar de la siguiente manera: total += number
       //Con esta línea se agrega el numero en que va el ciclo
       cout <<"Iteracion del ciclo: " <<num << endl;
       num++;                   //Esta se puede expresar de la siguiente manera num = num + 1
   }
   cout <<"La suma es: " <<total << endl;
   



   //Uso del ciclo for para C
   for (int x = 0;x<10;x++ ){
       cout<<"Uso del ciclo for " <<"Número x: " <<x <<endl;
   }
   
   
   
   //Esto es el uso del switch en C para selección de casos en vez de ifs anidados
   switch(age){
       case 16:
       cout <<"Too young";
       break;
       case 42:
       cout <<"Adult";
       break;
       case 70:
       cout <<"Senior";
       break;
       default:
       cout <<"This is default case";
   }

    return 0;
}
