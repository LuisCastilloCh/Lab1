#include <iostream>
using namespace std;

int main()
{
    int A;
    float factorial_total=1.0;
    float sum=0.0;
    cout <<"Ingrese un numero:";
    cin>>A;
    A=A-1;
    int i=A;
    while(i>0){
        while(A>=1){
        factorial_total*=A;
        A=A-1;
    }
    //cout<<factorial_total<<endl;
    A=i-1;
    i=i-1;
    sum=sum+(1/factorial_total);
    factorial_total=1.0;
    }
    cout<<sum+1.0;
    return 0;
}
