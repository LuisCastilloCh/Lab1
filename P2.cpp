#include<iostream>
using namespace std;

int main(){

    int valor;
    int mil, dosm, cincom, diezm,veintem, cincuentam;
    int cien, doscientos, cincuenta, quinientos, resto;

    cout<<"Ingresa un valor:  ";cin>>valor;

    cincuentam=valor/50000;
    valor=valor-(cincuentam*50000);

    veintem=valor/20000;
    valor=valor-(veintem*20000);

    diezm=valor/10000;
    valor=valor-(diezm*10000);

    cincom=valor/5000;
    valor=valor-(cincom*5000);

    dosm=valor/2000;
    valor=valor-(dosm*2000);

    mil=valor/1000;
    valor=valor-(mil*1000);

    quinientos=valor/500;
    valor=valor-(quinientos*500);

    doscientos=valor/200;
    valor=valor-(doscientos*200);

    cien=valor/100;
    valor=valor-(cien*100);

    cincuenta=valor/50;
    resto=valor-(cincuenta*50);

    cout<<"Billetes de 50 mil: "<<cincuentam<<endl;
    cout<<"Billetes de 20 mil: "<<veintem<<endl;
    cout<<"Billetes de 10 mil: "<<diezm<<endl;
    cout<<"Billetes de 5 mil: "<<cincom<<endl;
    cout<<"Billetes de 2 mil: "<<dosm<<endl;
    cout<<"Billetes de 1 mil: "<<mil<<endl;
    cout<<"Monedas de 500: "<<quinientos<<endl;
    cout<<"Monedas de 200: "<<doscientos<<endl;
    cout<<"Monedas de 100: "<<cien<<endl;
    cout<<"Monedas de 50: "<<cincuenta<<endl;
    cout<<"Resto: "<<resto<<endl;

    return 0;
}
