#include <iostream>
#include <math.h>
using namespace std;

int main(){

       unsigned long long numero;
       cout<<"numero: ";cin>>numero;

       unsigned long long i=10;
       int dig=1;

       //saber cuantos digitos tiene el numero
       for( i;(numero/i)!=0;i*=10){
            dig+=1;
       }

       int suma_total=0;

       //para tener cada numero de izquierda a derecha; y lo guardamos en la V.auxiliar.
       //cambiamos el valor de V.numero y de V.I para seguir teniendo dichos numeros.

       for(i;i!=1;i=i/10){

           int auxiliar=(numero/i);
           suma_total+=auxiliar*auxiliar;

           numero-=(auxiliar*i);
       }

       suma_total+=pow(numero, numero);

       cout<<suma_total<<endl;

       return 0;

}
