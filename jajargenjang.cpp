#include <iostream>
#include "main.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void jajargenjanglurs(){
    int hasil,a,t;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+ Luas Jajar genjang =+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "Masukkan Alas : \n";
    cin >> a;
    cout << "Masukkan Tinggi : \n";
    cin >> t;
    hasil=a*t;
    cout << endl;
    cout << "Hasilnya adalah : " << hasil<<endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
