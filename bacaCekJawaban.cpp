#include <iostream>
#include "matrix.h"
using namespace std;

void bacaJawaban(matrix &M) {
    int a, b, i, j;
    cout << "Jawaban: " << endl;
    for(i=0; i<a; i++){
        for(j=0; j<b; j++){
            cin >> M.jawaban[i][j];
        }
    }
}

bool cekJawaban(matrix &M) {
    int a, b, i, j;
    if (M.jawaban[i][j] != M.hasil[i][j]) {
        cout << "Jawaban Anda Salah, yang Benar: " << endl;
        for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                cout << M.hasil[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Jawaban Anda Benar!" << endl;
    }
}
