#include <iostream>
#include "main.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void meanmantab(){
    int n, i;
    float num[100], sum=0.0, average;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+= Mean +=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "Masukkan jumlah angka data : ";
    cin >> n;
    while (n > 100 || n <= 0)
    {
        cout << "Error! jumlah harus dalam kisaran (1 hingga 100)." << endl;
        cout << "Masukkan angka kembali: ";
        cin >> n;
    }
    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Masukkan Angka: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;

    cout <<endl;
    cout << "Nilai Mean = " << average;
    cout << endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
