#include <iostream>

using namespace std;
int main(){

    //Escriba un programa que reciba un número n e imprima el enésimo número primo.
    //Ej: Si recibe 4 el programa debe imprimir 7.
    //Nota: la salida del programa debe ser: El primo numero 4 es: 7.

    int numero;
    int resultado=0;
    cout<<"numero: ";
    cin>>numero;


    int contador=0;
    for(int i=1;contador<numero;i++){
        int divisores=0;
        for(int au=1;au<=i;au++){
            if(i%au==0){
                divisores+=1;
            }
        }
        if(divisores==2){
            resultado=i;
            contador+=1;
        }
    }

    cout<<resultado;
    return 0;
}
