#include <iostream>
using namespace std;
int main(){

 int color;

 
cout<<"Elija un color: "<<endl;
cout<<"1-Azul"<<endl;
cout<<"2-Aqua"<<endl;
cout<<"3-Blanco"<<endl;
cout<<"4-Morado"<<endl;
cin>>color;
  
if (color ==1){
        cout<<"Usted ha gano $10 ";
    }
else if (color ==2){
        cout<<"Usted ha gano $150 ";
    }
else if (color ==3){
        cout<<"Usted ha gano $1000 ";
    }
else if (color ==4){
        cout<<"Usted ha gano $1500";
    }
else{
    cout<<"Escoja un color de la lista ";
    }

return 0;
}