#include <iostream>
#include <stdlib.h>
#include "go.h"
#include "main.h"
#include <time.h>
#include <conio.h>
#include <cmath>
#define pi 3.14159

using namespace std;

double hitungsintrigonometri(trigonometri1 trs) {
	trs.sinn = sin(trs.x1);
	return trs.sinn;
}

void generatesintrigonometri(trigonometri1 &trs) {
	srand(time(NULL));
	trs.x1 = rand() % 360/2;			// random soal

	trs.sinn = hitungsintrigonometri(trs);		// siapkan jawaban benar
}

void tulisPertanyaansintrigonometri(trigonometri1 trs) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "sin("<<trs.x1<<") = "<<endl;
}

void bacaJawabansintrigonometri(trigonometri1 &trs) {
	cout << "Jawab: Q= ";
	cin >> trs.jawaban;
}

bool cekJawabansintrigonometri(trigonometri1 trs) {
	if ( fabs(trs.sinn-trs.jawaban) <= 0.01* fabs(trs.sinn) ) return true;
	else return false;
	}

void sinnlur(trigonometri1 trs, struct account *acc){
    generatesintrigonometri(trs);
	tulisPertanyaansintrigonometri(trs);
	bacaJawabansintrigonometri(trs);
	if (cekJawabansintrigonometri(trs)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<trs.sinn << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}
