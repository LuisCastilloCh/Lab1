#include <iostream>
using namespace std;

int main(){

 int numero;
  cout<<"ingresa el numero: ";cin>>numero;
  float resultado=1.0;

  for(int au=1;au<=numero-1;au++){
      float factorial=1.0;
      for(int i=1;i<=au;i++){
            factorial*=i;
      }
      resultado+=(1/factorial);
  }

  cout<<resultado<<endl;

    return 0;
}
