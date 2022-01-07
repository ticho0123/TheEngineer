#include <iostream>
#include<cmath>
#include "ihk.h"
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

void segitigalurrr(rumus enak)
{
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Pythagoras =+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "masukkan panjang sisi alas (m)   : ";
    cin >> enak.a;
    cout << "masukkan panjang sisi tegak (m)  : ";
    cin >> enak.t;
    cout << "sisi miring (m)                  :" << sqrt((enak.a*enak.a) + (pow(enak.t, 2))) << endl;
    cout << "luas (m2)                        : " << 0.5*enak.a*enak.t << endl<< endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
