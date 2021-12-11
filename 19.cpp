#include<iostream>
using namespace std;

int main(){

    int n;
    bool primo=true;

    cout<<"Dame un numero: ";cin>>n;

    for (int i=2; i<n;i++){
        if(n%i==0){
            primo=false;
        }
    }

    if(primo){
        cout<<"El numero es primo"<<endl;
    }else{
        cout<<"El numero NO es primo"<<endl;
    }

    return 0;
}
