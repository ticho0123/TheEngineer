#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "matrix.h"
#include <conio.h>
#include "main.h"
using namespace std;

void hitungPengurangan(matrix M){
    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.matrix1[M.i][M.j];
        }
    }

    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.matrix2[M.i][M.j];
        }
    }
    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            M.hasil[M.i][M.j] = M.matrix1[M.i][M.j] - M.matrix2[M.i][M.j];
        }
    }
}

void generatePengurangan(matrix &M){
	srand(time(NULL));
    M.a = rand() % 4 + 1;
    M.b = M.a;
    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.data1 = rand() % 10;
            M.matrix1[M.i][M.j] = M.data1;
        }
    }

    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.data2 = rand() % 10;
            M.matrix2[M.i][M.j] = M.data2;
        }
    }

    for (M.i=0;M.i<M.a;M.i++){
        for (M.j=0;M.j<M.b;M.j++){
            M.hasil[M.i][M.j] = M.matrix1[M.i][M.j] - M.matrix2[M.i][M.j];
        }
    }

}

void tulisSoalPengurangan(matrix M){
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitunglah Matrix Pengurangan di bawah ini!" << endl;
    cout << "Matrix 1:" << endl;
    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            cout << M.matrix1[M.i][M.j] << " ";
        }
        cout << endl;
    }
    cout << "Matrix 2: " << endl;
    for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            cout << M.matrix2[M.i][M.j] << " ";
        }
        cout << endl;
    }
}

void bacaJawabanPengurangan(matrix &M){
    cout << "Jawaban: " << endl;
	for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            cin >> M.jawaban[M.i][M.j];
        }
    }
}

bool cekJawabanPengurangan(matrix M){
/*   for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            M.dif[M.i][M.j] = M.jawaban[M.i][M.j] - M.hasil[M.i][M.j];
        }
    }
    for(M.i=0; M.i<M.a; M.i++){
        if(M.dif[M.i]==0){
            for(M.j=0; M.j<M.b; M.j++){
                if(M.dif[M.j]==0){
                    return true;
            } else return false;
            }
        } else return false;
    } */
    	for(M.i=0; M.i<M.a; M.i++){
        for(M.j=0; M.j<M.b; M.j++){
            if (M.jawaban[M.i][M.j] != M.hasil[M.i][M.j]){
                return false;
            }
        }
    }
    return true;
}
void penguranganmatrixlur(matrix &M, struct account *acc){
                            generatePengurangan(M);
                            tulisSoalPengurangan(M);
                            bacaJawabanPengurangan(M);
                            if(cekJawabanPengurangan(M)){
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
