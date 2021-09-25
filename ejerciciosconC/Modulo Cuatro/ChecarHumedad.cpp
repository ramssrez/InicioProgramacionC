#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int trasnsistor, agua=1;
	cout <<"Ingresa el valor del transistor 0 o 1: ";
	cin >> trasnsistor;
	
	if(trasnsistor == 1){
		cout <<"Fin del programa" <<endl;
	} else{
		if (agua == 1){
			cout<<"Estamos echando agua...."<<endl;
		}else{
			cout<<"Se necesita llenar el deposito"<<endl;
		}
	}
	system("pause");
	return 0;
}
