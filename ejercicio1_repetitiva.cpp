#include <iostream>
using namespace std;

int main (){
	int n, multiplo;
	cout<<"Ingrese la cantidad de multiplos de 7 a imprimir"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++){
		multiplo=7*i;
		cout<<multiplo<<endl;
	}
	return 0;
}
