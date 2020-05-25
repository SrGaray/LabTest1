#include <iostream>
using namespace std;

int mai(){
    float a,b,c;

    cout<<"Ingrese los valores de a,b y c: "<<endl;
    cin>>a>>b>>c;

    float disc = pow(b,2) - (4*a*c);
    float raiz = sqrt(disc);

    float x1= (-b + raiz) / 2*a;
    float x2= (-b - raiz) / 2*a;

    cout<<"Los resultados de la formuala son: "<<x1<<" "<<x2<<endl;
    

}