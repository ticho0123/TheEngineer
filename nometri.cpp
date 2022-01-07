#include <iostream>
#include <stdlib.h>
#include "nometri.h"
#include "main.h"
#include <time.h>
#include <conio.h>
#include <cmath>
#define pi 3.14159

using namespace std;

double hitungtantrigonometri(trigonometri2 trx) {
	trx.tann = tan(trx.x2);
	return trx.tann;
}

void generatetantrigonometri(trigonometri2 &trx) {
	srand(time(NULL));
	trx.x2 = rand() % 360/2;			// random soal

	trx.tann = hitungtantrigonometri(trx);		// siapkan jawaban benar
}

void tulisPertanyaantantrigonometri(trigonometri2 trx) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "tan("<<trx.x2<<") = "<<endl;
}

void bacaJawabantantrigonometri(trigonometri2 &trx) {
	cout << "Jawab: Q= ";
	cin >> trx.jawaban;
}

bool cekJawabantantrigonometri(trigonometri2 trx) {
	if ( fabs(trx.tann-trx.jawaban) <= 0.01* fabs(trx.tann) ) return true;
	else return false;
}

void tanlur(trigonometri2 trx, struct account *acc){
    generatetantrigonometri(trx);
	tulisPertanyaantantrigonometri(trx);
	bacaJawabantantrigonometri(trx);
	if (cekJawabantantrigonometri(trx)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<trx.tann << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}
