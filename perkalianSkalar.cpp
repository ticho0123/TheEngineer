#include <iostream>
#include "matrix.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void perkalianSkalar(matrix &M){
    int i, j, a, b, skalar;
        system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+= Perkalian Matrix +=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    matrix m;
    cout << "Masukkan Baris dan Kolom Matrix: " << endl;
    cin >> a;
    b = a;

    cout << "Masukkan Nilai Matrix: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> m.matrix1[i][j];
        }
    }
    cout << "Masukkan Nilai Skalar: " << endl;
    cin >> skalar;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            m.hasil[i][j] = m.matrix1[i][j] * skalar;
        }
    }
    cout << endl;
    cout << "Hasil Perkalian Skalar Matrix: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout << m.hasil[i][j] << " ";
        }
        cout << endl<<endl;
    }
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}


