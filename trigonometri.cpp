#include <iostream>
#include <cmath>
#define PI 3.141592653589793238463
#include <stdio.h>
#include <stdlib.h>
#include "tri.h"
#include <conio.h>
#include <windows.h>
using namespace std;


void trigonometricuy(trigonometri tr)
{
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+Trigonometri=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "masukkan nilai: ";
    cin >> tr.x;
    cout << endl;
    cout << "sin(" << tr.x << ") = " << sin(tr.x) << endl;
    cout << "cos(" << tr.x << ") = " << cos(tr.x) << endl;
    cout << "tan(" << tr.x << ") = " << tan(tr.x) << endl<< endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
