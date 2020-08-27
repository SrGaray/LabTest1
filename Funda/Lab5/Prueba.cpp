#include <iostream>
using namespace std;

double estaturas[25] = {1.70,1.85,1.65,1.78,1.90,1.55,1.95,1.77,1.71,1.59,1.88,1.83,1.87,1.81,1.99,2.00,1.61,1.71,1.78,1.93,1.80,1.45,1.60,1.52,1.40};

float media(float estaturas[], int alumnos, float promedio){

for (int i = 0; i < 25; i++)
{
    promedio = estaturas[i] / alumnos;


    cout<<promedio;
}
}