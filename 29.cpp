#include <iostream>
using namespace std;

int main (){

    int A=50, B=100, E=0;
    string signo;

    cout<<"Piensa en un numero y te lo adivino."<<endl;

    while(true){

        cout<<"Probemos con el "<<A<<endl;

        cout<<"Tu numero es igual(=), menor(<) o mayor(>)?: ";cin>>signo;

        if(signo=="="){
            cout<<"Tu numero es "<<A<<endl;
            break;
        }else if(signo=="<"){
            B=A;
            A=(A+E)/2;
        }else if(signo==">"){
            E=A;
            A=(A+B)/2;
        }else{
            cout<<endl;
        }
    }

    return 0;
}
