
//Algoritmo Determinar si un numero es primo (2 divisores)
#include <iostream>
using namespace std;
int main(){
    int NUM,divc=0,i=1;
    //Entrada
    cout<<"Ingrese el numero a evaluar si es primo: "<<endl;
    cin>>NUM;
    //Proceso
    while (i<=NUM){
        if (NUM%i==0){
            divc++;
        }
        i++;
    }
    //Salida
    if (divc==2){
        cout<<"El numero es primo."<<endl;
    } else {
        cout<<"El numero no es primo."<<endl;
    }
    return 0;
}
