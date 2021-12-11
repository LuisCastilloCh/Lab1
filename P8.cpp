#include <iostream>

using namespace std;
int main()
{   //Escriba un programa que reciba 3 números a, b, c, y calcule la suma de todos los múltiplos de a y b que sean menores a c. Tenga en cuenta no sumar 2 veces los múltiplos comunes

    cout<<"a: ";
    int a;
    cin>>a;

    cout<<"b: ";
    int b;
    cin>>b;

    cout<<"c: ";
    int c;
    cin>>c;

    int suma=0;



    for(int au=2;au<c;au++){
        if(au%a==0){
            suma+=au;
            cout<<au<<" + ";}}

    for(int au=2;au<c;au++){
        if(au%b==0){
            suma+=au;
            cout<<au<<" + ";}}
    cout<<"= "<<suma;


}
