#include <iostream>
#include <math.h>
#include "main.h"
#include <conio.h>
#include <windows.h>

using namespace std;


void perslinlur(){

int k,l,Hasil;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+ Persamaan Linier =+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";

	cout << "Hitung harga" << endl;
	cout << "jika harga 1 bolpoin dan 3 buku adalah Rp.11000 dan harga 2 bolpoin dan 2 buku adalah Rp.10000,jika a adalah jumlah bolpoin yang dibeli dan b adalah jumlah buku yang dibeli, berapa harga bolpoin dan buku tersebut? " << endl;
	cout << "Jumlah bolpoin yang dibeli : " << endl;
	cin >> k;
	cout << "Jumlah buku yang dibeli " << endl;
	cin >> l;
	Hasil = (2000*k)+(3000*l);
	cout << "Hasilnya Adalah : "<<Hasil<<endl<<endl;

    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}

