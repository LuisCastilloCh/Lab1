#include <iostream>

using namespace std;
int main(){

    //La serie de Collatz se conforma con la siguiente regla: sea n un elemento de la serie,
   //si n es par, el siguiente elemento es n/2, y si n es impar, el siguiente elemento es 3n+1.
    //Escriba un programa que reciba un número k y calcule cual es el elemento inicial j (semilla), menor
    //que k, que produce la serie más larga y diga cuantos términos m tiene la serie.
    //1. Ej: 1, 1, 2, 3, 5, 8, ....

   int numero;
   cout<<"numero: ";
   cin>>numero;
   int numero_serie,auxiliar;
   int tamanoSM=0;

   for(int i=numero-1;i!=1;i-=1){

       int tamanoS=0;
       auxiliar=i;

       while(auxiliar!=1){

               if(auxiliar%2==0){
                    tamanoS+=1;
                    auxiliar=auxiliar/2;
               }
               else{
                    tamanoS+=1;
                    auxiliar=(3*auxiliar)+1;
               }
       }

        if(tamanoS>tamanoSM){
               numero_serie=i;

               tamanoSM=tamanoS;
        }
   }

   cout<<"la serie mas larga es con la semilla: ";
   cout<<numero_serie;
   cout<<" teniendo "<<tamanoSM+1<<" terminos ";


   //escribir serie

   cout<<"serie: "<<numero_serie<<", ";

   while(numero_serie!=1){
           if(numero_serie%2==0){
                numero_serie=numero_serie/2;
                cout<<numero_serie<<", ";
           }
           else{
                numero_serie=(3*numero_serie)+1;
                cout<<numero_serie<<", ";
           }
   }

   cout<<" "<<endl;

   return 0;

}

