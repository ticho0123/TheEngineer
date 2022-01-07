#include <iostream>
#include "matrix.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void penjumlahan(matrix &M){
    system("CLS");
    int i, j, a, b;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+ Penjumlahan Matrix =+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "Masukkan Baris dan Kolom Matrix: " << endl;
    cin >> a;
    b = a;

    cout << "Masukkan Nilai Matrix Pertama: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> M.matrix1[i][j];
        }
    }
    cout << "Masukkan Nilai Matrix Kedua: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> M.matrix2[i][j];
        }
    }

    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            M.hasil[i][j] = M.matrix1[i][j] + M.matrix2[i][j];
        }
    }
    cout << endl;
    cout << "Hasil Penjumlahan Matrix" << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<< M.hasil[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}

