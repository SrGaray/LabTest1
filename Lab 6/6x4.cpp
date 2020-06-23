#include "iostream"
using namespace std;

int D(int a1[],int no, int a2[])
{
    
    cout<<"Escriba "<<no<<" los digitos para el primer arreglo:";

    for ( int i = 0; i < no; i++)
    {
        cin>>a1[i];
    }
    cout<<"Escriba "<<no<<" digitos para el segundo arreglo:";

    for (int i = 0; i < no; i++)
    {
        cin>>a2[i];
    } 
}
int X(int a1[],int a2[],int no,int resu[])
{
      int i;
  
    for ( i = 0; i < no; i++)
    {
        resu[i]= a1[i] + a2[i];
    }
}
void Re(int resu[], int a)
{ 
    cout<<"La suma de ambos arreglos es:";
    for (int i = 0; i < a; i++)
    {
    
        cout<<resu[i]<<" ";
    }
    
}
int main()
{
  int No;
    cout<<" ---Sumatoria de arreglos---"<<endl;
    cout<<"Escriba la cantidad de elementos de los arreglos: ";
    cin>>No;
    
    int a1[No];
    int a2[No];
    int resu[No];

  
    D(a1 ,No,a2);
    X(a1,a2,No,resu);
    Re(resu,No);
 
}