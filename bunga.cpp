#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "bunga.h"
#include "main.h"
#include <conio.h>

void bacabunga(flat &hore, struct account *acc)
{
    system("CLS");
	double jawaban;
	srand(time(NULL));
	hore.modal = (rand() % 10 * 100000);
	srand(time(NULL));
	hore.bunga = ((rand() % 10) + 1);
	srand(time(NULL));
	hore.n = ((rand() % 5) - 1);
    cout<<"=========================================================================================\n";
	cout << "Diketahui modal pinjaman Rp.";
	cout << hore.modal << endl;
	cout << "dengan bunga sebesar ";
	cout << hore.bunga ;
	cout << " % /tahun, maka setelah ";
	cout << hore.n ;
	cout << " tahun modalnya adalah"<<endl;
	cout << "Masukkan jawaban Anda: ";
	cin >> jawaban;
	if (bunga(hore) == jawaban) {
		acc->point++;
		cout << "Jawaban Anda benar. Point Anda sekarang " << acc->point << " point\n";
	} else {
		cout << "Jawaban Anda salah. Jawaban yang benar " << bunga(hore) << ".\nPoint Anda sekarang " << acc->point << " point\n";
	}
	save_point(acc);
			cout<<"=========================================================================================\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
    system("CLS");
}

double bunga(flat hore){
    hore.hasilbungas = hore.modal*hore.bunga*hore.n/100;
	hore.hasilbunga = hore.modal+hore.modal*hore.bunga*hore.n/100;
    return hore.hasilbunga;
    }

void tulisbunga(flat hore){
	cout << hore.hasilbunga;
}
