#include <iostream>

using namespace std;

int main()
{   cout<<"numero: ";
    int numero;
    cin>>numero;

    int maximo_numero=0;

    for(int au=1;au<numero;au++){

        int divisores=0;
        for(int i=2;i<=au;i++){
            int prueba;
            prueba=au%i;

            if(prueba==0){divisores++;}}
        divisores++;

        if(divisores==2){
            if(numero%au==0){
                if(au>maximo_numero){maximo_numero=au;}}}}
    cout<<maximo_numero;

    return 0;
}
