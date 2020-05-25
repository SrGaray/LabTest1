#include <iostream>
using namespace std;
int main(){
int Nm;

cout<<"Ingrese una cantidad ";
cin>>Nm;

if(Nm > 0){
    cout<<"Su numero es positivo "<<endl;
}
else if(Nm < 0){
    cout<<"Su numero es negativo "<<endl;
}
else if(Nm ==0){
    cout<<"Su numero es 0 "<<endl;
}
}