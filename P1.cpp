#include <iostream>
using namespace std;

int main(){

    char letra;
    string vocales="aeiouAEIOU", vocal;
    string cons="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    bool ban=false;
    bool consonante=false;

    cout<<"Ingrese una letra: ";cin>>letra;

    for (int i=0;true;i++){
        if (letra==vocales[i]){
            ban=true;
            break;
        }else if(letra==cons[i]){
            consonante=true;
            break;
        }
    }

    if (ban==true){
        cout<<letra<<" : Es vocal";
    }else if(consonante==true){
        cout<<letra<<" : Es una consonante";
    }else{
        cout<<letra<<" : No es una letra";
    }

    return 0;
}
