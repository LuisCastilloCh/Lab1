#include<iostream>
using namespace std;

int main(){

    int A;cout<<"Numero A: ";cin>>A;
    int B;cout<<"Numero B: ";cin>>B;
    int multiplo;
    bool ciclo=true;

    //generar multiplos de A.
    for(int auxiliar=1;ciclo=true;auxiliar+=1){
        int multiplo=A*auxiliar;

        //saber si la V.multiplo lo es de B tambien
        if(multiplo%B==0){
            cout<<"Minimo comun multiplo: "<<multiplo<<endl;
            break;

        }

    }

    return 0;

}
