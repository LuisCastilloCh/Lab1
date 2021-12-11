#include <iostream>
using namespace std;

int main(){

    //Escriba un programa que reciba un número y calcule el mínimo común múltiplo de
    // todos los números enteros entre 1 y el número ingresado

    int numero,respuesta, auxiliar, numeros_cumplen;
    bool encontrado=true;

    cout<<"Numero: ";cin>>numero;

    for(int i=2;encontrado;i++){

        if(i%numero==0){

            auxiliar=numero-1;
            numeros_cumplen=0;

            for(auxiliar;auxiliar>=1;auxiliar-=1){
                if(i%auxiliar==0){
                    numeros_cumplen+=1;
                }
            }

            if(numeros_cumplen==numero-1){;
                respuesta=i;
                break;
            }
        }

    }

    cout<<respuesta<<endl;
    return 0;
}
