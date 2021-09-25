/*
Hace un programa que realice la serie de fibonacci -> 1 1 2 35 8 13...n
video 29
*/
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	int n;
	int x=0;
	int y=1;
	int z=1;
	
	cout << "Digite un numero de elementos: ";
	cin>>n;
	cout << "1 ";
	for (int i = 1; i<=n;i++){
		z = x+y; // 1 2 3 5 8 13
		cout <<z << " ";//1 2 3 5 8
		x=y;//1 1 2 3 5
		y=z;//1 2 3 5 8
	}
	cout<<"\n";
	system("pause");
	
	return 0;
} 
