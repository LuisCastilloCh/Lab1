#include<iostream>
using namespace std;

int main(){

    int n1, n2, producto,num1, num2;
    int mcd,mcm,residuo;

    cout<<"Ingresa el primer numero:  ";cin>>n1;
    cout<<"Ingresa el segundo numero:  ";cin>>n2;

    num1=n1;
    num2=n2;

    producto=n1*n2;

    do{
        residuo=n1%n2;

        if (residuo!=0){
            n1=n2;
            n2=residuo;
        }else{
            mcd=n2;
        }

    }while(residuo!=0);

    mcm=producto/mcd;

    cout<<"El minimo cumun multiplo de: "<<num1<<" y "<<num2<<" es: "<<mcm<<endl;

    return 0;
}
