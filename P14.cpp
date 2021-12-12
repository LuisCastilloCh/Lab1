#include <iostream>

using namespace std;

int main()
{
  //para ir almacenando los numeros palindromos,
  //y guardar el mayor.
  int resultado=0;


  for(int A=122;A<=999;A++){
      for(int B=122;B<=999;B++){
          int residuo;
          int primer_numero;
          int numero1=A*B;
          int numero1_copia=numero1;
          int numero2=0;//almacenar el nuevo numero para probar si es palindromo;
          //saber si es palindromo


          for(int AU=0;(numero1/10!=0);AU++){
              residuo=numero1%10;

              if(AU==1){
                  primer_numero=residuo;
                  numero1=numero1/10;
              }
              if(AU==2){
                  numero2=(primer_numero*10)+residuo;
                  numero1=numero1/10;
              }

              if(AU>2){
                  numero2=(numero2*10)+residuo;
                  numero1=numero1/10;
              }
          }

          residuo=numero1%10;
          numero2=(numero2*10)+residuo;


          if(numero1_copia==numero2){

              if(numero1_copia>resultado){
                  resultado=numero1_copia;
              }
          }
      }
  }

  cout<<resultado<<endl;

  return 0;
}
