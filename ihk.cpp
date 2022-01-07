#include <iostream>
#include <stdlib.h>
#include "ihk.h"
#include "main.h"
#include <time.h>
#include <conio.h>
#include <cmath>
using namespace std;

void bacaihk( rumus &enak, struct account *acc){
    system("CLS");
	double jawaban;
	srand(time(NULL));
	enak.a = ((rand() % 20) + 2);
	srand(time(NULL));
	enak.t = ((rand() % 10) * 2);

    cout<<"=========================================================================================\n";
	cout << "Suatu segitiga siku- siku mempunyai sisi tegak (AB) panjangnya ";
	cout << enak.t << endl;
	cout << "Sisi mendatarnya (BC) ";
	cout << enak.a << endl;
	cout << "Berapakah panjang sisi miringnya (AC) ?"<<endl;
	cout << "Masukkan jawaban Anda: ";
	cin >> jawaban;
	if (ihk(enak) == jawaban) {
		acc->point++;
		cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
	} else {
		cout << "Jawaban Anda salah. Jawaban yang benar " << ihk(enak) << ".\nPoint Anda sekarang " << acc->point << " point\n";
	}
	save_point(acc);
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}

double ihk(rumus enak){
	enak.lm = sqrt((enak.a*enak.a)+(pow(enak.t, 2)));
	enak.hasil = 0.5*enak.a*enak.t;
    return enak.hasil;
}

void tulisihk (rumus enak){
	cout << enak.hasil;
}
