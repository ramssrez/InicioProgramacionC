//Escriba unprograma que lea tres números y determine cuál de ellos es el mayor.
#include <iostream>
using namespace std;
int main (){
	int n1,n2,n3;
	cout <<"Digite el primer numero: ";
	cin >>n1;
	cout <<"Digite el segundo numero ";
	cin >> n2;
	cout<< "Digite el tercer numero ";
	cin >> n3;
	if ((n1==n2)&&(n2==n3)&&(n1==n3)){
		cout<<"Todos los numeros son iguales";
	}else if((n1>n2)&&(n1>n3)){
		cout <<n1 <<" es el numero mayor";
	}else if((n2>n1)&&(n2>n3)){
		cout << n2 << " es el numero mayor";
	}else{
		cout << n3 << " es el numero mayor";
	}
	return 0;
		
}
