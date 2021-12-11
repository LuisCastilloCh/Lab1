#include<iostream>
using namespace std;

int main(){

    int n,suma=0;

    cout<<"Dame un numero: "; cin>>n;

    for(int i=0;i<=n;i++){
        suma+=i;
    }

    cout<<"La sumatoria desde 0 hasta "<<n<<" es: "<<suma<<endl;

    return 0;
}
