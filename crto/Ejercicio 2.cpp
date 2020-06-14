#include <iostream>
using namespace std;
int main(){
    float iva;
    float dinero;
    int pais;

   
    cout<<"--Escoja un pais--"<<endl;
    cout<<"1-El Salvador"<<endl;
    cout<<"2-Guatemala"<<endl;
    cout<<"3-Honduras"<<endl;
    cout<<"4-España"<<endl;
    cin>>pais;
    cout<<"--Coloque una cantidad--"<<endl;
    cin>>dinero;

    if (pais ==1){
        iva = (dinero*1.13);
        cout<<"Debe cancelar "<< iva <<endl;
    }

    if (pais ==2){
        iva = (dinero*1.9);
        cout<<"Debe cancelar "<< iva <<endl;
    }
    if (pais ==3){
        iva = (dinero*1.15);
        cout<<"Debe cancelar "<< iva <<endl;
    }
    if (pais ==4){
        iva = (dinero*1.20);
        cout<<"Debe cancelar "<< iva <<endl;
    }
      else{
        cout<<"Ingrese un pais valido"<<endl;
    }

}