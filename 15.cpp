#include<iostream>
using namespace std;

int main(){

    int n, suma=0;

    while(true){

        cout<<"Dame un numero: ";cin>>n;

        if (n==0){
            break;
        }else{
            suma+=n;
        }
    }

    cout<<"La suma de los numeros ingresados es: "<<suma<<endl;

    return 0;
}
