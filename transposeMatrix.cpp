#include <iostream>
#include "matrix.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void transpose(matrix &M){
    int i, j, a, b;
    matrix m;
        system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+= Transpose Matrix +=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout << "Masukkan Baris dan Kolom Matrix: " << endl;
    cin >> a;
    b = a;

    cout << "Masukkan Nilai Matrix: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> m.matrix1[i][j];
        }
    }

    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            m.hasil[i][j] = m.matrix1[j][i];
        }
    }
    cout << endl;
    cout << "Hasil Transpose Matrix: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<< m.hasil[i][j] << " ";
        }
        cout<<endl<<endl;
    }
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
