#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n1, n2;

    cout<<"Dame el primer numero: ";
    cin>>n1;

    cout<<"Dame el segundo numero: ";
    cin>>n2;

    double resultado=float(n1)/float(n2);

    cout<<"El resultado de la division "<<n1<<"/"<<n2<<" con redondeo es: "<<lround(resultado)<<endl;

    return 0;
}
