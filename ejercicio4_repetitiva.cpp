
//Algoritmo Sumar los N gastos, preguntar si seguir ingresando, mostrar suma
#include <iostream>
using namespace std;
int main (){
	float GASTO,SUM=0;
	char ELECC;
	//Entrada, Proceso
	do {
		cout<<"Ingrese el gasto a sumar: "<<endl;
		cin>>GASTO;
		SUM = SUM + GASTO;
		cout<<"Continuar ingresando gastos? (S/N)"<<endl;	
		cin>>ELECC;
	}
	while (ELECC=='S');
	//Salida
	cout<<"La suma de los gastos es :"<<SUM<<endl;
	return 0;
	}
