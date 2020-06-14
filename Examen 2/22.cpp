#include <conio.h>
#include <iostream>
using namespace std;

int main(){

int Nm=27;
int i;
int Mn;
char x;

  cout<<"---- Prueba suerte con el numero magico ----"<<endl<<endl;
for(i=0; i < 5; i++)
{
  cout<<"Escribe un numero del 1-100 : ";
  cin>>Mn;
  getchar();

if (Mn > 27)
{
  cout<<"Baja unos cuantos numeros "<<endl;cout<<"Usaste tu intento: "<< i + 1<<endl;
  cout<<"Si quieres abortar mision presiona x"<<endl<<endl;
  
}

if(Mn < 27)
{
  cout<<"--Sube unos cuantos numeros-- "<<endl;cout<<"Usaste tu intento: "<< i + 1<<endl;
  cout<<"Si quieres abortar mision presiona x"<<endl<<endl;
  
}
if (Mn == 27)
{
  cout<<"!!!ENCONTRO EL NUMERO MAGICO!!!"<<endl;
  break;
}

else if (Mn == x)
{
  cout<<"Ha terminado su juego";
  break;
}

}
} 