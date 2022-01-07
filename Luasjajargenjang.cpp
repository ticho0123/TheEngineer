#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Luasjajargenjang.h"
#include "main.h"
#include <conio.h>
using namespace std;

int hitungLuasjajargenjang(Jajargenjang Jjg) {
Jjg.f=(Jjg.m2*Jjg.m1);
    return Jjg.f;
}

void generateDataLuasJajargenjang(Jajargenjang &Jjg) {
	srand(time(NULL));
	Jjg.m1 = rand() % 3 + 1;			// random soal
	Jjg.m2 = rand() % 5 + 1;

	Jjg.f = hitungLuasjajargenjang(Jjg);		// siapkan jawaban benar
}

void tulisPertanyaanLuasjajargenjang(Jajargenjang Jjg) {
    system("CLS");
    cout<<"=========================================================================================\n";
	cout << "Hitunglah luas dari jajar genjang tersebut " << endl;
	cout << "Dengan Alas " << Jjg.m1 << endl;
	cout << "Dengan Tinggi " << Jjg.m2 << endl;
}

void bacaJawabanLuasjajargenjang(Jajargenjang &Jjg) {
	cout << "Jawab: ";
	cin >> Jjg.jawaban;
}

bool cekJawabanLuasjajargenjang(Jajargenjang Jjg) {
	int dif = Jjg.jawaban -Jjg.f;
	if (dif==0)			// absolute
	return true;
	else return false;
}

void Jajargenjanglur(Jajargenjang &Jjg, struct account *acc){
    generateDataLuasJajargenjang(Jjg);
    tulisPertanyaanLuasjajargenjang(Jjg);
    bacaJawabanLuasjajargenjang(Jjg);
    if (cekJawabanLuasjajargenjang(Jjg)) {
        acc->point++;
        cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
} else {
        cout << "Jawaban Anda Salah. Yang benar: "<< Jjg.f << endl;
        save_point(acc);
        cout << "Total Poin anda adalah = " << acc->point << endl;
	}
	cout << endl;
    cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
		 }
