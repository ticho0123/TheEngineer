#include <iostream>
#include "matrix.h"
using namespace std;

void penjumlahan(matrix &M){
    int i, j, a, b;
    matrix m;
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
            m.hasil[i][j] = m.matrix1[i][j] + m.matrix2[i][j];
        }
    }
    cout << endl;
    cout << "Hasil Penjumlahan Matrix" << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cout<< m.hasil[i][j] << " ";
        }
        cout<<endl;
    }
}

