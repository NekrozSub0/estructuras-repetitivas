//Algoritmo leer numeros hasta introducir uno negativo
#include <iostream>
using namespace std;

int main(){
	int num;
	do {
	cout<<"Introduce el numero"<<endl;
	cin>>num;
	} while (num>=0);
	cout<<"Fin de la captura"<<endl;
	return 0;
}
