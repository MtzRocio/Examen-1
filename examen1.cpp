#include <iostream>
#include <conio.h>

using namespace std;
int main(){
int arreglo;
int *var;
cout<<"¿cuantos valores necesita?: ";
    cin>>arreglo;
    var=new int [arreglo];
    for (int i=0; i<arreglo; i++){
        cout<<"Valor:"<<i<<" ";
        cin>>var[i];
    }
    cout<<"Valor guardado 0: "<<var[0]<<endl;
    cout<<"Valor guardado 1: "<<var[1]<<endl;
    cout<<"Valor guardado 2: "<<var[2]<<endl;
    cout<<"Valor guardado 3: "<<var[3]<<endl;

delete[] var;

    }
