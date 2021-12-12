#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    cout << "Ejercicio 29" << endl;
    cout << "Este programa adivina un numero.\n"<< endl;

    int B,num=0,ran=0,c=0,bant=0,resta=0,cc=0,resta2=0;
    char signo;

    srand((unsigned)time(0));
    B =(rand()%100);

    while(signo != '='){
        cout<<" Este es su numero: "<<B<<endl<<"Ingrese el signo: ";
        cin>>signo;

        if(signo=='<'){//mi numero es menor
            if(c==0){
                num=B-1;
                B =(rand()%B);
                cout<<"///"<<B;
            }
            else{
                num=B-1;
                resta=(num)-(bant);
                B =(rand()%resta)+bant;
            }
            cc=1;
        }

        else if(signo=='>'){
            if (cc==0){
                bant=B+1;
                resta2=100-bant;
                B =(rand()%resta2)+bant;
           }
            else{
                ran= num-(B+1);
                bant=B+1;
                B =(rand()%ran)+B;
            }
            c=1;

        }
    }
    if (signo=='='){
        cout<<endl<<"Numero acertado por la computadora: "<<B<<endl;

    }
    else{
        cout<<endl<<"Verifique si ingresÃ³ bien los signos"<<endl;
    }

    return 0;
}
