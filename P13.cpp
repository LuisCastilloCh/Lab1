#include <iostream>

using namespace std;
int main(){

    cout<<"numero impar: ";
    int numero,contador1=0;
    cin>>numero;

    int suma_principal=0;
    for(int i=3;i<=numero;i+=2){

        contador1+=1;
        suma_principal+=i*i;

    }

    int suma_pares=0;

    for(int i=2;i<=contador1*2;i+=2){
        suma_pares+=i;
    }

    int suma_total=0;

    int au;
    au=suma_principal;

    for(au;au!=(suma_principal-(suma_pares*4));au-=suma_pares){
        suma_total+=au;
    }

    suma_total++;

    cout<<suma_total<<endl;

    return 0;
}
