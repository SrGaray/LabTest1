#include <iostream>
#include <conio.h>
using namespace std;

int Mn (float Est[], int S);
float med (float Est[],int S);
int MN (float Est[], int S); 
int mayor;
const int S = 25;
float Est [S];
float su;
int i;

int main (){

  cout<<"Escriba la estatura de cada estudiante: ";
    cout<<endl;
    for ( i = 0; i < S; i++)
    {
        cout<<"Estudiante "<<i + 1 <<": ";
        cin>>Est[i];
    }

cout<<"El promedio de las estaturas es: "<<med(Est,S)<<endl;
cout<<"Estaturas Mayores al promedio: "<<MN(Est,S)<<endl;
cout<<"Estaturas Menores al promedio: "<<Mn(Est,S)<<endl;

getch();


}

float med (float Est[],int S){



for (int i=0;i<S;i++){

   su += Est[i]/S;
}

return su;

}

int Mn (float Est[], int S){

int menor = 0;


for (int i = 0; i < S; i++)


{

    if (Est[i] < su)
    {
        menor++;
    }

}
    return menor;
}



int MN (float Est[], int S)
{
int mayor=0;


    for (int i = 0; i < S; i++)


    {

        if (Est[i] > su)
        {
            mayor++;;
        }

    }
    return mayor;
}