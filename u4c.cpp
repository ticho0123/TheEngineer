#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "u4.h"
#include <conio.h>
#include "main.h"
using namespace std;

double hitungPersamaanLinear (PersamaanLinear Psl) {
	Psl.n = (2000*Psl.k)+(3000*Psl.l);
	return Psl.n;
}

void generatePersamaanLinear (PersamaanLinear &Psl) {
	srand(time(NULL));
	Psl.k = rand() % 10 + 1;
	Psl.l = rand() % 10 + 1;

	Psl.n = hitungPersamaanLinear(Psl);
}

void tulisPertanyaanPersamaanLinear (PersamaanLinear Psl) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitung harga" << endl;
	cout << "jika harga 1 bolpoin dan 3 buku adalah Rp.11000 dan harga 2 bolpoin dan 2 buku adalah Rp.10000,jika a adalah jumlah bolpoin yang dibeli dan b adalah jumlah buku yang dibeli, berapa harga bolpoin dan buku tersebut? " << endl;
	cout << "Jumlah bolpoin yang dibeli " << Psl.k << endl;
	cout << "Jumlah buku yang dibeli " << Psl.l << endl;
}

void bacaJawabanPersamaanLinear (PersamaanLinear &Psl) {
	cout << "Jawab : ";
	cin >> Psl.o;
}

bool cekJawabanPersamaanLinear (PersamaanLinear Psl) {
	if (Psl.o == Psl.n) return true;
	else return false;
}
void PersamaanLinearlur(PersamaanLinear &Psl, struct account *acc){
	generatePersamaanLinear(Psl);
	tulisPertanyaanPersamaanLinear(Psl);
	bacaJawabanPersamaanLinear(Psl);
	if (cekJawabanPersamaanLinear(Psl)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<< Psl.n << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
