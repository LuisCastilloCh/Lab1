#include<iostream>
using namespace std;

int main(){

    int n, n1=0, n2;

    while(true){

        cout<<"Dame un numero: ";cin>>n;

        if (n==0){
            break;
        }else if(n>n1 and n>n2){
            n2=n;
        }

        n1=n;
    }

    cout<<"El numero mayor fue: "<<n2<<endl;

    return 0;
}
