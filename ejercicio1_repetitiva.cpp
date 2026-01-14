#include <iostream>
using namespace std;

int main (){
	//Declaracion de variables
	int n, multiplo;
	//Entrada
	cout<<"Ingrese la cantidad de multiplos de 7 a imprimir"<<endl;
	cin>>n;
	//Proceso y Salida
	if (n<0){
		cout<<"ERROR, numero introducido menor a 0"<<endl;
	} else {
		for (int i=1;i<=n;i++){
			multiplo=7*i;
			cout<<multiplo<<endl;
		}
	}
	return 0;
}
