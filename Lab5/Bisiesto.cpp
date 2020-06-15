#include <iostream>
using namespace std;

int abi(int dec)
{
    if(dec %4==0)
    {
        return true;
    }

    if(dec %4 && dec%100 !=0)
    {
        return false;
    }
}

int main()
{
    int Tie;
    cout<<" Escriba el anio "<<endl;
    cin>>Tie;
    cout<<" Su anio es bisiesto? "<<abi(Tie);
}