#include <iostream>

using namespace std;

int main(){

    int numero;
    cout<<"ingresa el numero: ";cin>>numero;

    bool auxiliar=false;  //para saber cunado el cilo se detiene
    int numero_T;
    int divisores;

    for(int termino=1;auxiliar==false;termino++){  //termin itera para obtener cada numero triangular

        numero_T=(termino*(termino+1))/2;

        //saber los divisores del numero triangular.

        divisores=0;

        for(int au=1;au<=numero_T;au++){

            if(numero_T%au==0){
                divisores++;
            }
        }

        if(numero+1==divisores){
            auxiliar=true;
        }

    }

    cout<<"el numero: "<<numero_T<<" que tiene "<<divisores<<" divisores"<<endl;

    return 0;
}
