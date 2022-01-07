#include <iostream>
#include "matrix.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void pengurangan(matrix &M){
    system("CLS");
    int i, j, a, b;
    matrix m;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+ Pengurangan Matrix =+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "Masukkan Baris dan Kolom Matrix: " << endl;
    cin >> a;
    b = a;

    cout << "Masukkan Nilai Matrix Pertama: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> m.matrix1[i][j];
        }
    }
    cout << "Masukkan Nilai Matrix Kedua: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> m.matrix2[i][j];
        }
    }

    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            m.hasil[i][j] = m.matrix1[i][j] - m.matrix2[i][j];
        }
    }
    cout << endl;
    cout << "Hasil Pengurangan Matrix: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<< m.hasil[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}

