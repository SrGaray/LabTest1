#include <conio.h>
#include <iostream>
using namespace std;
int main(){

int ye;

cout<<"--- Escriba el ano que quiere comprobar: ---";
cin>>ye;

if (ye % 100 !=0){



if (ye % 4 == 0)
cout<<"ano bisiesto "<<endl;


else
{
    cout<<"No es ano bisiesto"<<endl;
}
}

else if (ye % 400 ==0)
{
  cout<<"Ano bisiesto";
}

else
{
     cout<<"No es bisiesto";


}
}