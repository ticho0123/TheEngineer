#include <iostream>
#include <conio.h>
#include "main.h"
#include <windows.h>

using namespace std;

void hitungjumlahlur(){
    int a=0, b, c, jumlah=0, i, n;
    system("CLS");
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n";
    cout <<"=+=+=+=+=+ Kalkulator =+=+=+=+=+=\n";
    cout <<"=+=+=+ Aritmatika Jumlah +=+=+=+=\n";
    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";

    cout<<"MENGHITUNG JUMLAH DERET BILANGAN"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Masukkan bilangan awal : "<<endl;
    cin>>a;
    cout<<"Masukkan beda : "<<endl;
    cin>>b;
    cout<<"Masukkan jumlah sampai deret ke-n : "<<endl;
    cin>>n;

    cout<<"Deret ke-"<<n<<" : ";
    cout<<a<<",";
    jumlah=jumlah+a;
    for(i=0; i<n-1; i++){
             c=a+b;
             a=c;
             cout<<c<<",";
             jumlah=jumlah+c;
    }

    cout<<"\nJumlah deret ke-"<<n<<" : ";
    cout<<jumlah<<endl<<endl;

    cout <<"=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=\n\n";
    cout<<"untuk kembali ke menu awal silahkan tekan enter! ";
    getch();
}
