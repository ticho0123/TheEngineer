#include <iostream>
#include <stdlib.h>
#include "tri.h"
#include "main.h"
#include <time.h>
#include <conio.h>
#include <cmath>
#define pi 3.14159

using namespace std;

double hitungcostrigonometri(trigonometri tr) {
	tr.coss = cos(tr.x);
	return tr.coss;
}

void generatecostrigonometri(trigonometri &tr) {
	srand(time(NULL));
	tr.x = rand() % 360/2;			// random soal

	tr.coss = hitungcostrigonometri(tr);		// siapkan jawaban benar
}

void tulisPertanyaancostrigonometri(trigonometri tr) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "cos("<<tr.x<<") = "<<endl;
}

void bacaJawabancostrigonometri(trigonometri &tr) {
	cout << "Jawab: Q= ";
	cin >> tr.jawaban;
}

bool cekJawabancostrigonometri(trigonometri tr) {
	if ( fabs(tr.coss-tr.jawaban) <= 0.01* fabs(tr.coss) ) return true;
	else return false;
}

void coslur(trigonometri tr, struct account *acc){
    generatecostrigonometri(tr);
	tulisPertanyaancostrigonometri(tr);
	bacaJawabancostrigonometri(tr);
	if (cekJawabancostrigonometri(tr)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<tr.coss << endl;
        save_point(acc);
        cout << " Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}
