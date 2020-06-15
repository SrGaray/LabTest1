#include <iostream>
using namespace std;

int anbi(int an)
{
if (an % 4 ==0)
    {
        return true;
    }

else if(an % 4 && an  % 100 !=0 )
 {
    return false;
 }

}

int main()
{
    int tiemp;
    cout<<"Ingrese un anio "<<endl;
    cin>>tiemp;

    cout<<" El anio es bisiesto ? "<<anbi(tiemp);

}