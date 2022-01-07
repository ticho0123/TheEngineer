#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "u4.h"
#include "main.h"
#include <conio.h>
using namespace std;

double hitungSukuKeEmpat (SukuKeEmpat Skm) {
	Skm.f = (20 * Skm.b)+Skm.a;
	return Skm.f;
}

void generateSukuKeEmpat (SukuKeEmpat &Skm) {
	srand(time(NULL));
	Skm.a = rand() % 10 + 1;
	Skm.b = rand() % 10 + 1;

	Skm.f = hitungSukuKeEmpat(Skm);
}

void tulisPertanyaanSukuKeEmpat (SukuKeEmpat Skm) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitung suku ke 21 dari bilangan berikut" << endl;
	cout << "Suku pertama nya " << Skm.a << endl;
	cout << "Dengan beda setiap suku nya " << Skm.b << endl;
}

void bacaJawabanSukuKeEmpat (SukuKeEmpat &Skm) {
	cout << "Jawab : ";
	cin >> Skm.jawaban;
}

bool cekJawabanSukuKeEmpat (SukuKeEmpat Skm) {
	if (Skm.jawaban == Skm.f) return true;
	else return false;
}

void SukuKeEmpatlur(SukuKeEmpat &Skm, struct account *acc){
	generateSukuKeEmpat(Skm);
	tulisPertanyaanSukuKeEmpat(Skm);
	bacaJawabanSukuKeEmpat(Skm);
	if (cekJawabanSukuKeEmpat(Skm)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<Skm.f << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
