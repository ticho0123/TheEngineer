#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "EKSPONEN.h"
#include "main.h"
#include <conio.h>
using namespace std;

int hitungEksponen(Eksponen Eks) {
Eks.f= pow (Eks.m2, Eks.m1);
    return Eks.f;
}

void generateDataEksponen(Eksponen &Eks) {
	srand(time(NULL));
	Eks.m1 = rand() % 4 + 1;			// random soal
	Eks.m2 = rand() % 4 + 1;

	Eks.f = hitungEksponen(Eks);		// siapkan jawaban benar
}

void tulisPertanyaanEksponen(Eksponen Eks) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitunglah eksponensial dari angka tersebut " << endl;
	cout << "Dengan angka " << Eks.m2 << endl;
    cout << "Dengan pangkat " << Eks.m1 << endl;
}

void bacaJawabanEksponen(Eksponen &Eks) {
	cout << "Jawab: ";
	cin >> Eks.jawaban;
}

bool cekJawabanEksponen(Eksponen Eks) {
	float dif = Eks.jawaban - Eks.f;
	if (dif==0)			// absolute
	return true;
	else return false;
}

void Eksponenlur(Eksponen Eks, struct account *acc){
    generateDataEksponen(Eks);
    tulisPertanyaanEksponen(Eks);
    bacaJawabanEksponen(Eks);
    if (cekJawabanEksponen(Eks)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<Eks.f << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
