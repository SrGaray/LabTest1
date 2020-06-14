#include <iostream>
using namespace std;
int main(){

float hn; //Horas normales
float he; //Horas Extras
float tt; //sueldo total
float rr; //sueldo real
float DM =0; //Descuento M. a 500
float Dm=0; //Descuento men. a 500
int i=0, no=0;
string Nomb; //Nombre de empl.

cout<<"--Ingrese la cantidad de empleados: "<<endl;
cin>>no;

for( i=0; i<no; i++){
    cout<<"--Ingrese el nombre del empleado: "<<endl;
    cin>>Nomb;

    cout<<"Ingrese las horas trabajadas: "<<endl;
    cin>>hn;

    cout<<"Ingrese si hay horas extras: "<<endl;
    cin>>he;

    tt = (hn*1.75) + (he*2.50);

    if(tt >500)
    {
      DM = tt*(0.04+0.625+0.1);
      rr = (tt - DM);
    }
    else if(tt<500)
    {
      Dm= tt*(0.4+0.625);
      rr = (tt-Dm);
    }
cout<<Nomb;   
cout<<"---Salario total ---"<<tt<<endl;
cout<<"---Salario real---  "<<rr<<endl;

}
}
