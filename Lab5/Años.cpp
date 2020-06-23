#include <iostream>
using namespace std;

int main() {

    int d , me, ye;

    char p;

    cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
    cin >> d >> p >> me >> p >> ye;


    if (d <= 0 || me > 12 || ye < 0||d>31)                                    //--------------
    {                                                                             //
        cout << "Introduzca una fecha valida" << endl;                            //
        cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl; //   RESTRICCIONES A LOS AÑOS NO VALIDOS
        cin >> d >> p >> me >> p >> ye;                                        // ----------------------------------- FINAL

    }

     if (d > 29 && ye % 4 == 0 && me == 2)
    {
        cout << "Introduzca una fecha valida" << endl;
        cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
        cin >> d>> p >> me >> p >> ye;
    }

     if (d > 28 && ye % 4 != 0 && me == 2)
     {
         cout << "Introduzca una fecha valida" << endl;
         cout << "Introduce la fecha en el siguiente orden (Dia,mes,ano)" << endl;
         cin >> d >> p >> me >> p >> ye;
     }


     if (d > 30 && me == 4 || d > 30 && me == 6 || d > 30 && me == 9 || d > 30 && me == 11)
     {
         cout << "Introduzca una fecha valida" << endl;
         cout << "Introduce una fecha con el orden (Dia,mes,ano)" << endl;
         cin >> d >> p >> me >> p >> ye;
     }

    if (d == 30 && me == 4 || d == 30 && me == 6 || d == 30 && me == 9 || d == 30 && me == 11) //------------
    {                                                                                                      //
        cout << "\n\t el siguiente dia sera: " << 1 << '/' << me + 1 << '/' << ye;        // 
    }                                                                                                      // 
                                                                                                           // MESES CON 30 DIAS
    else if ((me == 4) || (me == 6) || (me == 9) || (me == 11) && d < 30 )
    {                                                                                                      //
        cout << "\n\t el siguiente dia sera: " << d + 1 << '/' << me << '/' << ye;
    }
                                                                                                                //FINAL


    else if ((me == 1) || (me == 3) || (me == 5) || (me == 7) || (me == 10)|| (me == 8) || (me ==12) && d < 31) //-------------
                                                                                                           //
    {                                                                                                      //
        cout << "\n\t el siguiente dia sera: " << d + 1 << '/' << me << '/' << ye;      //
    }                                                                                                      //
                                                                                                           // MESES CON 31 DIAS

    else if (d == 31 && me == 12)                                                                       //
    {

        cout << "\n\t el siguiente dia sera: " << 1 << '/' << 1 << '/' << ye + 1 ;                    // 
    }

    else if ((me == 1) || (me == 3) || (me == 5) || (me == 7) || (me == 10) || (me==8) || (me==12) && d == 31)  //
    {

        cout << "\n\t el siguiente dia sera: " << 1 << '/' << me + 1 << '/' << ye;         //------------
    }

    else if (d < 29 && me == 2 && ye % 4 == 0)                                                        //---------------- INICIO

    {
        cout << "\n\t el siguiente dia sera: " << d + 1 << '/' << me << '/' << ye;     //
    }
 
    else if (d == 29 && me == 2 && ye % 4 == 0)                                                       //  FEBRERO EN AÑO BISIESTO 

    {

        cout << "\n\t el siguiente dia sera: " << 1 << '/' << me + 1 << '/' << ye;         //
    }

    else if (d == 28 && me == 2 && ye % 4 != 0)                                                //
    {

        cout << "\n\t el siguiente dia sera: " << 1 << '/' << me + 1 << '/' << ye; //---------------------
    }

    else if (d == 28 && me == 2 && ye % 4 == 0)                                                   //-----------
    {
        cout << "\n\t el siguiente dia sera: " << d + 1 << '/' << me << '/' << ye; //  FEBRERO EN AÑO REGULAR
    }

    else if (d < 28 && me == 2 && ye % 4 == 0 || ye % 4 != 0)                                      //
    {
        
        cout << "\n\t el siguiente dia sera: " << d + 1 << '/' << me << '/' << ye; //
    }  
}