#include<iostream>
using namespace std;

int main(){

    int n, mayor=0;

    while(true){

        cout<<"numero: ";cin>>n;

        if (n==0){
            break;
        }else if(n>mayor){
            mayor=n;
        }

    }

    cout<<"El numero mayor fue: "<<mayor<<endl;

    return 0;
}
