#include <iostream>
using namespace std;

int main(){

    int n1, n2;

    cout<<"Dame el primer numero: ";
    cin>>n1;

    cout<<"Dame el segundo numero: ";
    cin>>n2;

    if(n1>n2){
        cout<<"El numero mayor es: "<<n1<<endl;
    }else{
        cout<<"El numero mayor es: "<<n2<<endl;
    }

    return 0;
}
