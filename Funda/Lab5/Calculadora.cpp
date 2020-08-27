#include <iostream>
using namespace std;

int calc(int NM, int Nm , int r)
{
    do
    {
        r= NM%Nm;
        if(r !=0)
        {
            NM=Nm;
            Nm=r;
        }
    }

while (r !=0);
cout<<"MCD: "<<Nm<<endl;
    
}

int main()
{
    int No1;
    int No2;
    int Re;

    cout<<"Escriba el valor mayor ";
    cin>>No1;

    cout<<"Escriba el valor menor ";
    cin>>No2;

    calc(No1,No2,Re);

}
