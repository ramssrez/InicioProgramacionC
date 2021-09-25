#include <iostream>
using namespace std;
bool validarn(string entrada){
	cout<<"Ingresaste al metodo";
	bool valida =true;
	int tam = entrada.size();
	for (int i =0; i<tam; i++){
			cout<<"Ingresaste al for";

		if(entrada[i]<=48 ||entrada[i]>=58){
				cout<<"Ingresaste al if";

			valida = false;
			break;
		}
		return valida;
	}
	
}


int main (){
	string n;
	cout <<"Igrese el año de nacimiento: "<< endl;
	cin >>n;
	while (!validarn(n)){ 
		cout<<"Error "<<endl;
		cin >>n;
	}
	return 0;
}
