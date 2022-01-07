#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"
#include "main.h"
#include <conio.h>
using namespace std;

void hitungPerkalian(matrix M){
    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.matrix1[M.i][M.j];
        }
    }

    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            M.hasil[M.i][M.j] = M.matrix1[M.i][M.j] * M.skalar;
        }
    }
}

void generatePerkalian(matrix &M){
	srand(time(NULL));
    M.a = rand() % 3 + 1;
    M.b = M.a;
    M.skalar = rand() % 4 + 1;
    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.data1 = rand() % 10;
            M.matrix1[M.i][M.j] = M.data1;
        }
    }

    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            M.hasil[M.i][M.j] = M.matrix1[M.i][M.j] * M.skalar;
        }
    }
}

void tulisSoalPerkalian(matrix M){
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitunglah Matrix Perkalian Skalar di bawah ini!" << endl;
    cout << "Matrix 1:" << endl;
    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            cout << M.matrix1[M.i][M.j] << " ";
        }
        cout << endl;
    }
    cout << "Perkalian Skalar: " << endl;
    cout << M.skalar << endl;
}

void bacaJawabanPerkalian(matrix &M){
    cout << "Jawaban: " << endl;
	for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            cin >> M.jawaban[M.i][M.j];
        }
    }
}

bool cekJawabanPerkalian(matrix M){
	/*if (M.jawaban[M.i][M.j] == M.hasil[M.i][M.j]) {
            return true;
	} else return false;*/

	for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            if (M.jawaban[M.i][M.j] != M.hasil[M.i][M.j]) {
                return false;
            }
        }
    }
    return true;
}

void perkalianmatrixlur(matrix &M, struct account *acc){
                            generatePerkalian(M);
                            tulisSoalPerkalian(M);
                            bacaJawabanPerkalian(M);
                            if(cekJawabanPerkalian(M)){
                            acc->point++;
                            cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
                            } else {
                                cout << "Jawaban Anda Salah. Yang benar: " << endl;
                                for(M.i=0; M.i<M.a; M.i++){
                                    for(M.j=0; M.j<M.b; M.j++){
                                        cout << M.hasil[M.i][M.j] << " ";
                                    }
                                cout << endl;
                                }
                                    save_point(acc);
                                    cout << "Total Poin anda adalah = " << acc->point << endl;
                            }
                            cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}
