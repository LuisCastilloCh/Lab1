#include <iostream>
using namespace std;

int main(){

    char vocales[]="aeiouAEIOU";
    char cons[]="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";

    bool vocal=false;
    bool consonante=false;

    char caracter;
    cout<<"Ingrese un caracter: ";cin>>caracter;

    //verificamos si es vocal.

    for(int i=0;i<=9;i++){
        if(vocales[i]==caracter){
            vocal=true;
            cout<<caracter<<" es una vocal.";
            break;
        }
    }

    //verificamos si es consonante.
    if(vocal==false){

        for(int i=0;i<=41;i++){
            if(cons[i]==caracter){
                consonante=true;
                cout<<caracter<<" es una consonate.";
                break;
            }
        }
    }

    if(vocal==false and consonante==false){
        cout<<caracter<<" no es una letra";
    }
    return 0;
}
