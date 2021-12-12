#include<iostream>
using namespace std;

int main(){

    int n, ant=0, mayor=0;

    while(true){

        cout<<"Dame un numero: ";cin>>n;

        if (n==0){
            break;
        }else if(n>ant and n>mayor){
            mayor=n;
        }

        ant=n;
    }

    cout<<"El numero mayor fue: "<<mayor<<endl;

    return 0;
}
