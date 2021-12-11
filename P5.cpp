#include <iostream>
using namespace std;

int main(){

   //1ra trangulo

    int numero,espacios_inical ;

    cout<<"ingresa tu numero impar: ";cin>>numero;

    espacios_inical=((numero+1)/2)-1;


    for(int i=1;i<=numero;i+=2){

        int contador1=0;

        while (contador1<espacios_inical){
                cout<<" ";
                contador1+=1;

        }

        int contador2=0;

        while(contador2<i){
                contador2+=1;
                cout<<"*";
        }

        int contador3=0;

        while (contador3<espacios_inical){
                cout<<" ";
                contador3+=1;
        }

        espacios_inical-=1;
        cout<<""<<endl;

    }

    int espacios=1;

    //segundo triangulo

    for(int i=numero-2;i>=1;i-=2){

       int contador1=0;

       while(contador1<espacios){
           contador1++;
           cout<<" ";
       }

       int contador2=0;

       while(contador2<i){
           contador2++;
           cout<<"*";
       }

      int contador3=0;

      while(contador3<espacios){
          contador3++;
          cout<<" ";
      }

      espacios++;
      cout<<""<<endl;
   }

    return 0;

}
