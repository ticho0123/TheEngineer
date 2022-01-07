#include <iostream>
#include <stdlib.h>
#include<time.h>
#include "mean.h"
#include "main.h"
#include <conio.h>
using namespace std;

void bacaDataMean(mean &A) {
    int i = 0;
    cin >> A.data;
    A.hasil = 0;
    while(i!=A.data){
        cin >> A.nilai[i];
        A.hasil = A.hasil+A.nilai[i];
        i++;
    }

    A.jml = A.hasil/A.data;
}

void generateMean(mean &A){
    srand(time(NULL));
    A.data = rand() % 10 + 1;
    A.hasil = 0;
    int i = 0;
    while(i!=A.data){
        A.nilai[i] = rand() % 10 + 1;
        cout << A.nilai[i] << endl;
        A.hasil = A.hasil + A.nilai[i]  ;
        i++;
    }
    A.jml = A.hasil/A.data;
}
void tulisMean(mean &A){
    system("CLS");
    cout<<"=========================================================================================\n";

    cout << "Dengan data ="<<endl<< A.hasil <<endl;
    cout << "Nilai mean adalah : " << A.data <<endl;
}

void bacaJawabanMean(mean &A) {
	cout << "Jawab: mean="<<endl;
	cin >> A.jawab;
}

bool cekJawabanMean (mean A){
      if (A.jawab==A.jml)
        return true;
      else return false;
}


void meanlur(mean &A, struct account *acc){
    generateMean(A);
    tulisMean(A);
    bacaJawabanMean(A);
    if (cekJawabanMean(A)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<< A.jml << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
