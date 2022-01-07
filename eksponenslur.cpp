#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "EKSPONEN.h"
#include "main.h"
#include <conio.h>
using namespace std;

void eksponenslurr(){
    int a,b,f;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+= Eksponen +=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
	cout << "Masukkan pangkat " << endl;
	cin >> b;
	cout << "Masukkan angka " << endl;
	cin >> a;
	f= pow (b, a);
	cout << "Hasil eksponen adalah : "<<f<<endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
