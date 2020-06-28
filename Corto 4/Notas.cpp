#include <iostream>

using namespace std;

float ma [100][100];
float mp [100];
double Estudiantes;
double notas = 5;
float s;
float prom;
int i;
int j;

int main (){
// Inicio del programa
cout<<endl;
cout<<"-------Califica a los estudiantes -------"<<endl;
cout<<"\nIngrese el numero de estudiantes: ";
cin>>Estudiantes;



for (int i=0; i<Estudiantes;i++){
    cout<<"\nEscriba las notas del alumno "<<i+1 << " en |base 10|"<<endl;
    for (int j=0; j<notas;j++){
        cout<<" Nota " << j+1<<": ";
        cin>>ma [i][j];

    }
}

for (int i=0; i<Estudiantes;i++){

    for (int j=0; j<notas;j++){

        s = s + ma[i][j];



    }

    s = s * 2;
    cout<<"\nNota final del estudiante "<<i+1<<" es" << ": "<<s<<endl;

    if (s >= 60 ){
        cout<<"Paso"<<endl;
    }

    else if (s < 60)
    {
        cout<<"No paso"<<endl;
    }

    else if (s > 100)
    {
        cout<<"Ingrese notas validas"<<endl;
    }


    s= 0;
}
}