#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "u4.h"
#include "main.h"
#include <conio.h>
using namespace std;

double hitungJumlah12Suku (Jumlah12Suku Jsu) {
	Jsu.g =6 * (2*Jsu.c+11*Jsu.d);
	return Jsu.g;
}

void generateJumlah12Suku (Jumlah12Suku &Jsu) {
	srand(time(NULL));
	Jsu.c = rand() % 10 + 1;
	Jsu.d = rand() % 10 + 1;

	Jsu.g = hitungJumlah12Suku(Jsu);
}

void tulisPertanyaanJumlah12Suku (Jumlah12Suku Jsu) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitung jumlah 12 suku pertama bilangan berikut" << endl;
	cout << "Suku pertama nya " << Jsu.c << endl;
	cout << "Dengan beda setiap suku nya " << Jsu.d << endl;
}

void bacaJawabanJumlah12Suku (Jumlah12Suku &Jsu) {
	cout << "Jawab : ";
	cin >> Jsu.h;
}

bool cekJawabanJumlah12Suku (Jumlah12Suku Jsu) {
	if (Jsu.h == Jsu.g) return true;
	else return false;
}

void Jumlah12Sukulur(Jumlah12Suku &Jsu, struct account *acc){
	generateJumlah12Suku(Jsu);
	tulisPertanyaanJumlah12Suku(Jsu);
	bacaJawabanJumlah12Suku(Jsu);
	if (cekJawabanJumlah12Suku(Jsu)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<<Jsu.g << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
