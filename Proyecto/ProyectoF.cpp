#include <iostream>
#include <string>
using namespace std;

const int longCad = 20; 

//Variables
struct costoPorArticulo{  
float Valor;
int cant; //Cantidad
float costoPorArticulo; 
char Na[longCad + 1]; //Na= Nombre de articulo
}; 
//FUNCIONES UTILIZADAS
//F=Funciones
void Impresion(int cant,costoPorArticulo fact[100]);//F3
float Total(int cant,costoPorArticulo fact[100],float costo);//F4
void Info(int cant,costoPorArticulo fact[100]); //F1
void CUnidad(int cant,costoPorArticulo fact[100]); //F2
////////////////
int main()
{
    int cant; //Cantidad
    cout<<endl;
    cout<<"-----La tiendita de Don Jose-----"<<endl<<endl;
    cout<<"Un gusto ayudarle, porfavor ingrese la cantidad de articulos que necesita: ";
    cin>>cant;
   
    costoPorArticulo fact[cant];
    Info(cant, fact);
    CUnidad(cant,fact);
    Impresion(cant,fact);
    float Valor;
    cout<<endl<<endl;
    cout<<"El total de su compra es: $"<<Total(cant,fact,Valor);
    return 0;
}
void Info(int cant,costoPorArticulo fact[100])    //funcion 1 (b)
{
    cout<<endl;
    cout<<"Ingrese los datos de sus productos "<<endl<<endl;
    for (size_t i = 0; i <cant; i++)
    {
        fflush(stdin);
        cout<<"Nombre del producto: ";
        cin.getline(fact[i].Na,20);
        cout<<"Que cantidad necesita: ";
        cin>>fact[i].cant;
        cout<<"Precio de la unidad: ";
        cin>>fact[i].Valor;
        cout<<endl;
    }
}
void CUnidad(int cant,costoPorArticulo fact[100])   //funcion 2 (c)
{
    for (size_t i = 0; i < cant; i++)
    {
        fact[i].Na;
        fact[i].cant;
        fact[i].Valor;
        if (fact[i].cant>=1)
        {
            fact[i].costoPorArticulo= fact[i].cant*fact[i].Valor;        
        }       
    }
}
void Impresion(int cant,costoPorArticulo fact[100])   //funcion 3 (d)
{
    cout<<"-----Este es su ticket de la tiendita don Jose, regrese pronto!!-----";
    for (size_t i = 0; i <cant; i++)
    {
        cout<<endl;
        cout<<fact[i].Na<<endl;
        cout<<"Cantidad: "<<fact[i].cant<<endl;
        cout<<"Precio de la unidad: $"<<fact[i].Valor<<endl;
        cout<<"Costo total por articulo: $"<<fact[i].costoPorArticulo;
    }
}
float Total(int cant,costoPorArticulo fact[100],float Valor) //funcion 4 (e)
{
    Valor=0;
    for (size_t i = 0; i < cant; i++)
    {
        fact[i].Na;
        fact[i].cant;
        fact[i].Valor;
        fact[i].costoPorArticulo;
        Valor=Valor+fact[i].costoPorArticulo;            
    }
    return Valor;
}