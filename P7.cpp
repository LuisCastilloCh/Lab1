#include <iostream>
using namespace std;

int main(){

       unsigned long long numero;
       cout<<"numero: ";cin>>numero;

       int i=10;
       int dig=1;
       int auxiliar;

       //saber cuantos digitos tiene el numero
       for( i;(numero/i)!=0;i*=10){
            dig+=1;
       }

       i=i/10;
       int suma_total=0;

       //para tener cada numero de izquierda a derecha; y lo guardamos en la V.auxiliar.
       //cambiamos el valor de V.numero y de V.I para seguir teniendo dichos numeros.

       for(i;i!=0;i=i/10){

           auxiliar=(numero/i);

           //calculamos la operacion de cada numero.
           int op_numero=1;
           for(int au=0;au<auxiliar;au++){
               op_numero*=auxiliar;
           }
           suma_total+=op_numero;

           numero-=(auxiliar*i);
       }

       cout<<"El resultado de la suma es: "<<suma_total<<endl;

       return 0;

}

