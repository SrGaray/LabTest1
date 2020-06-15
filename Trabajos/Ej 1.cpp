#include <iostream>
using namespace std;
int main(){
int num;
int Dv;

cout<<"Ingrese un numero ";
cin>>num;

cout<<"Ingrese un divisor ";
cin>>Dv;

if (num % Dv ==0){
    cout<<"El numero es divisible "<<endl;

}

else{
    cout<<"El numero no es divisible "<<endl;
}

}
