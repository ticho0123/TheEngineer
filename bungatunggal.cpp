#include <iostream>
#include <conio.h>
#include "bunga.h"
#include <stdlib.h>

using namespace std;

void bungatunggal(flat hore)
{
    system("CLS");
    int n,r;
    long int m;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+=+= Bunga Tunggal =+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"# Bunga Tunggal #\n\n";
    cout<<"Input modal awal tabungan/pinjaman = ";
    cin>>m;
    cout<<"Input bunga/thn (%) = ";
    cin>>r;
    cout<<"Input lama tabungan/pinjaman (thn) = ";
    cin>>n;
    cout<<"\nTotal bunga dalam "<<n<<" tahun adalah Rp."<<n*r*m/100<<endl;
    cout<<"Jumlah tabungan/pinjaman anda dalam "<<n<<" tahun adalah Rp."<<m+n*r*m/100<<endl<<endl;
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
