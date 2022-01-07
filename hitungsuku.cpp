#include <iostream>
#include "main.h"
#include <conio.h>
#include <windows.h>
using namespace std;

void hitungsuku(){

 int a,b,n,barisan,deret;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+= Aritmatika Suku =+=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";

 cout <<"masukan suku pertama = ";
 cin >> a;

 cout <<"masukan beda suku = ";
 cin >> b;

 cout <<"masukan suku ke n = ";
 cin >> n;

 barisan=a+(n-1)*b;
 deret=(2*a+(n-1)*b)*n/2;
 cout <<"barisan aritmatika = "<<barisan<<endl;
 cout <<"deret aritmatika = "<<deret<<endl<<endl;

    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
