#include <iostream>

using namespace std;

int main(){

    int mes,fecha;
    cout<<"mes en numero: ";cin>>mes;
    cout<<"fecha: ";cin>>fecha;

    if(mes>12){
        cout<<mes<<" es un mes invalido";
    }else if(mes==1 or mes==4 or mes==6 or mes==9 or mes==10 or mes==11 ){
        if(fecha<=30){
           cout<<fecha<<"/ "<<mes<<" es una fecha valida.";
        }
        else{
            cout<<fecha<<"/"<<mes<<" es una fecha invalida.";
        }
    }else if(mes==3 or mes==7 or mes==8 or mes==12){
        if(fecha<=31){
            cout<<fecha<<"/"<<mes<<" es una fecha valida.";
        }else{
            cout<<fecha<<"/"<<mes<<" es una fecha invalida.";
        }
    }else if(mes==2 or mes==5){
        if(mes==2){
            if(fecha<29){
                cout<<fecha<<"/"<<mes<<" es una fecha valida.";
            }else if(fecha==29){
                cout<<fecha<<"/"<<mes<<" es una fecha valida en bisiesto.";
            }else{
                cout<<fecha<<"/"<<mes<<" es una fecha invalida.";
            }
        }else{
            if(fecha<=29){
                cout<<fecha<<"/"<<mes<<" es una fecha valida.";
            }else{
                cout<<fecha<<"/"<<mes<<" es una fecha invalida.";
            }
        }
    }

    return 0;

}
