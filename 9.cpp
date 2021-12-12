#include<iostream>
using namespace std;

int main(){

    int radio;
    double pi=3.1416;

    cout<<"Dame el radio de un circulo: "; cin>>radio;

    double perimetro=2*pi*radio;
    double area=pi*(radio*radio);

    cout<<"El perimetro del circulo de radio "<<radio<<" es: "<<perimetro<<endl;
    cout<<"El area del circulo de radio "<<radio<<" es: "<<area<<endl;

    return 0;
}
