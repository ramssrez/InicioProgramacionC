#include <iostream>
#include <conio.h>
using namespace std;
int main (){
	int mes, year, dia;
	string mesLetra;
	
	do{
		cout<< "Ingresa el dia de nacimiento: ";
		cin >> dia;
		if (!((dia>=1)&&(dia<=31))){
			cout<<"Dia invalido, vuelve a intentar"<<endl;	
		}	
			
	}while((dia<1)||(dia>31));
	
	cout<<"El dia es: "<< dia<<endl;

	do{
		cout<< "Ingresa el mes de nacimiento: ";
		cin >> mes;
		if (!((mes>=1)&&(mes<=12))){
			cout<<"Mes invalido, vuelve a intentar"<<endl;	
		}
		switch(mes){
			case 1:
				cout<<"Enero"<<endl;
				mesLetra="Enero";
				break;
			case 2:
				cout<<"Febrero"<<endl;
				mesLetra="Febrero";
				break;
			case 3:
				cout<<"Marzo"<<endl;
				mesLetra="Marzo";
				break;
			case 4:
				cout<<"Abril"<<endl;
				mesLetra="Abrel";
				break;
			case 5:
				cout<<"Mayo"<<endl;
				mesLetra="Mayo";
				break;
			case 6:
				cout<<"Junio"<<endl;
				mesLetra="Junio";
				break;
			case 7:
				cout<<"Julio"<<endl;
				mesLetra="Julio";
				break;
			case 8:
				cout<<"Agosto"<<endl;
				mesLetra="Agosto";
				break;
			case 9:
				cout<<"Septiembre"<<endl;
				mesLetra="Septiembre";
				break;
			case 10:
				cout<<"Octubre"<<endl;
				mesLetra="Octubre";
			case 11:
				cout<<"Noviembre"<<endl;
				mesLetra="Noviembre";
				break;
			case 12:
				cout<<"Diciembre"<<endl;
				mesLetra="Diciembre";
				break;
		}	
			
	}while((mes<1)||(mes>12));
	
	cout<<"El mes es: "<< mes<<endl;
	
	do{
		cout<< "Ingresa el año de nacimiento: ";
		cin >> year;
		if (!((year>=1905)&&(year<=2020))){
			cout<<"Año invalido, vuelve a intentar"<<endl;	
		}	
			
	}while((year<1905)||(year>2020));
	

	cout<<"El año es: "<< year<<endl;
	cout<<"Naciste el dia: "<<dia<<" del mes: "<<mes<<" del año: "<<year<< endl;
	cout <<"Naciste el "<<dia<<"/"<<mesLetra<<"/"<<year;



	getch();
	return 0;
}
