#include <iostream>
using namespace std;

int main(){

   //En la serie de Fibonacci, cada número es la suma de los 2 anteriores e inicia con 1 y
   //1. Ej: 1, 1, 2, 3, 5, 8, ....
   //Escriba un programa que reciba un número n y halle la suma de todos los números pares en la serie

  int a=1,b=1,c,numero;
  cout<<"numero: ";cin>>numero;

  int suma=0;

  while(b<numero){

      c=a+b;
      a=b;
      b=c;

      if(b%2==0){

          if(b<numero){
              suma+=b;
          }
      }
  }
  cout<<suma<<endl;
  return 0;

 }
