#include <iostream>

using namespace std;

int main(){

   int numero;
   cout<<"numero: ";cin>>numero;

    int suma_primos=0;

    for(int au=1;au<numero;au++){

        int divisores=0
                ;
        for(int i=2;i<=au;i++){
            int prueba;
            prueba=au%i;

            if(prueba==0){divisores++;
            }
        }

        divisores++;

        if(divisores==2){
            suma_primos+=au;
        }
    }

    cout<<suma_primos<<endl;

    return 0;
}
