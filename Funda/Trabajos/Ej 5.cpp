#include <iostream>
#include <string.h>
using namespace std;

int main ()
{

    char palabra[100];
    char a;
    char b;
    char caracteres=0;

    cout<<"Escriba una palabra"<<endl;
    cin>>palabra;
    caracteres = strlen(palabra);

    for (size_t i = 0; i < 1; i++)
    {
        a=palabra[i];
    }
    
    for (size_t i = 0; i < caracteres; i++)
    {
        b=palabra[i];
    }
    
    if (a==b)
    {
        cout<<"La primera y ultima letra son las mismas";
    }
    else
    {
        cout<<"La primera y la utlima letra son diferentes";
    }
    
    
    
    
   
    

}