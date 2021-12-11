#include <iostream>
using namespace std;

int main(){

    int n, mult;

    cout<<"Dame un numero: ";cin>>n;

    for (int i=1;i<=10;i++){
        mult=i*n;
        cout<<n<<"x"<<i<<"="<<mult<<endl;
    }

    return 0;
}
