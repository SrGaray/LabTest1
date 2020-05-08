#include <iostream>
using namespace std;

int main(){
        float espinacas = 0.85;
        float cantidad;
        float total;
        
      
    cout<<"Cuantas espinacas llevara? "<<endl;
    cin>>cantidad;
    total = float(cantidad*espinacas);
    cout<<"----Su ticket---"<<endl;
    cout<<"Su compra es: "<<endl;
    cout<<"Espinacas:$0.85---"<<cantidad<<endl;
    cout<<"Su total es:$ " << total <<endl;
    cout<<"----Disfurte su espinaca---"<<endl;
    return 0;
    }