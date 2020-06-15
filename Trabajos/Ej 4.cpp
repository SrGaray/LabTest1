#include <iostream>
using namespace std;
int main(){
 
 string pal;

 cout<<"Ingrese una palabra";
 cin>>pal;

 std::cout <<"Sus caracteres son: " <<pal.length()<<endl;

 if(pal.length() > 10){
     cout<<"Es mayor a 10 caracteres "<<endl;
 }
else if (pal.length() < 10){
    cout<<"Es menor a 10 caracteres"<<endl;

}

if (pal.length() %2 ==0){
    cout<<"El numero de caracteres es par "<<endl;
}

else{
    cout<<"El numero de caracteres es impar "<<endl;
}


}