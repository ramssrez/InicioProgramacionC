#include <iostream>
using namespace std;

int main()
{
    //Uso de arreglos para agregar a un arreglo
    int myArr[5];
    for (int x=1; x<=5; x++)
    {
        cout <<"Agrega el numero un numero: " <<x <<endl;
        cin >> myArr[x];
        //myArr[x]=42;
        //cout <<x <<" : " <<myArr[x] <<endl; 
    }
    
    //Imprimiendo los arreglos que previamente fueron asignados
    for (int x = 1; x <=5; x++)
    {
        cout <<"El array que ingreso fueron los siguientes: " << myArr[x] << endl;
    }
    
    //Uso de arreglo para hacer una suma
    int arr [] = {11,35,62,555,989};
    int suma =0;
    
    for(int x = 0; x<5; x++)
    {
        //suma = suma + arr[x];
        suma +=arr[x];
    }
    
        //Impresion de todos los elementos de una matriz
    int arrTwo [2][3] = {{2,3,4},{7,8,9}};
    for(int x=0;x<2;x++)
    {
        for(int y=0;y<3; y++)
        {
            cout << "El valor de x y y es: " << arr[x][y] <<endl;
        }
    }
    
    
    //Llenado de una matiz de nXn
    int matriz [3][3];
    
    for (int x = 0; x<3; x++)
    {
        for (int y=0 ; y<0;y++)
        {
            matriz[x][y] = (x+1)*(y+1);
        }
    }
    
    //recorrido de la matriz en nXn
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3; y++)
        {
            cout << "El valor de x: "<< x << " y: " <<y <<endl;
        }
    }
    
    cout << matriz <<endl;



    cout <<"La suma es: " << suma <<endl;
    
    /*
    Uso de la palabra string para una cadena de valores, esta contenida en
    la libreria de iostream, en caso de que sea necesario usar la libreria
    #include <string> */
    string a = "Estoy aprendiendo C++";
    cout <<a;
    
    return 0;
}
