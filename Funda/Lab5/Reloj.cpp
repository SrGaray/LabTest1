#include <iostream>
using namespace std;

int main(){

    int ho,min,seg;
    char d;

 cout<<"Ingresa cualquiera hora ";

    cin>>ho>>d>>min>>d>>seg;
    seg=seg+1;

    if(seg >= 60) //Segundos 
    {
    seg = 0;
    min = min +1;

    if (min >= 60) //Minutos
    {
     min = 0;
     ho = ho + 1;
    }
    if (ho >=24) //Horas
    {
        ho=0;
    }

    if(ho<10)cout<<0;
    cout<< ho;
    cout<< ":";

    if(min<10) cout<<0;
    cout<<min;
    cout<< ":";

    if(seg<10) cout<<0;
    cout<<seg;

}
}