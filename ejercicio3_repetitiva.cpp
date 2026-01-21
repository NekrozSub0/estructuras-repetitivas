//Algoritmo Sumar los N primeros numeros naturales con bucles
#include <iostream>
using namespace std;
int main (){
	int N,SUM;
	//Entrada
	cout<<"Ingrese la cantidad de numeros naturales a sumar: "<<endl;
	cin>>N;
	//Proceso
	SUM = 0;
	for (int i = 1; i <= N; i++){
		SUM = SUM + i;
	}
	//Salida
	cout<<"La suma de los "<<N<<" primeros numeros naturales es :"<<SUM<<endl;
	}
